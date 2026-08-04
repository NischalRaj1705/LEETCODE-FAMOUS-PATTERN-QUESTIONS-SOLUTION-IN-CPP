# Write your MySQL query statement below
SELECT DISTINCT viewer_id as id
FROM Views
where author_id= viewer_id 
order by id