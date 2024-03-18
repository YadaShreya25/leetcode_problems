# Write your MySQL query statement below

/*
#Approach - 1
select name,population,area from World
where area>=3000000 or population>=25000000;
*/



#Approach - 2
select name,population,area from World 
where area>=3000000
union
select name,population,area from World
where population>=25000000;