-- Write a SQL statement that displays all the information about all sales people
CREATE TABLE SALES
(
SALESMAN_ID INT NOT NULL,
NAME VARCHAR(45) NOT NULL,
CITY VARCHAR(45) NOT NULL,
COMMISSION FLOAT NOT NULL
);

INSERT INTO SALES VALUES(5001,'James Hoog','New York',0.15);
INSERT INTO SALES VALUES(5002,'Nail Knite','Paris',0.13);
INSERT INTO SALES VALUES(5005,'Pit Alex','London',0.11);
INSERT INTO SALES VALUES(5006,'Mc Lyon','Paris',0.14);
INSERT INTO SALES VALUES(5007,'Paul Adam','New York',0.13);
INSERT INTO SALES VALUES(5003,'Lauson Hen','New York',0.12);

select * from sales;
