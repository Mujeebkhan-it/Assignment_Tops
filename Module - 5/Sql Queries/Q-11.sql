-- Create table given below: Salesperson and Customer
create table SALESPERSON 
(
SNO INT NOT NULL,
SNAME VARCHAR(45) NOT NULL,
CITY VARCHAR(45) NOT NULL,
COMM FLOAT NOT NULL,
primary key(SNO)
);

insert into SALESPERSON VALUES(1001,'Peel','London',0.12);
insert into SALESPERSON VALUES(1002,'Serres','San Jose',0.13);
insert into SALESPERSON VALUES(1004,'Motika','London',0.12);
insert into SALESPERSON VALUES(1007,'Rafkin','Barcelona',0.12);
insert into SALESPERSON VALUES(1003,'Axelrod','New York',0.12);

create table CUSTOMER
(
CNM INT NOT NULL,
CNAME VARCHAR(45) NOT NULL,
CITY VARCHAR(45) NOT NULL,
RATING INT NOT NULL,
SNO INT NOT NULL,
foreign key(SNO) references SALESPERSON(SNO)
); 

insert into CUSTOMER values(201,'Hoffman','London',100,1001);
insert into CUSTOMER values(202,'Givonne','Roe',200,1003);
insert into CUSTOMER values(203,'Liu','San Jose',300,1002);
insert into CUSTOMER values(204,'Grass','Barcelona',100,1002);
insert into CUSTOMER values(206,'Clemens','London',300,1007);
insert into CUSTOMER values(207,'Pereira','Roe',100,1004);

select * from SALESPERSON;
select * from CUSTOMER;

