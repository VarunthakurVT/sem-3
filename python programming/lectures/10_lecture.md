# Forest–City Guard Puzzle for OOP Encapsulation and Polymorphism

September 15, 2026·3:09 PM·9m 35s

### Play Audio

0:00

9:55

SummaryTranscriptNotes

Edit

## Overview

OOP programming lecture explaining a Forest–City identification puzzle through classes, objects, encapsulation, polymorphism, and abstraction

Participants: an instructor and students; individual names are not clearly identified

Critical outcomes:

Students must model the scenario using classes and objects

Encapsulation and polymorphism must be demonstrated in the solution

Logic gates/operators are provided as the main implementation hint

## Forest–City Identification Puzzle

A Forest-related person knows only the Forest destination, while a City-related user knows the City location and route

The questioning user cannot identify which person knows the City route and which person knows the Forest route

Only one question may be asked to one of the available people

The question must reveal which direction or person leads to the City, even though the questioner lacks the necessary background information

The instructor emphasized that an incorrect answer could cause the questioner to choose the Forest instead of continuing toward the City

## Translating the Puzzle into Object-Oriented Design

Classes must represent the relevant entities in the puzzle, with objects created for the people, guards, prisoners, or destinations involved

The objects should make it possible to distinguish the City-direction and Forest-direction roles

Encapsulation must hide each object's internal destination knowledge and expose only the required interaction

Polymorphism must allow different guard or person objects to respond through a common interface while retaining different underlying behavior

The instructor stated that using polymorphism should immediately demonstrate abstraction in the design

## Logic-Gate Hint and Clarifications

Logic gates and logical operators are the key hint for constructing the single-question solution

The instructor referenced an OpenJRE-related example and a setup involving prisoners and two guards

One guard knows the City direction, while another knows the Forest direction

The prisoner does not know which guard has which knowledge and must obtain the City identification using one question

A student requested that the question be explained again, indicating that the puzzle and implementation requirements were not immediately clear

The closing exchange focused on confusion about a visual or code demonstration rather than introducing a new technical requirement

---

## Action items

**Students**: Implement the Forest–City puzzle using classes and objects, including encapsulation, polymorphism, abstraction, and logic operators

**Students**: Formulate a single-question strategy that identifies the City direction without knowing which guard has the relevant information