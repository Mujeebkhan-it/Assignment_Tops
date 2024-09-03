-- Create table given below: Employee and IncentiveTable
create table Employee 
(
Employee_id int not null,
First_name varchar(45) not null,
Last_name varchar(45) not null,
Salary int not null,
Joining_date date not null,
Department varchar(45) not null,
primary key(Employee_id)
);

-- update date format to varchar
alter table Employee modify Joining_date varchar(30);
update Employee set Joining_date = date_format(Joining_date,'%d-%b-%y');

insert into Employee values(1,'John','Abraham',1000000,'01-JAN-13 12.00.00 AM','Banking');
insert into Employee values(2,'Michael','Clarke',800000,'01-JAN-13 12.00.00 AM','Insuarance');
insert into Employee values(3,'Roy','Thomas',700000,'01-FEB-13 12.00.00 AM','Banking');
insert into Employee values(4,'Tom','Jose',600000,'01-FEB-13 12.00.00 AM','Insuarance');
insert into Employee values(5,'Jerry','Pinto',650000,'01-FEB-13 12.00.00 AM','Insuarance');
insert into Employee values(6,'Philip','Mathew',750000,'01-JAN-13 12.00.00 AM','Services');
insert into Employee values(7,'TestaName1','123',650000,'01-JAN-13 12.00.00 AM','Services');
insert into Employee values(8,'TestName2','Lname%',600000,'01-FEB-13 12.00.00 AM','Insuarance');
INSERT INTO Employee VALUES (9, 'Alice', 'Smith', 700000, '01-FEB-13 12.00.00 AM', 'Marketing');


create table Incentive
(
Employee_ref_id int not null,
Incentive_date date not null,
Incentive_amount int not null,
foreign key(Employee_ref_id) references Employee(Employee_id)
); 

-- update date format to varchar
alter table Incentive modify Incentive_date varchar(30);
update Incentive set Incentive_date = date_format(Incentive_date,'%d-%b-%y');

insert into Incentive values(1,'01-FEB-13',5000);
insert into Incentive values(2,'01-FEB-13',3000);
insert into Incentive values(3,'01-FEB-13',4000);
insert into Incentive values(1,'01-JAN-13',4500);
insert into Incentive values(2,'01-JAN-13',3500);

select * from Employee;
select * from Incentive;



-- DELEING TABLE
SELECT CONSTRAINT_NAME
FROM INFORMATION_SCHEMA.KEY_COLUMN_USAGE
WHERE TABLE_NAME = 'Incentive'
AND REFERENCED_TABLE_NAME = 'Employee';
 

ALTER TABLE Incentive
DROP FOREIGN KEY incentive_ibfk_1; 

DROP TABLE IF EXISTS Employee;
DROP TABLE IF EXISTS Incentive;
