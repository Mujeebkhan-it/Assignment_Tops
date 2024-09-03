create schema assignment;

-- Create Table Name : Student and Exam
create table Student
(
Rollno INT NOT NULL,
Name_ VARCHAR(45) NOT NULL,
Branch VARCHAR(45) NOT NULL,
primary KEY(Rollno)
);

insert into Student values(1,'Jay','Computer Science');
insert into Student values(2,'Suhani','Electronic and Com');
insert into Student values(3,'Kriti','Electronic and Com');

create table Exam
(
Rollno int not null,
S_code varchar(45) not null,
Marks int not null,
P_code varchar(45) not null,
foreign key(Rollno) references Student(Rollno)
);

insert into Exam values(1,'CS11',50,'CS');
insert into Exam values(1,'CS12',60,'CS');
insert into Exam values(2,'EC101',66,'EC');
insert into Exam values(2,'EC102',70,'EC');
insert into Exam values(3,'EC101',45,'EC');
insert into Exam values(3,'EC102',50,'EC');	

select * from Student;
select * from Exam;
