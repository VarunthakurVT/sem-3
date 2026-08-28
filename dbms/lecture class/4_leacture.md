]# ER Diagram Fundamentals, Entity Relationships, Keys, and Multi-Table Joins

August 25, 2026·10:12 AM·38m 37s

## Overview

Database class focused on ER diagrams, entities, attributes, relationships, keys, and joining related tables

Participants: instructor and students; individual student names and roles are not consistently identified

Critical outcomes:

Students must distinguish entity names from their attributes

Practice ER diagrams must use four entities with at least five attributes per entity

Relationships, primary keys, foreign keys, and indirect three-table joins were demonstrated

Student, course, teacher, university, account, factory, inventory, and management examples clarified ER modeling choices

## Attendance and Review of Previous Concepts

Attendance concerns arose because a student arrived approximately two minutes late, reducing attendance from 100% to 97%

The instructor reviewed the previous lesson because some students had arrived late or missed the earlier class

**Entity**: Represents a table or the name of a table in a database

Examples included `Student`, `Teacher`, `College`, `Customer`, `Orders`, `Products`, `Factory`, and `Inventory`

**Attribute**: Represents a property or column describing an entity

Student attributes included `ID`, `Name`, `Roll Number`, `Email ID`, `Phone Number`, and `Program`

Customer attributes included `c_id`, `c_name`, `phone_number`, and `address`

The instructor emphasized remembering the distinction: an entity is the table-level object, while attributes are its properties

---

## ER Diagram Structure and Drawing Conventions

An ER diagram represents entities, their attributes, and the relationships between entities

Entities are drawn inside rectangles or boxes

Attributes are drawn inside ovals

Relationships are placed between entities to show how tables are connected

Students were asked to create their own examples rather than repeatedly using `Student`, `Teacher`, or `College`

The instructor required a practice diagram with:

At least four entities

At least five attributes for each entity

Relationships connecting the entities appropriately

The instructor corrected diagrams where students used unclear shapes, incomplete attributes, or insufficient relationships

Students were encouraged to choose a different practical domain, such as a factory, instead of copying the classroom examples

---

## Factory, Inventory, Customer, and Material Example

A factory-based database was suggested as an alternative ER diagram scenario

Possible entities included `Factory`, `Customer`, `Inventory`, `Goods`, `Material`, `Manufacturer`, and `Procurement Department`

**Factory and material flow**

A manufacturer can provide raw material to a factory

The procurement department may represent the factory-side process responsible for obtaining material

The relationship should specify what is being provided, rather than using an overly general relationship name

**Inventory and goods**

Goods represent items purchased or handled by customers

`Inventory` or `Stock` can represent products or materials maintained by the factory

**Customer attributes**

`c_id`

`c_name`

`phone_number`

`address`

The instructor repeatedly stressed using precise relationship names, such as `provides material`, rather than vague labels like `provider`

The example demonstrated that entity names, attributes, and relationships must be kept conceptually separate

---

## Relationship Naming and Specificity

A relationship explains the action or association between two entities

Examples of relationship names included:

Teacher `teaches` a course

Student `enrolls in` a course

Teacher `is assigned to` or teaches a course

Manufacturer `provides` raw material

Teacher `gets salary` from an account

Student `pays fees` through an account

The instructor rejected vague or incorrect labels and asked students to identify the exact action represented by each connection

A relationship is not an attribute and should not be placed inside an entity’s attribute list

The same attribute name may appear in multiple entities when it represents the corresponding identifier in each table

Entity connections should be meaningful; unrelated entities should not be connected merely to make the diagram look complete

---

## Student, Course, and Teacher Relationships

The instructor used a university-style model to demonstrate several connected entities

**Student–Course relationship**

A student enrolls in a course

The relationship can be called `Enrollment` or `Enrol`

One student can enroll in one or many courses

One course can have one or many students

**Teacher–Course relationship**

A teacher teaches a course

The relationship can be called `Teach`

One or many courses may be taught by one or many teachers, depending on the modeled system

**Course-related entities**

`Student`

`Teacher`

`Course`

`University`

`Exam`

`Account`

`Exam` was mentioned as a possible weak entity or dependent entity associated with a course

`University` was treated as a parent or higher-level entity containing the broader database structure

The instructor clarified that every entity does not need a direct relationship with every other entity

Each entity should, however, participate in at least one meaningful relationship within the database model

---

## Primary Keys, Foreign Keys, and Indirect Joins

The instructor connected ER diagrams to practical SQL table joins

A `Course ID` appearing in more than one table can connect those tables

The identifier in its original table is a primary key

The same identifier stored in another table becomes a foreign key

Example:

`Course ID` is a primary key in the course table

`Course ID` can appear as a foreign key in the student or enrollment table

`Teacher ID` can identify the teacher associated with a course

Three tables can be joined even when the first and third tables do not have a direct relationship

The instructor explained this through the logical chain:

Student is connected to Course

Course is connected to Teacher

Therefore, Student can be connected to Teacher through Course

This was compared to the transitive idea that if `A = B` and `B = C`, then `A` is connected to `C`

The course acts as the third entity or bridge table that enables the indirect join

Students were told to focus on this concept for practical database work involving table joins

---

## University Account Relationships

`Account` was presented as an important university-related entity

**Teacher–Account relationship**

A teacher receives salary through the account system

The relationship was expressed as `Teacher gets Salary`

**Student–Account relationship**

A student pays fees through the account system

The relationship was expressed as `Student gives Fees`

The same identifier concept, such as a student or teacher ID, can be referenced in another entity when the relationship requires it

Tables are usually connected incrementally through keys rather than being treated as one large combined table

---

## Modeling Management Roles and Job Profiles

Students asked how to represent a company’s CEO, CFO, founder, co-founder, and other organizational positions

The instructor distinguished a person’s role or job profile from the person’s core attributes

`CEO`, `CFO`, `Founder`, `Co-founder`, `Director`, `Professor`, `Dean`, and `Vice Chancellor` can be represented as roles or designations

A role such as “teacher” or “student” describes a person’s function in the organization or system; it is not automatically an attribute of every person record

A separate `Roles` table can be useful when an organization has multiple people or many different positions

Possible role attributes included:

`Role ID`

`Name`

`Designation`

`Job Profile`

Responsibilities or functions performed

A management entity can reference `Role ID` as a foreign key

Example role identifiers included:

CEO assigned role ID `1`

CFO assigned role ID `2`

Another management role assigned role ID `3`

Multiple co-founders or other repeated positions can be represented through separate records connected to the roles table

The instructor warned that creating too many tables for a small model can waste memory and add unnecessary complexity

More normalized role structures become useful for larger organizational systems, while a simpler model may be sufficient for a small project

---

## Testing and Practical Expectations

The instructor warned that a well-prepared surprise test could occur at any time

Students were expected to understand the concepts rather than copy a fixed classroom diagram

The practical work will focus especially on:

Drawing entities and attributes correctly

Naming relationships precisely

Identifying primary and foreign keys

Connecting tables through common IDs

Understanding direct and indirect joins

Students were repeatedly asked to verify whether their diagrams were complete and whether each entity had the required attributes and relationships

---

## Action items

**Students**: Create an original ER diagram using at least four entities and at least five attributes for each entity

**Students**: Use clear rectangles for entities, ovals for attributes, and labeled relationships between connected entities

**Students**: Practice identifying primary keys, foreign keys, and indirect joins through a third table

**Students**: Prepare for a possible surprise test on entities, attributes, relationships, and ER diagrams