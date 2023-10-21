# Write your MySQL query statement below
SELECT e.name, b.bonus 
FROM Employee AS e
LEFT JOIN Bonus AS b
ON e.empID = b.empID
WHERE bonus < 1000 OR Bonus is NULL ; 