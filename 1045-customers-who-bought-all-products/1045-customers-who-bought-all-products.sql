# Write your MySQL query statement below
select customer_id from customer
group by customer_id
having count(distinct Customer.product_key)= (select count(product_key) from Product);