# Complexity Classes, Asymptotic Bounds, and GATE Practice Session

August 26, 2026·3:51 PM·35m 35s


## Overview

Classroom tutoring session covering asymptotic notation, time-complexity ordering, and comparison questions for GATE preparation

Participants: one instructor and multiple students; individual student identities are mostly unclear

Critical outcomes:

Tightest upper and lower bounds were clarified through set-based explanations

Complexity classes were ordered from decreasing to increasing growth

GATE-style comparison questions were solved using logarithms and exponent rules

Insertion sort, merge sort, and quick sort were connected to their time complexities

## Foundations of Upper and Lower Bounds

**Tightest upper bound**: An upper bound represents values that remain greater than or equal to the function or set being bounded

**Tightest lower bound**: A lower bound represents values below which the function does not continue decreasing

**Notation confusion**: Students were uncertain whether the abbreviation referred to a “bound” or a “body”; the instructor repeatedly distinguished upper-bound and lower-bound meanings

**Set notation**: Expressions involving (T), (B), unions, powers, and (n) were referenced while explaining how the relevant bound is identified

---

## Big-O, Small-o, Omega, and Tight Asymptotic Relations

**Big-O notation**: Explained using the condition (f(N) \leq Cg(N)), where the function is bounded above by a constant multiple of another function

**Small-o notation**: Defined using strict inequality, (f(N) < Cg(N)); equality is not allowed in the strict asymptotic relationship

**Omega notation**: Described as a lower-bound relationship using (f(N) \geq Cg(N))

**GATE relevance**: The instructor highlighted that a question about small-(o) notation had appeared in a GATE paper

**Core mathematics notes**: Students were reminded to retain the relevant asymptotic definitions and examples in their notes rather than relying only on photographs or uploaded material

---

## Time-Complexity Classes from Slowest to Fastest Growth

**Decreasing-function examples**: A function such as (1/N) was presented as having very low growth when complexities are listed in increasing order

**Constant complexity**: (O(1)) includes (O(100)), (O(200)), and other fixed quantities because all are treated as constant-time complexity

**Logarithmic complexity**: (O(\log N)) follows constant complexity in the increasing-growth order

**Polynomial classes**:

Linear: (O(N))

Quadratic: (O(N^2))

Cubic: (O(N^3))

General polynomial: (O(N^C)), where (C>0)

**Exponential complexity**: Terms such as (2^N), (3^N), and (4^N) were identified as exponential and substantially slower than polynomial functions

**Super-exponential example**: (N^N) was described as having even greater growth than ordinary exponential functions

**Intermediate classes**: (N\log N) lies between (N) and (N^2), while (N^2\log N) lies between (N^2) and (N^3)

**Very slow growth**: (\log\log N) was identified as smaller than (\log N), although the instructor noted that it rarely appears as the complexity of a practical algorithm

---

## Sorting Algorithms and Algorithmic Performance

**Insertion sort**: Identified with (O(N^2)) time complexity

**Merge sort and quick sort**: Mentioned as faster alternatives with typical (O(N\log N)) complexity

**Fast algorithms**: Complexities at or below quadratic time were treated as faster than (O(N^2)) for the comparison being taught

**Selection sort**: Recalled as an algorithm previously discussed with the students

**Python and DSA preparation**: Students were encouraged to strengthen programming fundamentals because algorithmic concepts are easier to apply when Python, C, or C++ syntax is understood

**Language independence**: The same DSA concepts and linked-list questions can be taught using C, C++, or another programming language; the underlying algorithmic reasoning remains similar

---

## GATE-Style Function Comparisons and Logarithmic Transformations

**Logarithm method**: To compare expressions containing powers, students were instructed to take logarithms on both sides

**Square-root logarithm**: (\sqrt{\log N}) was rewritten as ((\log N)^{1/2}) before comparison

**Nested logarithms**: Expressions such as (\log\log N) and (\log\log\log N) were compared by examining which expression grows more slowly

**Truth-value questions**: Students evaluated whether inequalities involving (2^N), (N^C), logarithms, and constants were true or false

**Constant selection**: For asymptotic inequalities, constants such as (C) can be chosen sufficiently large when the relationship permits it; the instructor used values such as (2^{400}) and (2^{25}) to illustrate the idea

**Exponent comparison**:

(2^N) was compared with (N^{\log N})

Taking logarithms transformed (2^N) into (N\log 2)

Taking logarithms of (N^{\log N}) produced ((\log N)(\log N))

The comparison showed that (N^{\log N}) grows faster than (2^N) under the stated comparison

**Product of exponentials**: (2^N \times 2^N = 2^{2N}), which remains exponential rather than polynomial

**Variable versus constant**: The instructor emphasized that a variable exponent such as (2^N) cannot generally be replaced by a constant-based expression such as (C2^N) when the asymptotic relationship requires the coefficient to be fixed

---

## Notes, Resources, and Class Organization

**Board notes**: Students were asked to write the complexity-class sequence and capture useful questions rather than merely photographing every board section

**Digital uploads**: Questions and supporting material were repeatedly discussed in relation to uploading them to “Digi”; the instructor questioned the need to upload photographs when students already had written notes

**External resources**: NPTEL PDFs were mentioned as a possible direct source for study material

**Book practice**: Students were advised to focus on the exercise questions that are useful for preparation instead of attempting every question in a very large book

**Study sequence**: A student reported difficulty understanding online questions without step-by-step explanations; the instructor recommended using the book’s exercises and following a clearer sequence

**Course progress**: The class referenced Python, C, C++, DSA, Generative AI, and algorithm topics, with concern that students were dividing attention across too many subjects

**Class scheduling**: The session ended around 4:00, with discussion of class changes, remaining sessions, attendance, and the next meeting time

---

## Action items

**Instructor**: Cover insertion sort in the next lab and continue with merge sort and quick sort

**Students**: Practice ordering complexity functions and solving the GATE-style comparison questions step by step

**Students**: Maintain written notes for asymptotic notation, complexity classes, and solved examples

**Students**: Use selected book exercises and relevant uploaded study material for additional practice