-- Write your query below
SELECT name FROM customers where id NOT IN (select customer_id from orders)