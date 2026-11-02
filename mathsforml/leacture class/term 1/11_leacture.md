# Probability Class: Addition and Multiplication Theorems, Conditional Selection, and Independent Events

September 7, 2026·11:07 AM·35m 2s

### Play Audio

0:00

36:17

SummaryTranscriptNotes

Edit

## Overview: Probability lecture and problem-solving session

Classroom lesson covering probability theorems, card problems, sampling without replacement, and independent events

Two speakers: a teacher and a student; names are not clearly identified

Critical outcomes:

Addition theorem: (P(A \cup B)=P(A)+P(B)-P(A\cap B))

Multiplication theorem: (P(A\cap B)=P(A)P(B|A)), reduced to (P(A)P(B)) for independent events

Several numerical examples were solved, including cards, student selection, survival probabilities, and problem-solving success

## Probability Theorems and Card-Selection Examples

**Addition theorem**: The probability of (A) or (B) is calculated as (P(A)+P(B)-P(A\cap B))

**Multiplication theorem**: The probability of (A) and (B) is (P(A)P(B|A))

**Independent events**: When (A) and (B) are independent, (P(A\cap B)=P(A)P(B))

**Mutually exclusive events**: When events cannot occur together, the intersection term is zero, so the addition rule simplifies to (P(A\cup B)=P(A)+P(B))

**King and heart from a deck**:

(P(\text{king})=4/52)

(P(\text{heart})=13/52=1/4)

“King and heart” refers to the king of hearts, so the probability is (1/52)

“King or heart” uses the union formula: (4/52+13/52-1/52=16/52)

---

## Selecting Boys from a Class With and Without Replacement

**Class composition**: 10 boys and 15 girls, giving 25 students in total

**Two boys in the first draw**:

Favorable cases: (^{10}C_2=45)

Total cases: (^{25}C_2=300)

Probability: (45/300)

**Without replacement**:

After two boys are selected, 8 boys and 23 students remain

Probability of selecting two boys in the second draw: (^{8}C_2/^{23}C_2=28/253)

Combined probability: ((45/300)(28/253))

**With replacement or participation allowed**:

The original 10 boys and 25 students remain available

Conditional probability for two boys in the second draw returns to (^{10}C_2/^{25}C_2=45/300)

Combined probability: ((45/300)(45/300))

**Two boys followed by two girls without replacement**:

First-draw probability remains (45/300)

After two students are removed, 23 students remain

Favorable second-draw cases for two girls: (^{15}C_2)

Second conditional probability: (^{15}C_2/^{23}C_2)

Required probability: ((45/300)(^{15}C_2/^{23}C_2))

---

## The Eighth Student as the Last Girl

**Class composition**: 10 boys and 3 girls, with students selected one by one

The event requires the 8th selected student to be the third and final girl

Among the first seven positions:

Exactly two girls must be selected

Five boys must be selected

The selection count is represented by (^{3}C_2 \times {}^{10}C_5)

The total ways to select seven students from 13 is (^{13}C_7)

After two girls have appeared in the first seven selections, one girl remains among six remaining students

Conditional probability that the 8th student is the final girl: (1/6)

Required probability:  
[ \frac{{}^{3}C_2 \times {}^{10}C_5}{{}^{13}C_7}\times\frac{1}{6} ]

---

## Survival and Death Probabilities for Two People

**Given probabilities**:

A 60-year-old man survives another 10 years with probability (0.8)

His 55-year-old wife’s survival probability was stated as (0.9), but the subsequent calculation used (0.7)

**Both alive after 10 years**:

Using the calculation shown in class: (0.8\times0.7=0.56)

If the stated wife probability (0.9) is used instead, the result would be (0.8\times0.9=0.72)

**Both dead**:

Man’s death probability: (1-0.8=0.2)

Wife’s death probability in the calculation: (1-0.7=0.3) would be required for consistency with (0.7), although the transcript later uses (0.1)

The stated calculation used (0.2\times0.1=0.02), reflecting a wife survival probability of (0.9)

**Exactly one alive**:

One case: man alive and wife dead, (0.8\times0.1=0.08)

Other case: man dead and wife alive, (0.2\times0.9=0.18)

Total: (0.08+0.18=0.26)

**At most one alive**:

Includes exactly one alive plus both dead

Result shown: (0.26+0.02=0.28)

**At least one alive**:

Includes exactly one alive plus both alive

Result shown: (0.26+0.72=0.98)

---

## Independent Problem-Solving Probabilities

**Three independent persons**:

A solves with probability (1/3)

B solves with probability (1/4)

C solves with probability (1/5)

**All three solve**:

“All” means (A\cap B\cap C)

Probability: ((1/3)(1/4)(1/5)=1/60)

**None solve**:

Failure probabilities are (2/3), (3/4), and (4/5)

Probability: ((2/3)(3/4)(4/5)=24/60)

**Exactly one solves**:

Three mutually exclusive cases:

A solves, B and C do not

B solves, A and C do not

C solves, A and B do not

Their probabilities are added because the cases cannot occur simultaneously

**Exactly two solve**:

Three cases are represented:

(A\cap B\cap C')

(A\cap B'\cap C)

(A'\cap B\cap C)

**At most one or two solve**:

The teacher introduced these as further combinations of the “none,” “exactly one,” and “exactly two” cases before ending the session