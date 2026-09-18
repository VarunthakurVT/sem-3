# Recurrence Relations, Strassen Matrix Multiplication, and Asymptotic Analysis Class

September 7, 2026·9:19 AM·43m 3s

### Play Audio

0:00

44:38

SummaryTranscriptNotes

Edit

## Overview

Classroom lecture focused on solving recurrence relations using substitution, recursion-tree, and Master Method techniques

Participants: one instructor and multiple students; individual student names are not identified

Critical outcomes:

Strassen-style matrix multiplication was derived as approximately (O(n^{2.8})), improving on (O(n^3))

Recurrence termination conditions were converted into logarithmic expressions for determining (k)

Cormen exercises on recurrence relations and asymptotic growth were assigned for practice

## Substitution Method for a Matrix-Multiplication Recurrence

The instructor worked through a recurrence of the form:

[  
T(n)=7T(n/2)+\Theta(n^2)  
]

**Repeated expansion**: Replacing (T(n)) with (7T(n/2)+n^2) produces terms such as: [ 7^2T(n/2^2),\quad 7^3T(n/2^3) ]

Each substitution divides the input size by (2), while multiplying the recursive coefficient by (7)

After (k) expansions, the recursive term becomes: [ 7^kT(n/2^k) ]

The non-recursive terms form a geometric progression involving: [ 1,\ \frac{7}{4},\ \left(\frac{7}{4}\right)^2,\ldots,\left(\frac{7}{4}\right)^{k-1} ]

Since (7/4>1), the geometric-series formula was applied: [ \frac{(7/4)^k-1}{(7/4)-1} ]

## Finding the Recursion Depth

The recursion stops when the subproblem size reaches the base case: [ \frac{n}{2^k}=2 ]

Rearranging gives: [ n=2^{k+1} ]

Taking logarithm base (2): [ k=\log_2 n-1 ]

Substituting this value into the expanded recurrence produces terms involving: [ 7^{\log_2 n-1} ]

The instructor emphasized that the (-1) in the exponent contributes a constant factor and does not change the asymptotic order

## Simplifying the Dominant Term

The expression (7^{\log_2 n}) was rewritten using the exponent interchange identity: [ 7^{\log_2 n}=n^{\log_2 7} ]

The instructor gave: [ \log_2 7\approx 2.807 ]

Therefore: [ n^{\log_2 7}=n^{2.807\ldots} ]

Because (n^{2.8}) grows faster than (n^2), the (n^{\log_2 7}) term dominates the additional quadratic terms

The resulting time complexity was identified as approximately: [ O(n^{2.8}) ]

This was connected to Strassen’s improvement over ordinary matrix multiplication, whose complexity is (O(n^3))

## Recurrence-Solving Techniques and GATE Preparation

The instructor explained that recurrence relations can be solved using:

Substitution method

Recursion-tree method

Master Method

The Master Method was described as a shortcut applicable only to recurrences that fit its required form

Strassen’s algorithm was introduced as an example of reducing matrix multiplication below cubic complexity

The instructor briefly explained Strassen’s structural idea:

Divide a square matrix into four smaller sections

Use a different combination of submatrix operations to reduce the number of recursive multiplications

Asymptotic notation was described as representing approximate growth rather than exact numerical values

The instructor noted that recurrence-relation problems are relevant to GATE and may require the substitution method when a recurrence does not directly fit the Master Method

Students were reminded that understanding the pattern of expansion is more important than memorizing only the final result

## A Second Recurrence with Square-Root Subproblems

The lecture then examined a recurrence involving a square-root input:

[  
T(n)=T(\sqrt n)+\text{additional terms}  
]

Since: [ \sqrt n=n^{1/2} ] substituting (n^{1/2}) into the recurrence produces nested powers

Repeated substitution creates exponents such as: [ \frac12,\ \frac14,\ \frac18,\ldots ]

The instructor highlighted that powers are added when multiplying terms with the same base: [ n^{1/2}\cdot n^{1/4}=n^{3/4} ]

Further expansion produced: [ n^{3/4+1/8}=n^{7/8} ] and eventually: [ n^{3/4+1/4}=n ]

The recurring pattern was emphasized as the key to solving such problems rather than expanding indefinitely

## Termination Condition for the Square-Root Recurrence

After (k) recursive calls, the input exponent was represented in the form: [ n^{1/2^k} ]

Termination occurs when: [ n^{1/2^k}=2 ]

Taking logarithm base (2) gives: [ \frac{\log_2 n}{2^k}=1 ]

Therefore: [ 2^k=\log_2 n ] and: [ k=\log_2(\log_2 n) ]

The instructor explained that the final complexity includes a factor related to (n) multiplied by the number of recursive levels, leading to a form involving: [ n\log\log n ]

Careful tracking of repeated (n) terms was necessary because some terms remain outside the recursive substitution at every level

## Cormen References, Sorting, and Asymptotic Growth

Students were directed to use Cormen for additional recurrence-relation practice

The instructor referenced:

Chapter 1 recurrence material

Page 62 for asymptotic growth rules and multiple functions

Pages 78–79 for the recurrence: [ 8T(n/2)+\Theta(n^2) ] and related matrix-multiplication analysis

Insertion sort was mentioned as an algorithm already covered in the course and in Cormen

The instructor contrasted algorithms with quadratic complexity against algorithms with (n\log n) complexity

Students were asked to practice determining the asymptotic order of the functions listed in Cormen

Cormen’s pseudocode style was noted as using indentation instead of relying heavily on braces, similar to Python formatting

## Practical-Class and Coursework Logistics

Students discussed practical classes involving insertion sort and their scheduled sections

One practical session was stated to be at 1:40 in room 140

The instructor encouraged students to attend the practical session if possible and clarify any difficulties there

Assignment and project work were mentioned as ongoing responsibilities

The instructor indicated that students should prioritize completing the assignment and submitting it before moving on to other work

---

## Action items

**Students**: Solve the assigned Strassen-related problem and understand how its matrix partitioning reduces complexity from (n^3) to approximately (n^{2.8})

**Students**: Practice recurrence relations from Cormen, especially the exercises near pages 62, 78, and 79

**Students**: Review substitution, recursion-tree, and Master Method techniques

**Students**: Practice asymptotic-growth questions and identify dominant terms

**Students**: Attend the relevant practical class and continue work on the assignment or project
[[analysis algo/leacture/10_leacture|10_leacture]]