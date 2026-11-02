# Database Normalization: 3NF, BCNF, 4NF, and Functional Dependencies

October 13, 2026·10:11 AM·43m 50s



The class covered how 3NF, BCNF, and 4NF address different dependency problems, using student/course examples and discussing normalization’s impact on database design and queries.

## Third Normal Form: Removing Transitive Dependencies

**3NF condition:** The instructor described 3NF as requiring a table to be in 2NF and to have no transitive dependency, illustrated as a chain where one attribute determines a second, which determines a third.

**Decomposition:** The class considered splitting a student/course table to remove transitive dependencies. The instructor emphasized analyzing attributes and dependencies rather than focusing on primary and foreign keys at this stage.

**Non-prime attributes:** The explanation connected 3NF to non-prime attributes depending on prime attributes, and distinguished the 2NF requirement from the additional 3NF check for transitive dependencies.

**Exam focus:** Students were told to focus on normal forms for the relevant paper. The instructor said that converting a table to 2NF often also brings it to 3NF, but students still need to check for transitive dependencies rather than assume this always happens.

## BCNF: Checking Functional Dependencies Against Superkeys

**Purpose:** BCNF was introduced as an advanced form beyond 3NF. The instructor framed its condition around each functional dependency’s determinant, X: X should be a superkey. This is broader than the candidate-key framing used earlier.

**Finding dependencies:** Students should identify the functional dependencies in a given table before testing its normal form. The instructor stressed that functional dependencies used in questions should be atomic.

**Student/course example:** A table containing Student ID, Student Name, Course ID, Course Name, and Instructor was used to derive:

Student ID → Student Name

Course ID → Course Name, Instructor

**1NF check:** Each field must contain an atomic value. For example, storing two instructor names together in one field would violate 1NF and require restructuring.

**Enrollment relation:** Student ID and Course ID together represent the student–course enrollment relationship; neither was treated as functionally determining the other in the example.



## Fourth Normal Form: Removing Multivalued Dependencies

**4NF condition:** The instructor introduced 4NF as requiring no multivalued dependencies, while noting that it is less commonly needed in routine normalization than 2NF, 3NF, or BCNF.

**Course example:** A course can have multiple instructors and multiple authors, with instructor and author each depending on the course but not on each other. The instructor identified this as a multivalued dependency and demonstrated separating the data into distinct tables, including Course and Instructor.

**Attribute versus dependency:** Multiple values stored in one field—such as multiple phone numbers—are a multivalued attribute issue. A multivalued dependency is different: two independent attributes depend on a third attribute.

**Student-profile example:** The class distinguished fields relevant to an academic table, such as roll number, name, batch, program, and course, from broader personal or historical information such as address, phone number, email, and prior qualifications. Table contents should reflect the data required for that table’s purpose.

**Progression between forms:** Higher normal forms require the lower normal forms first: 4NF requires BCNF, which requires 3NF, 2NF, and 1NF. Each resulting table must be assessed on its own; tables in the same database can be at different normal forms.

**Scope of normalization:** Normalization splits a large table into smaller, related tables to reduce unnecessary duplication and support efficient data handling. The instructor cautioned that a database does not need every table to reach the highest normal form.

**Joins and scale:** A timetable display may combine information from roughly five tables, including student, course, infrastructure, teacher, and time-management data. The instructor used a 60-student example—one subject multiplied by five subjects and seven—to reach 2,100, then noted that the institution ran 1,900 courses/subjects.

**Design responsibilities:** Database architecture and schema design were described as the architect’s responsibility, while developers implement the supplied design; DBAs and testers help maintain and verify the resulting database. The instructor connected this division of work to later software engineering and SDLC topics.

**Foreign keys:** The instructor distinguished foreign keys from prime attributes: a foreign key references a prime attribute in another table and may repeat, whereas a prime attribute is used to identify records. The example was Course ID `CSU357`, which can appear for multiple students as a foreign key.