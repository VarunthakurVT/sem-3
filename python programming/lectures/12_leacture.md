# Python OOP Lecture: Guard Logic Puzzle, Dynamic Attributes, Constructors, Encapsulation, and Inheritance

September 16, 2026·3:04 PM·34m 30s

### Play Audio

0:00

35:45

SummaryTranscriptNotes

Edit

## Overview

Classroom lecture and lab discussion covering a guard-direction logic puzzle, assignment procedures, Python dynamic attributes, constructors, encapsulation, access control, and inheritance

One instructor and multiple students; named students directly addressed or referenced during class include Somya, Shivam, Sam, and Nitesh

Critical outcomes:

One assignment submission is expected, with a one-week deadline

The assignment will include a group-discussion-round question

Students must type, run, and understand the provided Python code themselves

Multivariate and exploratory data analysis topics are expected to appear in the exam

## Guard-Direction Puzzle and Logical Questioning

Prisoner scenario: a prisoner must choose between a CD route that leads to survival and a forest route that leads to death

Guard knowledge: one guard knows the CD direction, while another guard knows the forest direction

Prisoner’s restriction: only one question may be asked to one guard

Core challenge: formulate a question that guarantees the correct route despite uncertainty about which guard has which information

Logical-operator discussion: students considered using a `not` operation or asking about the opposite direction, but the exact reliable question was not clearly resolved in the exchange

Interview relevance: the instructor identified the problem as a simple interview question and mentioned that it could appear in an Apple interview

## Lab Performance, Attendance, and Assignment Submission

Coding attempts: 16 students attempted the problem, but only one person had produced correct code at that point

Lab context: students confirmed that a lab session was scheduled

Practical work: the class had completed six practicals

Submission quantity: students were instructed to upload one practical rather than two

Assignment deadline: the form would remain available for one week

Discussion-round content: the assignment will contain a question based on questions commonly asked in company discussion or group-discussion rounds

Digi Campus evaluation:

A student must publish a post

Another student must read it and add a comment or review

The original poster must reply to that comment

The reply is required for the comment to receive evaluation value

The post and comment-related work will be evaluated out of 5 marks

Deadline policy: Digi Campus will not permit late activity after the deadline; forgotten submissions will not be accepted afterward

Conduct requirement: comments and replies must remain respectful and must not contain abusive language

Question source: students may use their own questions, while the instructor will provide two questions

## Class Scheduling, SIH Announcement, and Exam Priorities

Student concern: the class expected an announcement related to SIH and asked whether the lecture could be shortened or postponed

Official information: the instructor said the judging round was on Friday but had not received an official announcement about changes to the class schedule

Teaching priority: without an official statement, the instructor would continue teaching the syllabus and conducting the scheduled class

Attendance flexibility: students could cover missed material with classmates, and attendance itself was not presented as the main issue

Exam emphasis: the instructor stated that topics receiving less classroom time would still be important and could definitely appear in the exam

Named priority topics:

Multivariate data analysis

Exploratory data analysis, or EDA

Differences among data, information, and knowledge

Syllabus responsibility: the instructor emphasized the need to complete the syllabus and stated that mass absence could result in topics being skipped rather than repeatedly rescheduled

Other faculty: Gaurav was identified as handling the DBMS-related deadlock topic, while Nitesh was associated with handling SIH matters

## Dynamic Attributes and Runtime Behavior in Python

Dynamic attributes: attributes that can be changed during runtime rather than being fixed only when the program is written

Runtime assignment: the instructor explained that values can be assigned during execution, allowing an object or variable’s behavior to change dynamically

Function behavior: the example used functions such as `G` and `value` to demonstrate how assigning one function to another can change behavior

Object model: Python functions and methods were described as objects because they can participate in interactions and be assigned or manipulated at runtime

Coding expectation: students were encouraged to run the examples so they can observe how static-looking behavior becomes dynamic when values are assigned during execution

## Constructors, `__new__`, and `__init__`

Constructor purpose: constructors initialize an object by setting its attributes and state

`__new__` method:

Creates or allocates the new object

Returns the newly created object

Operates before initialization

`__init__` method:

Runs after `__new__`

Initializes the object’s parameters and attributes

Does not return a value

Is commonly used as Python’s constructor

Default constructor: accepts no parameters other than `self`

Parameterized constructor: accepts arguments and initializes attributes with specified values

`self`: represents the current object and is required for accessing or assigning that object’s attributes

Deadlock analogy: the instructor connected object allocation and initialization to the idea of values becoming stuck in an allocation cycle, while explaining that constructors establish the required object state

Coding responsibility: students received code examples but were expected to type and execute them instead of relying only on copying

## Encapsulation and Data Hiding

Encapsulation definition: hiding an object’s internal state and requiring interaction through controlled methods

Main purposes:

Protecting data

Preventing accidental modification

Controlling how attributes are accessed

Improving program organization and security

Agile example: the instructor used a project review scenario in which one team could intentionally create obstacles for another team to explain how uncontrolled changes can affect software projects

Practical access pattern: encapsulated attributes should be accessed through methods rather than being modified directly

Programmer goal: students were encouraged to think beyond copying code and develop the ability to become programmers or software architects

## Public, Protected, and Private Members

Public members:

Can be accessed inside and outside the class

Have broad or global accessibility

Can be accessed through expressions such as `self.name`

Require an associated value before the attribute can be used meaningfully

Protected members:

Conventionally use a single underscore, such as `_attribute`

Are intended for restricted access within the class and related subclasses

Are commonly accessed through inheritance

Subclasses: a subclass can inherit from a parent class and use protected data or behavior for operations such as comparisons and displaying results

Private members:

Are not intended to be accessed directly from outside the class

Restrict direct access to internal data

Should be tested through code execution so students can observe the blocking or access-control behavior

Practice recommendation: students were specifically encouraged to execute public, protected, and private-member examples to understand their differences rather than memorizing definitions

## Inheritance and Its Connection to Machine Learning

Derived class: a child class created from a parent class and used to inherit existing behavior

Animal example: the instructor introduced a parent `Animal` class and a child class as a basic inheritance and classification example

Inheritance syntax: the lecture contrasted parent and child classes while introducing the structure for creating a parent class

Hard coding and classification: manual classification in ordinary code was connected to how machine-learning models perform classification using learned models

Machine-learning connection: although a model may appear to perform the classification automatically, the underlying implementation still relies on programming concepts such as classes, objects, and inheritance

Next lesson direction: creating parent classes and extending them through child classes was identified as the next important component

---

## Action items

**Students**: Upload one practical or assignment through the Digi Campus form within the one-week deadline

**Students**: Publish a post, review another student’s post, and reply to the received comment so the interaction is evaluated

**Students**: Use respectful language in all comments and replies

**Students**: Type, run, and study the provided Python examples for constructors, encapsulation, public/protected/private members, and inheritance

**Students**: Cover missed lecture material with classmates if SIH or other scheduling conflicts prevent attendance