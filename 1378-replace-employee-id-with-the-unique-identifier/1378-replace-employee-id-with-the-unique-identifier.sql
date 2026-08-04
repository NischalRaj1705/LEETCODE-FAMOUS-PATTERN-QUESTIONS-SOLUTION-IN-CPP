# Write your MySQL query statement below
SELECT e1.unique_id,e.name 
From Employees as e
left join  EmployeeUNI e1 on e.id=e1.id
