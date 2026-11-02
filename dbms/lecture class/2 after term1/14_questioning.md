# Database Concepts Review: Normal Forms, Keys, Codd’s Rules, Aggregation, and Views

October 1, 2026·10:20 AM·33m 47s

### Play Audio

0:00

34:57

SummaryTranscriptNotes

Edit

## Overview: Interactive Database Concepts Revision

Instructor-led database revision covering normalization, keys, relational database rules, aggregation, and database views/levels

Instructor and students; individual student identities are mostly unclear

Critical outcomes:

First normal form requires atomic cell values, tabular data, and a primary key

Candidate keys are minimal subsets of a superkey that uniquely identify a record

Physical, conceptual, and external levels describe a different view of database structure than internal, logical, and external views

The instructor emphasized answering the exact question asked and explaining any extra terms included in an answer

## Normal Forms and Prime Attributes

First normal form (1NF) was reviewed as requiring atomic values in cells, tabular organization, and a primary key

Second normal form (2NF) was connected to partial dependency and the requirement that non-prime attributes depend on prime attributes

Prime attributes were described in relation to candidate keys; non-prime attributes are those that are not part of a candidate key

A student-age example illustrated the dependency test: an age value of 43 that belongs to a teacher should not be treated as dependent on a student’s roll number

The instructor said 3NF had not yet been taught and mentioned 3.5 normal form and BCNF in passing

## Keys: Primary, Unique, Foreign, and Candidate

A foreign key references the primary key of another table

A primary key cannot be null; the class answer described a unique key as containing unique values while allowing one null

Candidate key definition: a minimal subset of a superkey that can uniquely identify a single record

The instructor advised students to answer only what the question asks; if they introduce a related concept, they should define it too

## Codd’s Rules and Active Online Catalogues

The class reviewed Codd’s rules, including Information Rule, Systematic Treatment of Null Values, Guaranteed Access, and Logical and Physical Data Independence

Active online catalogue was explained as documentation that tells a user how to use or locate something

Examples included a shopping website catalogue and directions identifying a classroom such as LH102 on the first floor

## Aggregation and Database Views

Aggregation was described as applying aggregate functions such as `COUNT` and `SUM` to data; the appropriate explanation depends on context, such as aggregating marks to calculate an overall percentage

The instructor corrected confusion between view types and database levels:

Levels were discussed as internal/physical, conceptual/logical, and external

Views were described using physical, logical, and application/external terminology

The instructor cautioned against treating “conceptual level” and “logical view,” or “application view” and “external level,” as interchangeable labels without clarifying the terminology

Physical-level discussion focused on how data is stored, while conceptual/logical discussion concerned the database’s structure and design; the external level concerns what users see