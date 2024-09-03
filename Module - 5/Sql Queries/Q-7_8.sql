-- Get department wise maximum salary from employee table order by salary ascending?
select * from employee;

select Department,max(salary) as max_salary from employee group by Department order by max_salary asc; 