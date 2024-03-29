# Educational database in C++

This project is strongly based on BeerDB project (https://github.com/MrShelDie/BeerDB)

## Contents

[Information](#information) \
[Database Management](#database-management) \
[Table Management](#table-management) \
[Index Management](#index-management) \
[Data Manipulation](#data-manipulation) \
[Other Features Implemented](#other-features-implemented) \
[TODO Features](#todo-features)


### Introduction

As part of the project, you need to write your own program that implements the work of the DBMS and the basic standard SQL commands: `Create Database`, `Show Databases`, `Drop Database`, `Use`, `Create Table`, `Drop Table`, `Show Tables`, `Create Index`, `Drop Index`, `Drop Index`, `Insert`, `Select`, `Delete`, and `Update`. Implementations should provide a complete set of standard elements and methods for processing and indexing tables.


### Information

A Database Management System (DBMS) is a software system that allows users to create, read, update, and delete data from a database. It provides a way to manage and manipulate databases. The DBMS interacts with end users, applications, and the database itself to capture and analyze data.

SQL (Structured Query Language) is a standard language for managing and manipulating databases. It is used to communicate with a database and perform tasks such as retrieving data, inserting records, updating records, deleting records, and creating and modifying database structures.

Here are common SQL commands:

#### Database Management

- Create Database

```SQL
Syntax:  CREATE DATABASE database_name;
Example: CREATE DATABASE abc;
```

- Drop Database

```SQL
Syntax:  DROP DATABASE database_name;
Example:  DROP DATABASE abc;
```

- Show Databases

```SQL
Syntax:  SHOW DATABASES;
Example:  SHOW DATABASES;
```

- Use

```SQL
Syntax:  USE database_name;
Example:  USE abc;
```

#### Table Management

- Create Table

```SQL
Syntax:  CREATE TABLE table_name
   (
   column_name1 data_type(size),
   column_name2 data_type(size),
   column_name3 data_type(size),
   ....,
   PRIMARY KEY (column_name)
   );
Example:  CREATE TABLE aaa
   (
   col1 int,
   col2 float,
   col3 char(8),
   PRIMARY KEY (col1)
   );
```

Note: Available data types include int, float and char(N). Only one primary key could be created.

- Drop Table

```SQL
Syntax:  DROP TABLE table_name;
Example: DROP TABLE aaa;
```

- Show Tables

```SQL
Syntax:  SHOW TABLES;
Example:  SHOW TABLES;
```

#### Index Management

- Create Index

```SQL
Syntax:  CREATE INDEX index_name
   ON table_name (column_name);
Example:  CREATE INDEX aaacol1 
   ON aaa (col1);
```

Note: Index can only be created on primary key. B+ tree manipulation is implemented in all data manipulation SQLs.

- Drop Index

```SQL
Syntax:  DROP INDEX index_name;
Example: DROP INDEX aaacol1;
```

#### Data Manipulation

- Insert

```SQL
Syntax:  INSERT INTO table_name
   VALUES (value1, value2, value3, ...);
Example:  INSERT INTO aaa
   VALUES (111, 222.2, 'xyz');
```

- Select

```SQL
Syntax:  SELECT * FROM table_name
   WHERE column1 = value1
   and column2 = value2
   and ...;
Example: SELECT * FROM aaa
   WHERE col1 = 111;
```

Note:  Only "and" logic is allowed. Only "*" is allowed.

- Delete

```SQL
Syntax:  DELETE FROM table_name 
   WHERE column1 = value1
   and column2 = value2
   and ...;
Example: DELETE FROM aaa
   WHERE col1 = 111;
```

Note:  Only "and" logic is allowed.

- Update

```SQL
Syntax:  UPDATE table_name
   SET column1 = value1, column2 = value2, ...
   WHERE column1 = value1
   and column2 = value2
   and ...;
Example: UPDATE aaa
   SET col2 = 555.5
   WHERE col1 = 1;
```

Note:  Only "and" logic is allowed.

#### Other Features Implemented

- Help

```SQL
Syntax:  HELP;
Example:  HELP;
```

- Quit

```SQL
Syntax:  EXIT
   or
   QUIT
Example: EXIT
   or
   QUIT
```

- Exec

```SQL
Syntax:  EXEC file_name;
Example:  EXEC input.txt;
```

#### TODO Features

- Transaction Management
- User Management
- Authentication
- Join
- Foreign Keys
- Views
- Complex Select
