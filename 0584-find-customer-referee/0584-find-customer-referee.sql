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


#Approach - 3
select name from Customer
where ifnull(referee_id,0)!=2;



/*
#Approach - 4
select name from Customer
where case
        when referee_id!=2 then 1
        when referee_id is null then 1
        #optional to keep else i.e else 0 if it is not present also it gives false
        end;
*/



