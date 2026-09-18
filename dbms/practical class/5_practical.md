# SQL Primary–Foreign Key Relationships, Table Joins, and Basic Commands

September 16, 2026·12:04 PM·43m 28s

### Play Audio

0:00

45:04

SummaryTranscriptNotes

Edit

## Overview

Database class covering primary keys, foreign keys, table relationships, SQL joins, and introductory table commands

Teacher and multiple students; individual student identities are not clearly established

Critical outcomes:

Primary keys uniquely identify rows; foreign keys reference primary keys across tables

Course ID should be used as a foreign key in the student table for the student–course relationship

SQL `JOIN` combines course and student data using matching Course ID values

`JOIN` is a SQL keyword used with `SELECT`, not a function

## Primary Keys and Their Purpose

**Primary key**: A unique identifier for each record in a table

Student ID was used as the primary key for a student table, with the student name stored separately as a `VARCHAR`

Course ID was identified as a suitable primary key for the course table because each course can have a distinct identifier

Phone number, subject, or marks were presented as poor primary-key choices when they do not reliably provide unique and relevant identification

Examples of suitable identifiers included teacher ID for teachers, product ID for products, order ID for orders, and shipment number for shipments

Primary-key columns were associated with `NOT NULL` and primary-key constraints so that identifying data cannot be omitted

## Foreign Keys and the Student–Course Relationship

**Foreign key**: A reference to the primary key of one table from another table

The course table should be created before the student table when the student table depends on Course ID

Course ID is defined in the student table and linked to the Course ID primary key in the course table

Multiple students can enroll in one course, so storing Course ID in the student table was described as the simpler design

Student registration was explained as selecting an already-existing course and storing that course’s ID in the student’s profile or student record

A student record may contain Student ID, semester, email ID, phone number, address, and Course ID

Course information such as course name and department remains in the course table rather than being duplicated in every student record

The primary-key and foreign-key columns must use matching data types and compatible definitions, including the same declared size where relevant

A foreign key creates a relationship between the two tables, allowing attributes from both tables to be retrieved together

## Joining Course and Student Data

`SELECT` with `JOIN` is used to fetch selected attributes from related tables

The example query was intended to retrieve:

Course ID from the course table

Course name from the course table

Student ID from the student table

Student name from the student table

The basic structure uses the course table as the starting table and joins it with the student table

The join condition matches the course table’s primary key with the student table’s foreign key:

`course.course_id = student.course_id`

The shared Course ID is the common column used to connect both tables

The instructor asked students to create the tables, add the relationship, and demonstrate the join query

`ALTER` was mentioned for adding or changing a column in an existing table instead of creating a new table

## SQL Command and Data-Type Questions

Students asked about deleting values from a table; the instructor explained that the normal `DELETE` command is used

`UPDATE`, `DELETE`, and `ALTER` were referenced as commands to be covered or used together

A question concerned what happens when an integer size or value is not explicitly defined

The instructor stated that an explicitly specified value such as `10` would be used as `10`, while an unspecified default was described as `256`

The default-value explanation was repeated when a student asked whether `256` is automatically used without another definition

Several students repeated questions about the relationship between primary and foreign keys, reinforcing the central lesson: the foreign key references a primary key in another table