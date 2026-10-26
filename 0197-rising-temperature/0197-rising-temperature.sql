# Write your MySQL query statement below
SELECT w1.id as Id
FROM Weather as w1
INNER JOIN
Weather as w2
ON w1.recordDate = DATE_ADD(W2.recordDate, INTERVAL 1 DAY)
WHERE w1.temperature > w2.temperature;
