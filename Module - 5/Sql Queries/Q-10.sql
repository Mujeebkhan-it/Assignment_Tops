-- Create After Insert trigger on Employee table which insert records in view table

CREATE TABLE EmployeeView
(
    Employee_id INT,
    First_name VARCHAR(45),
    Last_name VARCHAR(45),
    Salary INT,
    Joining_date DATE,
    Department VARCHAR(45)
);

alter table EmployeeView modify Joining_date varchar(30);
update EmployeeView set Joining_date = date_format(Joining_date,'%d-%b-%y');

CREATE TRIGGER after_employee_insert
AFTER INSERT ON Employee
FOR EACH ROW
    INSERT INTO EmployeeView (Employee_id, First_name, Last_name, Salary, Joining_date, Department)
    VALUES (NEW.Employee_id, NEW.First_name, NEW.Last_name, NEW.Salary, NEW.Joining_date, NEW.Department);

INSERT INTO Employee VALUES (10, 'Alice', 'Smith', 700000, '01-FEB-13 12.00.00 AM', 'Marketing');

DROP TRIGGER AFTER_EMPLOYEE_INSERT;

SELECT * FROM EmployeeView;

SELECT * FROM EMPLOYEE;

