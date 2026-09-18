# SQL ALTER vs UPDATE: Adding Columns, Bulk Updates, and Safe Mode Errors

September 2, 2026·12:08 PM·36m 37s

### Play Audio

0:00

37:41

SummaryTranscriptNotes

Edit

## Overview

SQL classroom lecture and troubleshooting session covering `ALTER`, `UPDATE`, bulk updates, and MySQL safe mode

Instructor and multiple students; Varun and other students were addressed or named during attendance

Critical outcomes:

`ALTER` modifies table structure, while `UPDATE` modifies existing table data

A missing semester column can be added with `ALTER TABLE` and populated in bulk using `UPDATE ... WHERE`

Safe update/delete errors can be resolved by using a key column or disabling SQL Editor Safe Mode

## `ALTER` Changes Table Structure; `UPDATE` Changes Existing Data

`ALTER` applies to the schema or structure of a table, such as adding a new column

`UPDATE` changes values already stored inside the table

A student table initially contained `Student ID` and `Student Name`, but the student semester field was accidentally omitted

Recreating the table was unnecessary even after approximately `1000` student records had been entered

Adding the missing field requires an `ALTER TABLE` command rather than an `UPDATE` command

Correct examples for `UPDATE` include:

Changing a student’s marks from `70` to `90`

Updating a changed phone number

Updating a changed email address

## Adding and Populating the Student Semester Column

The proposed column was `Student Semester`, using an integer data type with a size of `2`

Semester values such as `1`, `2`, `3`, and `4` were discussed; the instructor noted that a two-digit size could support values such as `10`

A `NOT NULL` constraint can make semester data compulsory

The structural operation follows the pattern:

`ALTER STUDENT`

Add the `Student Semester` column

Define its data type and constraints

Existing records do not need to be updated one by one

`UPDATE` with a `WHERE` clause can populate the semester for a group of students

Students with `Student Batch = 2026` can receive `Student Semester = 1` in one bulk operation

The same command can target a specific student by using an exact roll number or student ID in the `WHERE` condition

A range condition such as `WHERE roll number BETWEEN ... AND ...` can update a group within a specified range

Additional conditions can combine fields such as roll number and programme, including `B Tech CSE`

Bulk updating avoids repeating separate `INSERT` statements for all `1000` existing records

## Safe Update Errors and Key-Column Conditions

SQL Editor raised an error when an update was attempted using a name instead of an appropriate key condition

Updating without a `WHERE` clause that uses a key column can be blocked because it may affect multiple rows unintentionally

Names such as `Varun Thakur` may not be unique, so name-based updates can match several records

Exact updates should use a primary key such as:

Student roll number

Student ID

Another uniquely identifying key

A phone number may work when it is unique, but the primary key is the preferred identifier

The instructor demonstrated checking the table with `SELECT *` and `DESCRIBE` to inspect columns and key information

MySQL Workbench’s Safe Mode can be disabled through:

`Edit`

`Preferences`

`SQL Editor`

Unchecking the `Safe Updates` option near the bottom

The error affects `UPDATE` and `DELETE` operations when they lack a key-based condition

The instructor indicated that students should reconnect or reopen the SQL Editor settings after changing the preference

Technical work was briefly interrupted by an internet connection problem, after which students were asked to copy and send the relevant material or commands
[[dbms/practical class/5_practical|5_practical]]