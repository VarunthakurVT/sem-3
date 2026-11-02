# Database Keys Lecture: Super Keys, Candidate Keys, Primary Keys, Unique Keys, and Foreign Keys

September 3, 2026·10:15 AM·33m 40s

### Play Audio

0:00

34:44

SummaryTranscriptNotes

Edit

## Overview

Database fundamentals lecture covering key types, constraints, null values, and table relationships

One instructor and multiple students, including Varun and other students responding during attendance and questioning

Critical outcomes:

Super keys uniquely identify tuples using one or more attributes

Candidate keys are minimal super keys; a selected candidate key becomes the primary key

Primary keys are unique and not null, while unique keys generally allow null values

Foreign keys reference primary keys in another table

## Super Keys and Candidate Keys

A **super key** is a set of one or more attributes that can uniquely identify a record or tuple

Student-table examples included:

Student ID

Phone number

Email

Combinations such as ID, phone number, and email

Additional attributes can remain in a super key even when they are unnecessary for unique identification

A **candidate key** is a minimal subset of a super key that still uniquely identifies a tuple

Removing an irrelevant attribute from a super key helps determine whether the remaining attributes can still identify the record

A combination such as roll number and name may be a super key, while roll number alone can be the candidate key if it uniquely identifies every student

---

## Choosing a Primary Key from Candidate Keys

A **primary key** is selected from the available candidate keys to serve as the main identifier for records

Roll number was used as the main example because each student has a distinct roll number

Primary-key characteristics emphasized:

Unique values

No `NULL` values

One main primary-key constraint for a table

The lecture distinguished the role of a candidate key from the role of a primary key:

Candidate key: any minimal attribute set capable of uniquely identifying a tuple

Primary key: the candidate key chosen as the table’s principal identifier

Other candidate keys that are not selected as the primary key may be treated as alternate or secondary identifying keys

---

## Unique Keys and Null Constraints

A **unique key** ensures that non-null values in a column do not repeat

Email addresses and phone numbers were presented as practical candidates for unique constraints

A unique key differs from a primary key mainly in its treatment of `NULL`:

Primary key: unique and `NOT NULL`

Unique key: uniqueness is enforced, but `NULL` may be allowed depending on the database system

The class discussed that a unique column may contain a `NULL` value, while repeated ordinary values are not allowed

A name column is usually a poor choice for a unique constraint because different people can share the same name

Usernames, email addresses, phone numbers, and serial numbers are more suitable when the application guarantees that each value belongs to only one record

Applying a unique constraint to a name column could incorrectly prevent two students with the same name from being stored

---

## Foreign Keys and Table Relationships

A **foreign key** references the primary key of another table

The example used a `student` table and an `accounts` table:

The student table contains the student identifier as its primary key

The accounts table stores the student ID as a foreign key

Foreign keys connect records across tables and allow related information to be maintained separately

The same identifier can therefore act as:

A primary key in its original table

A foreign key when copied into a related table

Authentication-related fields such as username, password, and email were mentioned as examples of data that may be stored in an accounts or user table

---

## Clarifications and Classroom Examples

Students repeatedly answered “roll number” when identifying the likely primary key for a student table

The instructor used student names, phone numbers, email IDs, usernames, and roll numbers to compare key properties

Questions focused on whether a table can have multiple primary keys or multiple unique keys

The explanation emphasized that a table generally has one primary-key constraint, while multiple columns can have unique constraints

The class briefly discussed whether duplicate `NULL` values are accepted by unique constraints; the exact behavior can vary across database systems

The session ended with requests for a single example demonstrating all the discussed key types, followed by unrelated classroom exchanges involving paper, water, and pens
[[dbms/lecture class/9_leacture|9_leacture]]