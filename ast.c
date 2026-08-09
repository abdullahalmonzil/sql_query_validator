#include "ast.h"

ASTNode *ast_create_node(ASTNodeType type, const char *label, const char *value) {
    ASTNode *node = (ASTNode *)malloc(sizeof(ASTNode));
    if (!node) {
        fprintf(stderr, "Error: Memory allocation failed for ASTNode.\n");
        exit(EXIT_FAILURE);
    }
    node->type = type;
    node->label = label ? strdup(label) : NULL;
    node->value = value ? strdup(value) : NULL;
    node->num_children = 0;
    node->capacity = 4;
    node->children = (ASTNode **)malloc(sizeof(ASTNode *) * node->capacity);
    if (!node->children) {
        fprintf(stderr, "Error: Memory allocation failed for ASTNode children.\n");
        exit(EXIT_FAILURE);
    }
    return node;
}

void ast_add_child(ASTNode *parent, ASTNode *child) {
    if (!parent || !child) return;
    if (parent->num_children >= parent->capacity) {
        parent->capacity *= 2;
        parent->children = (ASTNode **)realloc(parent->children, sizeof(ASTNode *) * parent->capacity);
        if (!parent->children) {
            fprintf(stderr, "Error: Memory re-allocation failed for ASTNode children.\n");
            exit(EXIT_FAILURE);
        }
    }
    parent->children[parent->num_children++] = child;
}

static void ast_print_helper(ASTNode *node, const char *prefix, int is_last) {
    if (!node) return;

    printf("%s", prefix);
    printf("%s", is_last ? "└── " : "├── ");

    if (node->label) {
        printf("%s", node->label);
    }
    if (node->value) {
        printf(": %s", node->value);
    }
    printf("\n");

    char new_prefix[512];
    snprintf(new_prefix, sizeof(new_prefix), "%s%s", prefix, is_last ? "    " : "│   ");

    for (int i = 0; i < node->num_children; i++) {
        ast_print_helper(node->children[i], new_prefix, i == (node->num_children - 1));
    }
}

void ast_print(ASTNode *node, int indent_level) {
    (void)indent_level; // prefix handles indentation
    if (!node) return;

    printf("\n=======================================================\n");
    printf("              ABSTRACT SYNTAX TREE (AST)               \n");
    printf("=======================================================\n");

    if (node->label) {
        printf("%s", node->label);
    }
    if (node->value) {
        printf(": %s", node->value);
    }
    printf("\n");

    char prefix[512] = "";
    for (int i = 0; i < node->num_children; i++) {
        ast_print_helper(node->children[i], prefix, i == (node->num_children - 1));
    }
    printf("=======================================================\n\n");
}

void ast_free(ASTNode *node) {
    if (!node) return;
    if (node->label) free(node->label);
    if (node->value) free(node->value);
    for (int i = 0; i < node->num_children; i++) {
        ast_free(node->children[i]);
    }
    if (node->children) free(node->children);
    free(node);
}
