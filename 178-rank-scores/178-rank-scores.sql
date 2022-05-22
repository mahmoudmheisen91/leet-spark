# Write your MySQL query statement below
select 
  s1.score score,
  (select 
    count(distinct s2.score) + 1
   from Scores s2
   where s1.score < s2.score) "rank"
from Scores s1 
order by s1.score desc;