-- Test 1: Simple SELECT with WHERE, ORDER BY, and LIMIT
SELECT id, name, email FROM users WHERE age >= 18 AND status = 'active' ORDER BY name ASC LIMIT 10;

-- Test 2: SELECT with Aggregate Functions, GROUP BY, and HAVING
SELECT department_id, COUNT(*) AS emp_count, AVG(salary) AS avg_sal 
FROM employees 
GROUP BY department_id 
HAVING AVG(salary) > 50000;

-- Test 3: SELECT with Table Joins
SELECT u.id, u.username, o.order_date, o.total_amount 
FROM users u 
INNER JOIN orders o ON u.id = o.user_id 
WHERE o.total_amount > 100.50;

-- Test 4: Subquery in WHERE clause
SELECT id, title FROM books WHERE author_id IN (SELECT id FROM authors WHERE country = 'USA');

-- Test 5: SELECT with CASE WHEN and UNION
SELECT id, name, CASE WHEN score >= 90 THEN 'A' WHEN score >= 80 THEN 'B' ELSE 'C' END AS grade FROM students
UNION
SELECT id, name, 'N/A' AS grade FROM audit_students;

-- Test 6: INSERT INTO with column list and values tuple
INSERT INTO users (id, name, email, age) VALUES (1, 'Alice', 'alice@example.com', 22), (2, 'Bob', 'bob@example.com', 25);

-- Test 7: UPDATE with SET and WHERE
UPDATE employees SET salary = salary * 1.1, status = 'promoted' WHERE performance_rating >= 4.5;

-- Test 8: DELETE FROM with WHERE condition
DELETE FROM sessions WHERE last_activity < '2026-01-01';

-- Test 9: CREATE TABLE with constraints
CREATE TABLE products (
    id INT PRIMARY KEY AUTO_INCREMENT,
    product_name VARCHAR(100) NOT NULL,
    price DECIMAL(10, 2) DEFAULT 0.00,
    category_id INT,
    FOREIGN KEY (category_id) REFERENCES categories(id)
);

-- Test 10: Oracle CREATE TABLE with NUMBER and VARCHAR2
CREATE TABLE department (
    dept_id NUMBER PRIMARY KEY,
    dept_name VARCHAR2(100) NOT NULL UNIQUE
);

-- Test 11: ALTER TABLE, DROP TABLE, TRUNCATE TABLE
ALTER TABLE users ADD COLUMN phone VARCHAR(20);
DROP TABLE IF EXISTS old_logs;
TRUNCATE TABLE temp_data;

-- Test 12: Transaction Control
BEGIN TRANSACTION;
UPDATE accounts SET balance = balance - 100 WHERE id = 1;
UPDATE accounts SET balance = balance + 100 WHERE id = 2;
COMMIT;
