# Database Lab: Table Creation, SQL WHERE/LIKE Queries, and Installation Troubleshooting

August 26, 2026·12:05 PM·48m 42s

## Overview

Practical database lab covering table setup, data insertion, SQL filtering commands, and software-installation issues

One instructor with multiple students; student identities were checked during attendance

Critical outcomes:

Each student must create at least two entities/tables with five attributes and ten entries per table

The class began learning `WHERE` and `LIKE` clauses after completing table creation and data insertion

Students who did not finish must complete the work and bring it for checking in the next lab

The instructor helped students resolve installation, version, password, and service-related problems

## Database Setup Requirements

Installation status was checked before beginning the practical work

Students were instructed to create at least two tables or entities

Each table must contain a minimum of five attributes

Each table must contain ten records or entries

Students asked whether data types could be changed later; the instructor confirmed that updates would be taught afterward

Completed table creation and content entry were checked before advancing to SQL commands

## SQL `WHERE` Clause: Selecting Specific Records

`SELECT * FROM TableName` was introduced as the base query for displaying all columns and rows

A `WHERE` condition restricts the output to records matching a specified requirement

Roll-number example: searching for a student with roll number `CM2245` returns that student’s complete details

The query concept was compared with an examination-results website:

Entering a roll number acts as the condition

The underlying query retrieves all information associated with that roll number

Range filtering was introduced for retrieving roll numbers between `100` and `150`

A single-value condition and a range condition were distinguished

## SQL `LIKE` Clause: Pattern-Based Searching

`LIKE` was introduced for situations where the exact value is unknown but part of the pattern is known

Names beginning with `A` can be retrieved by using a pattern such as `A%`

`%` represents an unknown sequence of characters

A pattern can identify names beginning and ending with known letters, such as `N%N`

`_` represents one unknown character

A pattern such as `N__N` searches for a four-character value beginning with `N` and ending with `N`

The same `SELECT * FROM ... WHERE column LIKE ...` structure applies to pattern searches

Students were encouraged to test the different `LIKE` patterns and check for errors

## Installation, Password, and Version Problems

Several students experienced problems with MySQL or related software installation

One student reported a possible shell-password mistake and difficulty after a previous password change

Previous practical attendance and register records were briefly checked when a student questioned an absence dated `12 August`

Installation problems were linked to using the wrong downloaded version:

The instructor emphasized downloading the `500` version

The `255`/`256` version was reported to have problems, including an instance not being created automatically

Students were told to uninstall conflicting or incomplete installations before trying again

A service may need to be enabled through an `MSC` service-management interface

A student mentioned working with version `19`, but the installation was still not functioning correctly

Slow download and installation speed caused repeated attempts and delays

The instructor offered to perform the installation and help students record the steps if necessary

Some students confirmed that their installation had completed successfully

## Attendance, Coursework, and Class Logistics

Attendance was called for multiple students, including Saurav, Saumya Raj, Ranjit Singh, Daksham Sharma, Gautam, Piyush Dogra, Sneha Verma, Kishan Thakur, Yash, Aman, Ojasvi Verma, Abbas, Tanvi Verma, Mansi, Varnika, Shreya, Adarsh Kapoor, Varun, Kartik, Namrata, Prateek Shinde, Mukul, Guryan, Tejas, Aadarsh, Shivam, Nayan, Bhavya, Neha, Akshm, and Gopika

Students confirmed whether they had completed the practical work

The assignment was reported as submitted by some students, with another submission deadline mentioned for the following day

A hard copy was mentioned as an additional requirement due in September

Students discussed whether laptops and chargers would be needed for upcoming Python, minor, theory, and practical classes

A laptop was considered necessary for at least one upcoming practical session, while some theory or minor classes might not require one

## Action items

**Students who have not finished**: Complete the database lab work, including the required tables, attributes, entries, and SQL commands

**Students**: Bring the completed work through the current stage to the next lab and get it checked

**Students**: Complete the current lab assignment and submit any required work by the stated deadline

**Instructor**: Help affected students complete the correct software installation and resolve service or version issue