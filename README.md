# SQL Query Validator & AST Visualizer (Flex & Bison)

A feature-rich SQL Query Validator, Abstract Syntax Tree (AST) Generator, and Compiler Design Framework written in C using **Flex** (Lexical Analyzer) and **Bison** (LALR Parser).

Designed for a **Compiler Design Lab** course, this project goes beyond basic syntax validation to demonstrate a complete compiler frontend pipeline—including lexical analysis, context-free grammar parsing, AST node construction, pretty ASCII tree visualization, and caret-based error diagnostics.

---

## 🌟 Key Features

- **Lexical Analysis (Flex)**:
  - Case-insensitive keyword matching (`SELECT`, `select`, `Select`).
  - Column (`yycolumn`) and line (`yylineno`) position tracking.
  - Support for single-line comments (`--`) and multi-line comments (`/* ... */`).
  - Robust tokenization of identifiers, strings, integers, floats, operators, and delimiters.

- **Context-Free Grammar Parsing (Bison)**:
  - **DML (Data Manipulation Language)**:
    - `SELECT` statements with column aliases, `DISTINCT`, aggregate functions (`COUNT`, `SUM`, `AVG`, `MIN`, `MAX`), `GROUP BY`, `HAVING`, `ORDER BY (ASC/DESC)`, `LIMIT` & `OFFSET`.
    - `JOIN` operations: `INNER`, `LEFT OUTER`, `RIGHT OUTER`, `FULL OUTER`, `CROSS JOIN` with `ON` conditions.
    - Subqueries: Scalar subqueries and `WHERE col IN (SELECT ...)`.
    - Set Operations: `UNION`, `UNION ALL`, `EXCEPT`, `INTERSECT`.
    - Expressions: Logical (`AND`, `OR`, `NOT`), Relational (`=`, `!=`, `<`, `>`, `<=`, `>=`), `LIKE`, `BETWEEN`, `IS NULL`, `IS NOT NULL`, and `CASE WHEN ... THEN ... ELSE ... END`.
    - `INSERT INTO`: Single & multi-tuple `VALUES`, `INSERT INTO ... SELECT ...`.
    - `UPDATE`: Column assignment lists and `WHERE` clauses.
    - `DELETE FROM`: Table deletion with `WHERE` predicate.
  - **DDL (Data Definition Language)**:
    - `CREATE TABLE`: Column data types (`INT`, `VARCHAR`, `CHAR`, `TEXT`, `FLOAT`, `DECIMAL`, `BOOLEAN`, `TIMESTAMP`), inline constraints (`PRIMARY KEY`, `FOREIGN KEY ... REFERENCES ...`, `NOT NULL`, `UNIQUE`, `DEFAULT`, `CHECK`, `AUTO_INCREMENT`).
    - `ALTER TABLE`: `ADD COLUMN`, `DROP COLUMN`.
    - `DROP TABLE` / `TRUNCATE TABLE`: Support for `IF EXISTS`.
  - **TCL (Transaction Control Language)**:
    - `BEGIN TRANSACTION`, `COMMIT`, `ROLLBACK`, `SAVEPOINT`.

- **AST (Abstract Syntax Tree) Visualization**:
  - Dynamically builds AST nodes in C memory during parser reductions.
  - Generates pretty **ASCII tree diagrams** illustrating the internal parse tree representation (`--ast` flag).

- **Rich Caret Error Diagnostics**:
  - Colorized error output with exact line numbers, column numbers, and visual carets (`^`) pointing directly to unexpected tokens.

- **Interactive REPL & File Batch Parser**:
  - Command-line REPL (`sql> `) for testing interactive queries.
  - File mode (`-f test_queries.sql`) for processing batch `.sql` scripts.

---

## 🛠️ Prerequisites

Ensure you have the following tools installed on your system:
- **GCC** (`gcc`) - C99 compatible C compiler
- **Flex** (`flex >= 2.6`) - Fast Lexical Analyzer Generator
- **GNU Bison** (`bison >= 3.8`) - Parser Generator
- **GNU Make** (`make`)

On Fedora / RHEL / CentOS:
```bash
sudo dnf install gcc flex bison make
```
On Ubuntu / Debian:
```bash
sudo apt update && sudo apt install build-essential flex bison make
```

---

## 🚀 Building & Running

### 1. Compile the Project
Build the `sql_validator` executable:
```bash
make
```

### 2. Run Interactive REPL (with AST visualization)
```bash
./sql_validator --ast
```

Sample REPL Session:
```text
=======================================================
       SQL Query Validator & AST Visualizer REPL       
   Type your SQL queries ending with ';' or 'exit;'    
=======================================================

sql> SELECT u.id, u.name FROM users u WHERE u.age >= 18;

--- Validating Statement ---
[SUCCESS] SQL Query is Syntactically Valid!

=======================================================
              ABSTRACT SYNTAX TREE (AST)               
=======================================================
STATEMENT_LIST
└── SELECT_STMT
    ├── TARGET_LIST
    │   ├── COLUMN_REF: u.id
    │   └── COLUMN_REF: u.name
    ├── FROM_CLAUSE
    │   └── TABLE_LIST
    │       └── TABLE: users
    └── WHERE_CLAUSE
        └── OPERATOR: >=
            ├── COLUMN_REF: u.age
            └── INT: 18
=======================================================
```

### 3. Parse a SQL File
```bash
./sql_validator --ast -f test_queries.sql
```

### 4. Inspect Lexer Token Stream
```bash
./sql_validator --tokens -f test_queries.sql
```

### 5. Run Automated Test Suite
```bash
make test
```

---

## 📁 Project Structure

```
sql_query_validator/
├── sql_lexer.l          # Flex Lexer definition (Tokens, column tracking)
├── sql_parser.y         # Bison Parser definition (SQL Grammar, AST generation)
├── ast.h                # AST Node data structures & declarations
├── ast.c                # AST node allocation, ASCII tree renderer, memory cleanup
├── main.c               # CLI parser, REPL interactive loop, error caret formatter
├── Makefile             # Build system Makefile
├── test_queries.sql     # Sample valid SQL queries file
├── run_tests.sh         # Automated bash test suite runner (13 test cases)
├── IMPLEMENTATION_PLAN.md # Detailed technical implementation plan
└── WALKTHROUGH.md       # Project walkthrough and verification results
```

---

## 💡 Syntax Error Caret Demonstration

When given an invalid SQL statement, the validator pinpoints the exact position of the syntax error:

```text
sql> SELECT name FROM;

--- Validating Statement ---
[ERROR] Syntax Error at Line 1, Column 18: syntax error near ';'
  SELECT name FROM;
                  ^ Unexpected position
```

---

## 🧹 Clean Build Output
To remove generated parser C files (`sql_parser.tab.c`, `lex.yy.c`) and binary executable:
```bash
make clean
```
