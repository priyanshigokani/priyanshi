Q.1 What do you understand By Database 
ans: A database is an organized collection of data that allows for efficient storage, retrieval, and management. It supports operations like querying and updating while ensuring data integrity and security. Examples include relational databases like MySQL and NoSQL databases like MongoDB.

Q.2  What is Normalization? 
Ans: In DBMS, normalization is the process of organizing data in a database to reduce redundancy and improve data integrity by dividing large tables into smaller, related tables and linking them through relationships, typically using foreign keys. It helps eliminate anomalies and ensures efficient data management.

Q.3  What is Difference between DBMS and RDBMS? 
Ans:
|DBMS|RDBMS|
|----|---------|
|DBMS stands for data management system.| RDBMS stans fro relational database management system.|
|DBMS technology stores the data in form of file. |RDBMS stores data in forms of tables.|
|DBMS is designed to handle small amount of data.|RDBMS is designed to deal with vast amount of data.|
|Normalization is not available.|Normalization is available.|

Q.4  What is MF Cod Rule of RDBMS Systems? 
Ans:The MF Cod Rule (Multivalued Dependency Rule) in RDBMS states that:

- A multivalued dependency occurs when one attribute can determine multiple values of another attribute.
- To eliminate redundancy and improve data integrity, relations should be normalized to remove multivalued dependencies.
- This is related to Fourth Normal Form (4NF), which ensures there are no nontrivial multivalued dependencies in a database.

In essence, the rule promotes structuring data effectively to reduce redundancy and enhance integrity.

Q.5 What do you understand By Data Redundancy? 
Ans: Data redundancy is the unnecessary duplication of data within a database. It can lead to:

- Increased storage costs due to multiple copies.
- Inconsistency, where different copies may have conflicting information.
- Maintenance challenges, as updates need to be applied to multiple places.

To reduce data redundancy, techniques like normalization and using keys are employed to ensure data is stored efficiently and consistently.

Q.6 What is DDL Interpreter? 
Ans: A **DDL (Data Definition Language) interpreter** is a component of a database management system (DBMS) that processes DDL statements. These statements define and manage the structure of the database schema, including:

- **Creating** tables, indexes, and other database objects.
- **Altering** existing structures.
- **Dropping** tables or objects from the database.

The DDL interpreter translates these commands into a form that the DBMS can execute, allowing users to create, modify, or delete database structures effectively.

Q.7 What is DML Compiler in SQL? 
Ans:A DML (Data Manipulation Language) compiler in SQL translates high-level DML statements like Insert, Update, Delete, and Select into low-level instructions that the database system can execute to manipulate data stored in tables. It helps process user queries and ensures proper data manipulation.

Q.8 What is SQL Key Constraints writing an Example of SQL Key Constraints 
Ans: SQL Key Constraints are rules that enforce the integrity of data in a database. They ensure that the data adheres to specific rules, such as uniqueness or relationships between tables. Common key constraints include Primary, FOREIGN KEY, UNIQUE, and NOT NULL.


~~~sql
CREATE TABLE Employees
(
    EmpID INT PRIMARY KEY,
    Email VARCHAR(100) UNIQUE,
    DeptID INT,
    FOREIGN KEY (DeptID) REFERENCES Departments(DeptID)
);
~~~

- PRIMARY KEY: Ensures EmpID is unique and not null.
- UNIQUE: Ensures Email is unique across the table.
- FOREIGN KEY: Links DeptID to the Departments table to maintain referential integrity.

Q.9 What is save Point? How to create a save Point write a Query?
Ans:A SAVEPOINT in SQL allows you to set a point within a transaction to which you can later roll back, without affecting the entire transaction. It helps in partially undoing a transaction.


~~~sql
SAVEPOINT savepoint_name;
~~~

#### Example query:
~~~sql
BEGIN TRANSACTION;

-- Some operations
SAVEPOINT sp1;

-- More operations
ROLLBACK TO sp1;  -- Undo operations after the savepoint
COMMIT;
~~~

In this example, the ROLLBACK TO sp1 undoes changes made after the sp1 savepoint but retains earlier changes within the transaction.

Q.10 What is trigger and how to create a Trigger in SQL? 
Ans:A trigger in SQL is a database object that automatically executes a specified action in response to certain events (such as INSERT, UPDATE, or DELETE) on a table. Triggers are used to enforce business rules, validate data, or automatically update or modify other data.

#### To create a trigger:
~~~sql
CREATE TRIGGER trigger_name
AFTER INSERT ON table_name
FOR EACH ROW
BEGIN
    -- Trigger action (SQL statements)
END;
~~~
In this example, the trigger `after_employee_insert` automatically logs an action into the `AuditLog` table every time a new record is inserted into the `Employees` table.