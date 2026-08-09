CC = gcc
CFLAGS = -Wall -Wextra -g -std=c99 -D_POSIX_C_SOURCE=200809L
FLEX = flex
BISON = bison

TARGET = sql_validator

SRCS = main.c ast.c sql_parser.tab.c lex.yy.c
HEADERS = ast.h sql_parser.tab.h

all: $(TARGET)

sql_parser.tab.c sql_parser.tab.h: sql_parser.y ast.h
	$(BISON) -d -v sql_parser.y

lex.yy.c: sql_lexer.l sql_parser.tab.h ast.h
	$(FLEX) sql_lexer.l

$(TARGET): $(SRCS) $(HEADERS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -f $(TARGET) lex.yy.c sql_parser.tab.c sql_parser.tab.h sql_parser.output

test: $(TARGET)
	chmod +x run_tests.sh
	./run_tests.sh

.PHONY: all clean test
