# Write your MySQL query statement below
#select name from Customer 
#where referee_id is null or referee_id!=2;

select name from Customer
where id not in (select id from Customer where referee_id=2);