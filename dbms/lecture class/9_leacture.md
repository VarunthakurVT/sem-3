# DBMS Class: Keys, Relational Database Rules, Data Independence, and Integrity

September 8, 2026·10:11 AM·43m 44s

### Play Audio

0:00

45:17

SummaryTranscriptNotes

Edit

## Overview: DBMS lecture on relational concepts

Classroom lecture and revision session covering database keys and the rules that define an RDBMS

One instructor and multiple students; individual students were questioned about definitions and examples

Critical outcomes:

Super keys may contain extra attributes; candidate keys are minimal unique attribute sets

Primary, foreign, and alternate keys were distinguished through student and course examples

Twelve relational-database rules were introduced, including access, null handling, updates, independence, integrity, distribution, and security

## Super Keys and Candidate Keys

A **super key** is a set of one or more attributes that can uniquely identify each row, tuple, or record

Multiple attributes may together identify an order, such as order ID, order name, PIN, location, description, and price

Non-unique attributes such as order name, description, or location may not identify a record reliably because values can repeat

A **candidate key** is the minimal number of attributes that can still uniquely identify a record

Removing unnecessary attributes from a super key produces a candidate key

Student ID and email were used as examples of attributes that may uniquely identify students

Names such as “Suryansh” cannot reliably identify students because three students in the class share that name

## Primary, Foreign, and Alternate Keys

**Primary key**: a candidate key selected to identify records; it must be unique and not null

Student ID was given as the primary-key example

**Foreign key**: a primary key from one table referenced in another table

**Alternate key**: a candidate key that was not selected as the primary key

Super keys and candidate keys are generally not explicitly defined in the schema; primary and alternate keys are the keys typically selected for schema-level use

Course ID, student name, and email were used while explaining why uniqueness is required when choosing keys

## Why Relational Databases Need Formal Rules

Before 1970, database systems commonly relied on file systems without consistent relational rules

Relational databases require standardized rules so that a system can be classified as an RDBMS

The instructor compared these rules with the requirements for opening a university, such as infrastructure, faculty, and students

A database following the required relational rules qualifies as a relational database; otherwise, it does not

## Information and Guaranteed Access Rules

**Information rule**: all information and metadata must be stored inside the database as values in cells organized into tables, rows, and columns

Tables provide structured data and make records easier to retrieve

A roll number or another key can be matched to return the corresponding record

**Guaranteed access rule**: logically stored data must be physically retrievable through the table name and a key

The example `SELECT * FROM table_name WHERE roll_number = ...` illustrated retrieving a record using a table name and primary key

The rule does not mean that the primary key alone is sufficient; the table name and key are used together

## Null Values and the Active Online Catalogue

**Systematic treatment of null values** requires the database to distinguish missing, unavailable, non-applicable, and actual values

An international student may not have an Aadhaar number, so the field may need to remain blank or be marked as not applicable

Exam-result examples distinguished:

`0` for a student who submitted the paper but scored zero

`Absent` for a student who did not take the exam

`D` for a detained student

These values have different meanings and data types; zero is numerical, while absent and detained are textual categories

Replacing missing or special values with averages requires careful treatment because averages apply to numerical values

**Active online catalogue** means maintaining explanations of the database’s data and metadata

A catalogue can be understood as a list of items, such as a menu or product list

Help menus in Microsoft Word, Excel, or PowerPoint were used as an analogy because they explain available functions and metadata

## Comprehensive Data Sublanguage and View Updating

**Comprehensive data sublanguage** provides a way to communicate with and manipulate database data

SQL sublanguages mentioned in class were DDL, DML, DCL, DTL, and DQL

DML was identified as the language used for operations such as insert, update, and delete

These operations correspond to CRUD-style database interaction

**View updating rule** requires data that is theoretically updateable to be practically updateable as well

A database should support high-level insert, update, and delete operations when the relevant permissions are available

MySQL safe-mode errors were discussed:

Insert operations were available

Update and delete operations could fail because the user lacked sufficient administrative privileges

Safe mode had to be disabled or the access level raised to perform certain operations

Updates must remain consistent across related views and records

If marks or attendance are changed in one place, the corresponding results should reflect the updated values rather than retaining stale data

A multi-teacher result-compilation example showed why shared data must update consistently across batches and schemas

The instructor contrasted this with an older in-house “My School” system where attendance could be entered only during specified hours, from 9:00 to 5:00 and until 5:50 in the evening; later corrections required an email and a reason

## Physical and Logical Data Independence

**Physical data independence** means storage changes should not require changes to application software

Data may be moved from a 1 TB disk to a 10 TB disk, moved to cloud storage, or distributed across data centers without changing the software’s logical operation

Latency may change slightly, but retrieval should not be delayed drastically

Google-like systems were described as storing data across multiple data centers rather than relying on one physical disk

**Logical data independence** means changes to a database schema should not disrupt existing users or retrieval operations

Adding or removing fields, such as a semester or roll-number column, should not break existing student profiles

Altering a table should preserve the usability of existing data and applications

## Integrity, Distribution, and Non-Subversion

**Integrity independence** requires constraints to be enforced consistently throughout the database

Constraints mentioned included primary key, `NOT NULL`, data type, and `UNIQUE`

Gmail usernames illustrate uniqueness: two users may share a name, but their usernames must remain unique

A condition such as `WHERE batch = 226` can apply a change consistently to all matching records

**Distribution independence** means the software should work across platforms such as Windows, macOS, and Linux

Platform-independent software may use operating-system-specific credentials or configuration while keeping the backend behavior consistent

Kotlin was cited as an example of a language used across Mac, iOS, and Android development environments

**Non-subversion rule** prevents lower-level users from bypassing database security and access controls

Students were described as having limited access, while administrators such as Hemant Sir and the learning team have higher privileges

Low-level users should not be able to bypass restrictions and perform unauthorized database changes

The relational rules are interconnected; bypassing security or access controls can undermine information management, integrity, independence, and update rules

Software should provide appropriate access categories so users can perform only permitted operations, such as inserting or marking attendance
[[dbms/lecture class/10_leacture|10_leacture]]