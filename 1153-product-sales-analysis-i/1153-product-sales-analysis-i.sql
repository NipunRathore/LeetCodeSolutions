# Write your MySQL query statement below
SELECT product_name, year, price
FROM Product AS p
RIGHT JOIN Sales AS s 
ON p.product_id = s.product_id ; 