# Write your MySQL query statement below
SELECT eUNI.unique_id , e.name 
FROM EmployeeUNI as eUNI
RIGHT JOIN 
Employees as e
ON eUNI.id = e.id;
