# Write your MySQL query statement below
# Find max salary such that it is not equal to the maximum salary in the table 
SELECT max(salary) AS secondhighestsalary
FROM employee
WHERE salary != (SELECT max(salary) 
                FROM employee) ;