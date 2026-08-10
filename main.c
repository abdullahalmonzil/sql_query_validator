#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
#include <io.h>
#include <windows.h>
#define ISATTY _isatty
#define STDIN_FD 0
#else
#include <unistd.h>
#define ISATTY isatty
#define STDIN_FD STDIN_FILENO
#endif

#include "ast.h"

/* External Bison/Flex functions and variables */
extern int yyparse(void);
extern void yyrestart(FILE *input_file);
extern FILE *yyin;
extern int yylineno;
extern int yycolumn;

extern ASTNode *g_ast_root;
extern int g_syntax_error;
extern char g_last_error[512];
extern int g_error_line;
extern int g_error_column;

/* Global Flag Options */
int g_show_ast = 0;
int g_show_tokens = 0;

/* ANSI Color Codes */
#define COLOR_RESET   "\033[0m"
#define COLOR_GREEN   "\033[1;32m"
#define COLOR_RED     "\033[1;31m"
#define COLOR_YELLOW  "\033[1;33m"
#define COLOR_CYAN    "\033[1;36m"
#define COLOR_BOLD    "\033[1m"

/* Cross-Platform fmemopen Fallback for Windows */
static FILE *open_query_stream(const char *query_str) {
#ifdef _WIN32
    FILE *stream = tmpfile();
    if (!stream) return NULL;
    fwrite(query_str, 1, strlen(query_str), stream);
    rewind(stream);
    return stream;
#else
    return fmemopen((void *)query_str, strlen(query_str), "r");
#endif
}

static void print_usage(const char *prog_name) {
    printf("SQL Query Validator & AST Visualizer (Flex & Bison)\n");
    printf("Usage: %s [options] [file.sql]\n\n", prog_name);
    printf("Options:\n");
    printf("  -a, --ast       Output Abstract Syntax Tree (AST) visualization\n");
    printf("  -t, --tokens    Display verbose token stream from Lexer\n");
    printf("  -f, --file FILE Parse SQL query file\n");
    printf("  -h, --help      Display this help menu\n\n");
}

static void print_caret_error(const char *query_buffer, int line, int col, const char *msg) {
    printf("%s[ERROR] Syntax Error at Line %d, Column %d:%s %s\n", COLOR_RED, line, col, COLOR_RESET, msg);
    
    if (!query_buffer || strlen(query_buffer) == 0) return;

    /* Extract line from buffer */
    int current_line = 1;
    const char *line_start = query_buffer;
    const char *p = query_buffer;

    while (*p) {
        if (current_line == line) break;
        if (*p == '\n') {
            current_line++;
            line_start = p + 1;
        }
        p++;
    }

    /* Print line text */
    printf("  ");
    const char *line_end = line_start;
    while (*line_end && *line_end != '\n') {
        putchar(*line_end);
        line_end++;
    }
    printf("\n  ");

    /* Print caret offset */
    int num_spaces = col - 1;
    if (num_spaces < 0) num_spaces = 0;
    for (int i = 0; i < num_spaces; i++) {
        putchar(' ');
    }
    printf("%s^ Unexpected position%s\n", COLOR_RED, COLOR_RESET);
}

static int parse_query_string(const char *query_str) {
    g_syntax_error = 0;
    g_ast_root = NULL;
    yylineno = 1;
    yycolumn = 1;

    FILE *stream = open_query_stream(query_str);
    if (!stream) {
        perror("Failed to create query stream");
        return 1;
    }

    yyrestart(stream);
    int parse_res = yyparse();
    fclose(stream);

    if (parse_res == 0 && g_syntax_error == 0) {
        printf("%s[SUCCESS] SQL Query is Syntactically Valid!%s\n", COLOR_GREEN, COLOR_RESET);
        if (g_show_ast && g_ast_root) {
            ast_print(g_ast_root, 0);
        }
        if (g_ast_root) {
            ast_free(g_ast_root);
            g_ast_root = NULL;
        }
        return 0;
    } else {
        print_caret_error(query_str, g_error_line > 0 ? g_error_line : 1, g_error_column > 0 ? g_error_column : 1, g_last_error);
        if (g_ast_root) {
            ast_free(g_ast_root);
            g_ast_root = NULL;
        }
        return 1;
    }
}

static int parse_file(const char *filename) {
    FILE *f = fopen(filename, "r");
    if (!f) {
        fprintf(stderr, "%sError: Could not open file '%s'%s\n", COLOR_RED, filename, COLOR_RESET);
        return 1;
    }

    fseek(f, 0, SEEK_END);
    long size = ftell(f);
    fseek(f, 0, SEEK_SET);

    char *buffer = (char *)malloc(size + 1);
    if (!buffer) {
        fprintf(stderr, "Error: Memory allocation failed for file buffer.\n");
        fclose(f);
        return 1;
    }

    fread(buffer, 1, size, f);
    buffer[size] = '\0';
    fclose(f);

    printf("%sParsing SQL File:%s %s\n", COLOR_CYAN, COLOR_RESET, filename);
    int status = parse_query_string(buffer);
    free(buffer);
    return status;
}

static int run_input_loop(void) {
    int is_interactive = ISATTY(STDIN_FD);

    if (is_interactive) {
        printf("%s=======================================================%s\n", COLOR_CYAN, COLOR_RESET);
        printf("%s       SQL Query Validator & AST Visualizer REPL       %s\n", COLOR_BOLD, COLOR_RESET);
        printf("%s   Type your SQL queries ending with ';' or 'exit;'    %s\n", COLOR_CYAN, COLOR_RESET);
        printf("%s=======================================================%s\n\n", COLOR_CYAN, COLOR_RESET);
    }

    char buffer[4096] = "";
    char line[512];
    int overall_exit_code = 0;

    while (1) {
        if (is_interactive) {
            if (strlen(buffer) == 0) {
                printf("%ssql> %s", COLOR_GREEN, COLOR_RESET);
            } else {
                printf("%s   -> %s", COLOR_YELLOW, COLOR_RESET);
            }
            fflush(stdout);
        }

        if (!fgets(line, sizeof(line), stdin)) {
            if (is_interactive) printf("\nExiting REPL.\n");
            break;
        }

        if (strncmp(line, "exit;", 5) == 0 || strncmp(line, "quit;", 5) == 0) {
            if (is_interactive) printf("Goodbye!\n");
            break;
        }

        strcat(buffer, line);

        /* Check if statement terminates with ';' */
        if (strchr(line, ';')) {
            if (is_interactive) printf("\n--- Validating Statement ---\n");
            int res = parse_query_string(buffer);
            if (res != 0) {
                overall_exit_code = 1;
            }
            if (is_interactive) printf("\n");
            buffer[0] = '\0';
        }
    }

    return overall_exit_code;
}

int main(int argc, char *argv[]) {
    #ifdef _WIN32
    SetConsoleOutputCP(65001); /* Force Windows Console to UTF-8 for AST Tree */
    #endif

    const char *input_filename = NULL;

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-a") == 0 || strcmp(argv[i], "--ast") == 0) {
            g_show_ast = 1;
        } else if (strcmp(argv[i], "-t") == 0 || strcmp(argv[i], "--tokens") == 0) {
            g_show_tokens = 1;
        } else if (strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0) {
            print_usage(argv[0]);
            return 0;
        } else if (strcmp(argv[i], "-f") == 0 || strcmp(argv[i], "--file") == 0) {
            if (i + 1 < argc) {
                input_filename = argv[++i];
            } else {
                fprintf(stderr, "Error: Option -f requires a filename.\n");
                return 1;
            }
        } else if (argv[i][0] != '-') {
            input_filename = argv[i];
        } else {
            fprintf(stderr, "Unknown option: %s\n", argv[i]);
            print_usage(argv[0]);
            return 1;
        }
    }

    if (input_filename) {
        return parse_file(input_filename);
    } else {
        return run_input_loop();
    }
}
