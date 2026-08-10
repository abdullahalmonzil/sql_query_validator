#!/bin/bash

# Color codes
GREEN='\033[1;32m'
RED='\033[1;31m'
CYAN='\033[1;36m'
YELLOW='\033[1;33m'
RESET='\033[0m'

echo -e "${CYAN}=======================================================${RESET}"
echo -e "${CYAN}       SQL QUERY VALIDATOR AUTOMATED TEST SUITE        ${RESET}"
echo -e "${CYAN}=======================================================${RESET}\n"

PASS_COUNT=0
FAIL_COUNT=0

run_valid_test() {
    local test_name="$1"
    local query="$2"

    echo -e "${YELLOW}Testing Valid Query:${RESET} ${test_name}"
    ./sql_validator --ast <<< "${query}" > /tmp/test_out.txt 2>&1
    local status=$?

    if [ $status -eq 0 ]; then
        echo -e "  Result: ${GREEN}[PASS] Valid Query Passed Syntactically!${RESET}\n"
        ((PASS_COUNT++))
    else
        echo -e "  Result: ${RED}[FAIL] Valid Query Unexpectedly Failed!${RESET}\n"
        cat /tmp/test_out.txt
        ((FAIL_COUNT++))
    fi
}

run_invalid_test() {
    local test_name="$1"
    local query="$2"

    echo -e "${YELLOW}Testing Invalid Query:${RESET} ${test_name}"
    ./sql_validator <<< "${query}" > /tmp/test_out.txt 2>&1
    local status=$?

    if [ $status -ne 0 ]; then
        echo -e "  Result: ${GREEN}[PASS] Syntax Error Correctly Caught!${RESET}"
        grep -E "Syntax Error|ERROR" /tmp/test_out.txt | head -n 2
        echo ""
        ((PASS_COUNT++))
    else
        echo -e "  Result: ${RED}[FAIL] Invalid Query Was Incorrectly Accepted!${RESET}\n"
        ((FAIL_COUNT++))
    fi
}

# --- VALID QUERY TESTS ---
run_valid_test "Basic SELECT" \
  "SELECT id, name FROM users WHERE status = 'active';"

run_valid_test "SELECT with JOIN and GROUP BY" \
  "SELECT d.name, COUNT(e.id) FROM departments d LEFT JOIN employees e ON d.id = e.dept_id GROUP BY d.name HAVING COUNT(e.id) > 5;"

run_valid_test "Subquery in WHERE" \
  "SELECT * FROM products WHERE category_id IN (SELECT id FROM categories WHERE active = 1);"

run_valid_test "INSERT INTO with VALUES" \
  "INSERT INTO users (id, name, age) VALUES (1, 'John Doe', 30), (2, 'Jane Smith', 28);"

run_valid_test "UPDATE statement" \
  "UPDATE accounts SET balance = balance + 500 WHERE id = 101;"

run_valid_test "DELETE statement" \
  "DELETE FROM logs WHERE created_at < '2025-01-01';"

run_valid_test "CREATE TABLE with Standard Constraints" \
  "CREATE TABLE employees (id INT PRIMARY KEY AUTO_INCREMENT, name VARCHAR(50) NOT NULL, salary DECIMAL(10,2) DEFAULT 0.00);"

run_valid_test "Oracle CREATE TABLE (NUMBER, VARCHAR2, NOT NULL UNIQUE)" \
  "CREATE TABLE department (dept_id NUMBER PRIMARY KEY, dept_name VARCHAR2(100) NOT NULL UNIQUE);"

run_valid_test "Transaction Control" \
  "BEGIN TRANSACTION; COMMIT;"

# --- INVALID QUERY TESTS ---
run_invalid_test "Missing Column / Table Expression (SELECT FROM)" \
  "SELECT FROM users;"

run_invalid_test "Unclosed Parentheses in WHERE IN" \
  "SELECT name FROM users WHERE id IN (1, 2, 3;"

run_invalid_test "Mismatched Keyword Order (FROM WHERE SELECT)" \
  "FROM users SELECT id;"

run_invalid_test "Incomplete INSERT statement" \
  "INSERT INTO users VALUES;"

run_invalid_test "Missing Table Name in CREATE TABLE" \
  "CREATE TABLE (id INT);"


echo -e "${CYAN}=======================================================${RESET}"
echo -e "${CYAN}                    SUMMARY REPORT                     ${RESET}"
echo -e "${CYAN}=======================================================${RESET}"
echo -e "Passed: ${GREEN}${PASS_COUNT}${RESET}"
echo -e "Failed: ${RED}${FAIL_COUNT}${RESET}"

if [ $FAIL_COUNT -eq 0 ]; then
    echo -e "${GREEN}ALL TESTS PASSED SUCCESSFULLY!${RESET}"
    exit 0
else
    echo -e "${RED}SOME TESTS FAILED!${RESET}"
    exit 1
fi
