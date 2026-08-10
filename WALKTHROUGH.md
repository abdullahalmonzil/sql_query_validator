# Walkthrough: SQL Query Validator & AST Visualizer (Flex & Bison)

We have successfully built, compiled, and verified a feature-rich **SQL Query Validator, AST Generator, and Compiler Lab Framework** written in C using **Flex** (lexer) and **Bison** (parser).


agy --conversation=4451d976-d106-4130-9265-1dbe6d2cabe8
---

## 1. Accomplished Features

- **Flex Lexer (`sql_lexer.l`)**:
  - Case-insensitive tokenization for SQL keywords (`SELECT`, `INSERT`, `UPDATE`, `DELETE`, `CREATE`, `ALTER`, `DROP`, `TRUNCATE`, `BEGIN`, `COMMIT`, `ROLLBACK`, `JOIN`, `WHERE`, `GROUP BY`, `HAVING`, `ORDER BY`, `LIMIT`, etc.).
  - Column tracking (`yycolumn`) and line counting (`yylineno`).
  - Handling for identifiers, numeric literals (integers, floats), single & double quoted string literals, and comment skipping (`--` and `/* ... */`).
- **Bison Parser (`sql_parser.y`)**:
  - Context-Free Grammar (CFG) rules covering SQL DML (`SELECT`, `INSERT`, `UPDATE`, `DELETE`), DDL (`CREATE TABLE`, `ALTER TABLE`, `DROP TABLE`, `TRUNCATE TABLE`), and TCL (`BEGIN`, `COMMIT`, `ROLLBACK`, `SAVEPOINT`).
  - Support for `JOIN`s (`INNER`, `LEFT`, `RIGHT`, `FULL`, `CROSS`), subqueries (`WHERE col IN (SELECT ...)`), set operations (`UNION`, `EXCEPT`, `INTERSECT`), aggregate functions (`COUNT`, `SUM`, `AVG`, `MIN`, `MAX`), and conditional expressions (`CASE WHEN ... THEN ... ELSE ... END`).
- **Abstract Syntax Tree (AST) Visualizer (`ast.h`, `ast.c`)**:
  - Dynamically builds AST nodes in C memory during parser reductions.
  - Pretty-prints hierarchical **ASCII Tree Visualizations** when run with the `--ast` flag.
- **Diagnostics with Error Caret (`main.c`)**:
  - Formats error output with exact line numbers, column positions, and visual carets (`^`) pointing to offending token positions.
- **Automated Test Suite (`run_tests.sh`, `test_queries.sql`, `Makefile`)**:
  - Automated test runner testing 13 valid and invalid query scenarios with 100% pass rate.

---

## 2. Project File Structure

```
sql_query_validator/
├── sql_lexer.l          # Flex Lexer definition
├── sql_parser.y         # Bison Parser definition & AST generation
├── ast.h                # AST Node data structures & function prototypes
├── ast.c                # AST construction & ASCII tree printing
├── main.c               # CLI parser, REPL interactive loop, error caret renderer
├── Makefile             # Build automation
├── test_queries.sql     # Comprehensive SQL test suite
├── run_tests.sh         # Automated bash test suite runner
├── IMPLEMENTATION_PLAN.md # Local implementation plan
└── WALKTHROUGH.md       # Local walkthrough report
```

---

## 3. Verification & Test Results

We ran automated tests using `make test`:

```text
=======================================================
       SQL QUERY VALIDATOR AUTOMATED TEST SUITE        
=======================================================

Testing Valid Query: Basic SELECT
  Result: [PASS] Valid Query Passed Syntactically!

Testing Valid Query: SELECT with JOIN and GROUP BY
  Result: [PASS] Valid Query Passed Syntactically!

Testing Valid Query: Subquery in WHERE
  Result: [PASS] Valid Query Passed Syntactically!

Testing Valid Query: INSERT INTO with VALUES
  Result: [PASS] Valid Query Passed Syntactically!

Testing Valid Query: UPDATE statement
  Result: [PASS] Valid Query Passed Syntactically!

Testing Valid Query: DELETE statement
  Result: [PASS] Valid Query Passed Syntactically!

Testing Valid Query: CREATE TABLE with Constraints
  Result: [PASS] Valid Query Passed Syntactically!

Testing Valid Query: Transaction Control
  Result: [PASS] Valid Query Passed Syntactically!

Testing Invalid Query: Missing Column / Table Expression (SELECT FROM)
  Result: [PASS] Syntax Error Correctly Caught!
[ERROR] Syntax Error at Line 1, Column 12: syntax error near 'FROM'

Testing Invalid Query: Unclosed Parentheses in WHERE IN
  Result: [PASS] Syntax Error Correctly Caught!
[ERROR] Syntax Error at Line 1, Column 45: syntax error near ';'

Testing Invalid Query: Mismatched Keyword Order (FROM WHERE SELECT)
  Result: [PASS] Syntax Error Correctly Caught!
[ERROR] Syntax Error at Line 1, Column 5: syntax error near 'FROM'

Testing Invalid Query: Incomplete INSERT statement
  Result: [PASS] Syntax Error Correctly Caught!
[ERROR] Syntax Error at Line 1, Column 26: syntax error near ';'

Testing Invalid Query: Missing Table Name in CREATE TABLE
  Result: [PASS] Syntax Error Correctly Caught!
[ERROR] Syntax Error at Line 1, Column 15: syntax error near '('

=======================================================
                    SUMMARY REPORT                     
=======================================================
Passed: 13
Failed: 0
ALL TESTS PASSED SUCCESSFULLY!
```

---

## 4. How to Use the Validator

### A. Run Interactive REPL
```bash
./sql_validator --ast
```
Sample REPL Interaction:
```text
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

### B. Run File Batch Mode
```bash
./sql_validator --ast -f test_queries.sql
```

### C. Run Lexer Token Inspection
```bash
./sql_validator --tokens
```
