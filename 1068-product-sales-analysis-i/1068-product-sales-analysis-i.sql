# Write your MySQL query statement below
SELECT product_name,year,price
FROM sales as s
join Product as p on s.product_id =p.product_id 