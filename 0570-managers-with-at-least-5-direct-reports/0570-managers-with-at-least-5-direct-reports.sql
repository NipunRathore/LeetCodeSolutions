# Write your MySQL query statement below
SELECT m.name
FROM employee AS e
INNER JOIN employee AS m
ON e.managerId = m.Id
GROUP BY e.managerId
HAVING count(e.id) >= 5 ;