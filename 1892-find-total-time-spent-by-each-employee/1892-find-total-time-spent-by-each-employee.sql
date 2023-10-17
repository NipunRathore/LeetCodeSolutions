# Write your MySQL query statement below
# AS keyword used to rename/give alias to the table or column for the query 
SELECT event_day AS day, emp_id, (SUM(out_time) - sum(in_time)) AS total_time
FROM Employees
GROUP BY event_day, emp_id ;