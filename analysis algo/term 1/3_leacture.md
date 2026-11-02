# GATE Time-Complexity Class: Root, Nested-Loop, Log-Log, and Triangular-Sum Analysis

August 17, 2026·9:25 AM·27m 18s

SummaryTranscriptNotes

Edit

## Overview

Algorithms class focused on deriving time complexity from loops, repeated roots, logarithms, and nested iteration patterns

One instructor and multiple students; individual names are not identified in the transcript

Critical outcomes:

Repeated square-root loop terminates in Θ(log log n) iterations

Nested loops combine multiplicatively, producing an overall O(n³ log log n) pattern

A dependent-increment loop reduces to a triangular sum and runs for approximately √n iterations

## Repeated Square Roots Lead to Log-Log Complexity

A loop repeatedly applies a square root to a large value n

After one iteration, the value is `n^(1/2)`

After two iterations, it becomes `(n^(1/2))^(1/2) = n^(1/4)`

After k iterations, the value is `n^(1/2^k)`

Termination occurs when the value reaches `2`

Taking logarithms gives `2^k = log₂ n`

Taking logarithms again gives `k = log₂(log₂ n)`, so the time complexity is Θ(log log n)

The instructor contrasted increasing and decreasing processes while emphasizing that the same logarithmic technique applies

---

## Basic Loop Counting: Bounds, Decrements, and Multiplicative Updates

A loop running from `1` through `n²` performs Θ(n²) iterations

A loop decreasing from `n` to `1` by `2` performs approximately `n/2` iterations

The instructor used a ₹100 example with ₹2 spent per day to illustrate why decrementing by a constant still gives linear complexity

Multiplicative updates such as repeatedly multiplying `i` by a factor require logarithmic analysis rather than direct subtraction counting

For a loop starting at `5` and repeatedly applying a power-based update until reaching `n⁷`, the exponent is solved through nested logarithms

The base of the inner logarithm and the outer logarithm have different roles:

The inner factor contributes a logarithm such as `log₅`

The outer exponent contributes another logarithm such as `log₃`

---

## Nested GATE-Style Loops Produce Multiplicative Complexity

Independent nested loops multiply their iteration counts

Combining an `n²` loop with a loop that decreases by `2` gives:

`n² × (n/2) = n³/2`

Asymptotically, this contributes Θ(n³)

A further loop with a power-based update contributes a logarithmic factor

The logarithmic term was expanded as:

`log₃(log₅(n⁷))`

`= log₃ 7 + log₃(log₅ n)`

`log₃ 7` is constant and does not affect asymptotic growth

The resulting dominant form is approximately `O(n³ log log n)`

The instructor emphasized that exam questions may be written so constants such as `7` appear during the derivation but disappear from the final asymptotic answer

GATE questions were presented as useful preparation for examinations associated with ISRO, DRDO, BARC, JNU, and BITS

---

## Doubling Loops and the Difference Between Log n and Log Log n

A loop that doubles `i` from `1` until it reaches `n` follows `1, 2, 4, ..., 2^k`

Solving `2^k = n` gives `k = log n`

In a second nested loop, a variable doubles until reaching a value `p`

Solving `2^k = p` gives `k = log₂ p`

When `p` itself is logarithmic in `n`, the inner loop becomes `log₂(log n)`

The combined count is:

`log n + log log n`

Since `log log n` grows more slowly, the overall asymptotic complexity is dominated by `O(log n)`

---

## Dependent Increments Reduce to a Triangular Sum

A more complex loop updates `i` using the current value of `j`, while `j` increases by `1`

The values accumulate as:

`1 + 2`

`1 + 2 + 3`

`1 + 2 + 3 + 4`

continuing until the cumulative total reaches `n`

The accumulated value is the sum of the first `k` natural numbers:

`1 + 2 + ... + k = k(k + 1)/2`

Approximating the expression gives `k²`

Setting `k² ≈ n` yields `k ≈ √n`

The loop therefore has a square-root iteration bound rather than a linear or logarithmic one

The instructor stressed writing the changing values explicitly to identify the mathematical pattern instead of mechanically adding expressions without understanding what `i` stores

A related GATE question was revisited, with the instructor asking students to trace `i` and `j` values again and recognize the cumulative-sum structure

---

## Action items

**Students**: Revise the previous time-complexity questions, especially repeated-root, logarithmic, and nested-loop problems

**Students**: Retry the GATE question involving the dependent `i` and `j` updates

**Students**: Study pre-increment and post-increment operators before the next class

**Students**: Review logarithmic-series material, including the referenced `e^x` series approximation

[[analysis algo/term 1/5_leacture|5_leacture]]