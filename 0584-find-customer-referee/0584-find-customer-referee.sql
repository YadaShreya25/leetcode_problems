# Write your MySQL query statement below
/*
#Approach - 1 
select name from Customer 
where referee_id is null or referee_id!=2;\
*/

/*
#Approach - 2
select name from Customer
where id not in (select id from Customer where referee_id=2);
*/


/*
#Approach - 3
select name from Customer
where coalesce(referee_id,0)!=2;
*/

SELECT name
FROM Customer
WHERE CASE 
        WHEN referee_id != 2 THEN 1
        WHEN referee_id IS NULL THEN 1
        ELSE 0
      END ;

