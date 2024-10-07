
q.1

table student 

~~~SQL
CREATE TABLE student (rollno int PRIMARY KEY, name varchar(20),branch varchar(20))

INSERT into student VALUES(1,"jay","Computer science"),
INSERT into student VALUES(2,"suhani","Electronic and com"),
INSERT into student VALUES(3,"kriti","Electronic and com"); 
~~~

~~~SQL
create TABLE exam(rollno int,FOREIGN key(rollno) REFERENCES student(rollno),s_code varchar(20),marks int,p_code varchar(20));

insert into exam VALUES(1,"CS11"50,"CS"),
insert into exam VALUES(1,"CS12"60,"CS"),
insert into exam VALUES(2,"EC101"66,"EC"),
insert into exam VALUES(2,"EC102"70,"EC"),
insert into exam VALUES(3,"ES101"45,"EC"),
insert into exam VALUES(3,"EC102"50,"EC");


SELECT * from student;
~~~
