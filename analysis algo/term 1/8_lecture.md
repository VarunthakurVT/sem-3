# Recurrence Relations: Substitution Method, Factorial Bounds, Logarithmic Series, and Time Complexity

September 2, 2026·3:45 PM·35m 38s

### Play Audio

0:00

36:55

SummaryTranscriptNotes

Edit

## Overview

Education session on solving recursive recurrence relations and deriving algorithmic time complexity

One instructor with multiple students; Satyam and Ayush were directly addressed, while many other student names were called

Critical outcomes:

Recurrence (T(n)=T(n-1)+n) resolves to (O(n^2))

Recurrence (T(n)=T(n-1)\cdot n) resolves to factorial growth, (n!)

Recurrence (T(n)=T(n-2)+\log_2 n) resolves to (O(n\log n))

Students were instructed to review logarithmic series and Stirling’s approximation

## Recurrence Relations as a Tool for Algorithm Analysis

Recurrence relations describe the running time of recursive algorithms and must be both formulated and solved

Three solution techniques were mentioned:

Substitution method

Master method

Recursion-tree method

The instructor emphasized that the Master method is often the most useful approach, but substitution-based expansion is essential for understanding how recursive terms unfold

Recurrence analysis connects algorithm design with mathematical topics from discrete mathematics

---

## Substitution Expansion for (T(n)=T(n-1)+n)

The recurrence begins with: [ T(n)=T(n-1)+n ]

Substituting (n-1) into the recurrence gives: [ T(n-1)=T(n-2)+(n-1) ]

Substituting again produces: [ T(n)=T(n-2)+(n-1)+n ]

Further expansion creates the pattern: [ T(n)=T(n-k)+(n-k+1)+\cdots+(n-1)+n ]

The instructor explained that after (k) recursive calls, the remaining term is (T(n-k))

Recursion stops when: [ n-k=1 ] which gives: [ k=n-1 ]

With (T(1)=1), the remaining sum is effectively: [ 1+2+3+\cdots+n ]

Using the natural-number summation formula: [ \frac{n(n+1)}{2} ] the time complexity becomes: [ O(n^2) ]

This example demonstrates how a recurrence can be expanded step by step until its base case is reached

---

## Multiplicative Recurrence and Factorial Growth

A similar recurrence was introduced with multiplication instead of addition: [ T(n)=T(n-1)\cdot n ]

Expansion gives: [ T(n)=T(n-2)\cdot(n-1)\cdot n ]

After (k) steps, the pattern contains: [ T(n-k)\cdot(n-k+1)\cdots(n-1)\cdot n ]

The stopping condition remains: [ n-k=1 ] so: [ k=n-1 ]

The resulting product is: [ 1\cdot2\cdot3\cdots n=n! ]

The instructor recalled the bounds: [ 2^n < n! < n^n ] as discussed in class

Stirling’s approximation was introduced as the more useful estimate for factorial expressions: [ \log(n!)=O(n\log n) ]

Students were asked to review the proof and details of Stirling’s approximation independently, with the instructor offering to explain it again if necessary

---

## Reciprocal Recurrence and the Harmonic/Logarithmic Series

Another recurrence of the same substitution pattern involved reciprocal terms, producing a sum like: [ 1+\frac12+\frac13+\cdots+\frac1n ]

This is the harmonic series, whose growth is: [ O(\log n) ]

The instructor identified logarithmic and exponential series as important prerequisite topics for these recurrence problems

The examples were presented as representative recurrence forms that may appear in algorithm-analysis questions

---

## Solving (T(n)=T(n-2)+\log_2 n)

The instructor considered: [ T(n)=T(n-2)+\log_2 n ]

Repeated substitution produces: [ T(n)=T(n-4)+\log_2(n-2)+\log_2 n ] and later terms such as: [ T(n-6),\ T(n-8),\ldots ]

After (k) recursive steps, the remaining recursive term is: [ T(n-2k) ]

The stopping condition is: [ n-2k=0 ] giving: [ k=\frac n2 ]

The expanded expression contains approximately (n/2) logarithmic terms: [ \log_2 2+\log_2 3+\cdots+\log_2\left(\frac n2\right) ]

Logarithm properties convert the sum into a logarithm of a product:  
[  
\log_2 2+\log_2 3+\cdots+\log_2\left(\frac n2\right)

\log_2\left(2\cdot3\cdot\cdots\frac n2\right) ]

The product is related to: [ \left(\frac n2\right)! ]

Applying the factorial estimate through Stirling’s approximation gives: [ \log\left(\left(\frac n2\right)!\right)=O(n\log n) ]

The final time complexity is therefore: [ O(n\log n) ]

The instructor connected this result with the familiar (O(n\log n)) complexity of merge sort and average-case quicksort

---

## Connection to Discrete Mathematics and Algorithm Preparation

Recurrence relations are expected both as written algorithm representations and as problems requiring time-complexity analysis

Discrete mathematics topics support the analysis, especially:

Natural-number summations

Logarithmic and exponential series

Factorials

Stirling’s approximation

The instructor framed these examples as preparation for future algorithm questions, where students must recognize the recurrence pattern and select an appropriate solving method

Students were encouraged to understand the repeated-substitution pattern rather than memorize only the final complexity

---

## Classroom Check-ins and Student Participation

The instructor repeatedly checked whether students understood each substitution step

Students responded with confirmations such as “Yes, sir” while following the expansion patterns

Satyam and Ayush were directly asked to identify themselves during a classroom interruption

Students were asked to attempt similar questions individually, including the reciprocal-term recurrence and the logarithmic recurrence

Several student names were called near the end, including Rishi, Anish, Sahil, Pradeep, Sanjeev, Saksham, Prem, Koshika, Gautam, Piyush, Anshul, Aayush, Swayam, Shivanshu, Aryan, Hemant Thakur, Abhay, Akhilesh, Tanvi, Harshit, Rizul, Rizul Mahajan, Parnika, Hansie Arora, Drishti, Adarsh Thakur, Varun Thakur, Karthik, Kartikey, Jatil, Jatin Thakur, and Kuldev

The instructor briefly referred to an ongoing test and asked students to continue writing and solving the examples
[[analysis algo/term 1/9_leacture|9_leacture]]