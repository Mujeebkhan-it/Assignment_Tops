-- Select first_name, incentive amount from employee and incentives
-- table for those employees who have incentives and incentive amount
-- greater than 3000

SELECT e.First_name, i.Incentive_amount FROM Employee e
JOIN Incentive i ON e.Employee_id = i.Employee_ref_id
WHERE i.Incentive_amount > 3000;
 
 