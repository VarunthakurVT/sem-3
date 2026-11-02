# Recursion, Master Method, Geometric Series, and Informal Errands

September 9, 2026·3:52 PM·39m 34s

### Play Audio

0:00

41:15

SummaryTranscriptNotes

Edit

## Overview

Informal study-and-conversation recording covering recurrence relations, recursion, time complexity, geometric series, and unrelated logistical exchanges

Participants are not clearly identified; one speaker appears to be teaching or explaining algorithms to students

Critical outcomes:

Recursion and time-complexity questions should be revised for the class or exam

Master method and substitution method were presented as approaches for solving recurrence relations

Geometric-series behavior was used to explain why terms involving ratios below 1 converge

## Recurrence Relations and Time Complexity

Recursion questions and their time-complexity analysis were identified as important revision topics

Binary search was mentioned as a recursion-related problem likely to appear

Recurrence relations with more than one recursive call can be analyzed using recursive methods

The speaker clarified that ordinary substitution can solve many recurrence problems, while a shortcut or special method may be shown if time permits

A recurrence involving a reduced input such as `n/2` or `n/3` was discussed

The replacement of `n` by `2n/3` was considered in the context of each recursive step

The speaker distinguished cases where the input is divided by 2 from cases where it is divided by 3

The conversation emphasized identifying how the input size changes at every recursive level before calculating the complexity

## Master Method, Substitution, and Asymptotic Bounds

Master method was described as a special case related to the substitution method

Recurrences were compared by examining the denominator and the relative size of terms

A complexity of `Θ(n log n)` was proposed for one of the discussed recurrence forms

Logarithms with different bases, including `log n base 2`, `log n base 3`, and `log n base n/2`, were referenced as previously taught examples

The speaker explained that the same recurrence can sometimes be solved from either the left-hand side or the right-hand side, with one approach reducing calculation time

The analysis focused on comparing polynomial and logarithmic terms to determine which component dominates

## Geometric Progression and Convergence

A geometric progression was used to analyze repeated terms such as `4/5`

Because `4/5` is between 0 and 1, its powers become progressively smaller:

`(0.2)^2` was given as `0.04`

Further powers continue moving toward zero

The infinite geometric-series result was identified as:

`A × 1 / (1 − r)`

where the ratio `r` is less than 1

The speaker connected this convergence behavior to recurrence calculations involving repeated fractional reductions

The number of terms was discussed using `K + 1`, with `K` considered potentially infinite

Values such as `n/5`, `n/25`, and `4/5` appeared during the calculation, although the exact recurrence being solved was not fully clear in the transcript

The explanation concluded that a decreasing geometric component eventually contributes a bounded amount rather than continuing to grow indefinitely

## Class Materials and General Distractions

Class revision and previously taught questions were referenced, including material from older GATE questions

A request was made for class-related material, with uncertainty about whether another instructor, Anshu ma’am, had the required notes

The conversation briefly became distracted by phone calls, games, and unrelated comments

A Spider-Man item was mentioned but not selected

Several exchanges concerned whether class had taken place and what different people were doing
[[analysis algo/term 1/11_leacture|11_leacture]]