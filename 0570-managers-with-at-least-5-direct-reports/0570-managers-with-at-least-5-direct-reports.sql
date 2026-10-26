# Write your MySQL query statement below
SELECT a.name 
FROM Employee as a
INNER JOIN 
Employee as b
ON a.id = b.managerID
GROUP BY a.name , a.id
HAVING COUNT(b.id) >=5;