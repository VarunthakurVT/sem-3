# DBMS Exam Preparation: Architecture, Keys, Entities, Schema, Instances, and Joins

September 17, 2026·10:23 AM·33m 41s

### Play Audio

0:00

34:54

SummaryTranscriptNotes

Edit

## Overview

DBMS exam-preparation lecture focused on answer-writing patterns, core database concepts, keys, entities, attributes, and joins

One instructor with multiple students; individual student names are not clearly identified

Critical outcomes:

Five-mark answers require definitions, components, and examples

Ten-mark answers require complete explanations, sub-parts, diagrams, and examples

The exam is scheduled for the 25th, with DBMS architecture and views identified as important areas

## Answer-Writing Strategy and DBMS Exam Topics

Five-mark questions should include the main definition, important components, and a relevant example

Ten-mark questions should cover the definition, parts, sub-parts, diagram, complete explanation, and example

Two-mark questions generally require a short definition or statement with an example

DBMS preparation should include:

Meaning and definition of DBMS

Meaning of a database

Reasons for using DBMS

Characteristics, advantages, and disadvantages

Functions and transformations

Different types of keys

DBMS architecture was highlighted as a likely exam question, especially the three types: one-tier, two-tier, and three-tier architecture

A question comparing views and architecture may appear in the final examination

---

## DBMS Views, Architecture, and Storage Levels

**Physical level** describes how data is stored

**Logical level** describes the logical organization of data

**Schema level** represents the structure or design of the database

A **view** represents what a user sees from the database and should not be confused with one-tier, two-tier, or three-tier architecture

View and architecture are different concepts:

A view is a user-specific representation of database data

Architecture describes the arrangement of database-system layers or tiers

Students were cautioned that physical, logical, schematic, view, and architecture terminology can be confused in exam answers

## Instance and Schema: Time-Specific Data Versus Database Structure

An **instance** is the state or content of a database at a particular moment in time

A **schema** is the structure and design of the database

A table’s schema includes its columns and organization

The schema acts as a blueprint showing how data will be managed, organized, and stored

Data is stored inside the table, while the table’s structure is described by the schema

The correct description is “structure of a table,” not “structure of data”

The distinction is:

Schema: fixed or relatively stable structure of a table

Instance: actual data present in that structure at a specific time

## Strong and Weak Entities in Practical Database Design

A **strong entity** has its own primary key and can exist independently

A **weak entity** depends on a strong entity and does not have an independent primary key of its own

Weak entities are conceptually valid but are less commonly used in practical database tables because tables generally receive primary or foreign keys

A derived table can be created by combining information from strong entities such as:

Student

Course

Teacher

A result table may contain Student ID, Course ID, Teacher ID, marks, and subject information

When the primary keys of strong entities are included as foreign keys in a derived table, the resulting entity is treated as weak or derived

A query requesting a student’s name, marks, teacher name, subject, and course obtains those values by combining information from the related strong entities

## Joins and Outer-Join Concepts

Combining tables through related primary-key and foreign-key columns is a join operation

The example described was identified as a **natural join**

Natural join was presented as the first type of join in the sequence being taught

Join explanations should focus on the related columns used to combine tables

A **left outer join** preserves the relevant rows from the left table and includes matching information from the other table

Outer joins were described as less frequently used in the instructor’s practical context

Students were expected to continue studying the different types of joins

## Attributes and Key Comparisons

A **composite attribute** is formed by combining multiple sub-attributes

Example: first name, middle name, and last name together form a complete name

A **multivalued attribute** can contain more than one value for the same entity

Examples include multiple phone numbers or multiple email IDs

A **primary key** uniquely identifies a record and does not allow null values

A **unique key** also maintains uniqueness, but the distinction discussed was its treatment of null values compared with a primary key

The instructor emphasized remembering the difference between unique and not-null constraints

A **candidate key** and a **super key** were identified as another important comparison for exam preparation

The final portion of the lecture briefly referred to an additional important topic, but the transcript does not clearly capture its exact subject