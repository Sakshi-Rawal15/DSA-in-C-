SELECT name as Customers 
FROM Customers
Where id not in (
    select customerId
    from Orders
)