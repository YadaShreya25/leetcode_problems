# Write your MySQL query statement below
#Approach - 1
/*
select * from Cinema 
where id%2!=0 && description!='boring'
order by rating desc;
*/

# not equal  ( != , <> )
# and ( and , && )
# for id odd  ( id%2=1  , id%2!=0, id%2<>0 , mod(id,2)<>0 , mod(id,2)=1 -- Aggregate function mod() )


#Approach - 2
select * from Cinema
where id % 2 = 1 and description not like "%boring%"
order by rating desc; 