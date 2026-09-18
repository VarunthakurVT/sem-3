# Divide-and-Conquer Recursion, Merge Sort Execution, Merging Pointers, and O(n log n) Analysis

September 14, 2026·9:26 AM·35m 40s

### Play Audio

0:00

36:38

SummaryTranscriptNotes

Edit

## Overview

Algorithms lecture focused on divide and conquer, recursion, merge sort, recursive call order, and recurrence analysis

One teacher and one student; names not identified

Critical outcomes:

Divide and conquer was defined through divide, recursively solve, and combine steps

Merge sort was traced from single-element subproblems through merging

Merge sort’s recurrence was identified as `T(n) = 2T(n/2) + O(n)` with complexity `O(n log n)`

## Divide and Conquer as a Recursive Design Technique

**Termination condition**: Recursion stops when the problem becomes sufficiently small; for factorial, `factorial(1) = 1` was used as the example

**Divide procedure**: The problem is split around the middle using `p = floor((i + j) / 2)`

**Recursive solution**: The same divide-and-conquer procedure is applied to the left range `i` to `p` and the right range `p` to `j`

**Combine procedure**: Solutions of the subproblems are combined to obtain the solution to the original problem

Divide and conquer was described as an algorithm-design technique rather than a single algorithm

Applications listed:

Finding minimum and maximum

Finding the power of an element

Binary search

Merge sort

Quick sort

Selection procedure

Strassen’s matrix multiplication

Counting inversions

Binary search uses division by the middle but generally does not require a separate combine step

Merge sort uses both recursive division and a final combine step

Quick sort was described as a complete application of the divide-and-conquer approach

---

## Merge Sort’s Input, Base Case, and Division Tree

Merge sort receives an array and must produce a sorted array

**Smallest problem**: Sorting is complete when only one element remains, because a single element is already sorted

**Middle calculation**: For a subarray from `i` to `j`, the middle is `floor((i + j) / 2)`

A seven-element example was indexed from `1` to `7` for easier visualization, while noting that actual programming code can use different indexing

The first split was:

`1` to `7` → `1` to `4` and `5` to `7`

`1` to `4` → `1` to `2` and `3` to `4`

`5` to `7` → `5` to `6` and `7` to `7`

Further division continued until every range contained one element:

`1` to `2` → `1` to `1` and `2` to `2`

`3` to `4` → `3` to `3` and `4` to `4`

`5` to `6` → `5` to `5` and `6` to `6`

`7` to `7` remained a base-case subproblem

---

## Recursive Calling Sequence and Execution Order

Recursive calls were distinguished from execution order:

Calling sequence records when functions are invoked

Execution sequence records when their work actually completes

The recursive call tree was labeled through `C1` to `C13`, representing thirteen recursive calls in the illustrated structure

Recursive calls proceed left first, followed by the right call after the left call returns

The illustrated execution order was:

`C4`, `C5`, `C3`

`C7`, `C8`, `C6`

`C2`

`C11`, `C12`, `C10`

`C13`, `C9`

`C1`

The lecture connected this left-to-right behavior with how code is written and processed

Tree traversal terminology was reviewed:

Root first: preorder

Root in the middle: inorder

Root last: postorder

The teacher stated that compilers calculate in postorder, emphasizing that child operations are completed before the parent operation

---

## Merge Sort’s Combine and Merging Procedure

A sample array was used to demonstrate recursive splitting and recombination, including values such as `50, 80, 20, 16, 13, 55, 35`

Single elements were first treated as already sorted

Small sorted groups were merged by repeatedly comparing the smallest currently available elements from the left and right subarrays

Example comparisons included:

`50` and `80` → `50, 80`

`20` and `16` → `16, 20`

`13` and `55` → `13, 55`

`55` and `35` → `35, 55`

During merging:

The smaller selected element was copied into the output array

The pointer belonging to the selected subarray was advanced

When one subarray ended, all remaining elements from the other subarray were copied as-is

The merge operation was identified as the algorithm’s combine step

Merge sort was described as repeatedly applying the same merge procedure according to the recursive execution sequence

The final result is returned through the array, represented in the pseudocode discussion as `return A`

---

## Merge Implementation with Two Pointers

The merge procedure uses an extra array of the same size as the input array

Two pointers track the current elements in the left and right sorted portions

The left and right elements are compared, and the smaller value is copied into the extra array

The pointer for the copied element is incremented using `++`

A worked example used values including `10, 20, 20, 40` on one side and `11, 21, 21, 41` on the other

Once the left pointer reached the midpoint, the remaining right-side elements were copied directly

Remaining elements are already sorted within their own subarray, so no additional comparisons are necessary

If the two subarrays contain `X` and `Y` elements, the merging work is `O(X + Y)`, which becomes `O(n)` for the full merge

The merge procedure may be asked in coding problems or interviews, including questions about the number of comparisons and pointer movement

---

## Merge Sort Code Structure and Complexity

Merge sort pseudocode follows this structure:

If `i == j`, return `A[i]`

Otherwise calculate `mid = floor((i + j) / 2)`

Recursively call merge sort on `A[i..mid]`

Recursively call merge sort on `A[mid+1..j]`

Merge `A[i..mid]` with `A[mid+1..j]`

Return the resulting array `A`

The merge function must be implemented separately from the recursive merge-sort function

The teacher emphasized practicing the pointer-based merge implementation because it is frequently required in coding-platform problems

The recurrence was written as:

`T(n) = 2T(n/2) + O(n)`

Base condition: `T(1) = O(1)`

The recurrence can be solved using the Master Method or the recursion-tree method

In the recursion tree:

Each level contributes `O(n)` merging work

The subproblem size becomes `n / 2^k`

The number of levels is `k = log n`

Total complexity is `O(n log n)`

Merge sort was highlighted as one of the sorting algorithms with complexity below `n²`, alongside quick sort, which would be covered separately

---

## Action items

**Student**: Implement and practice the merge procedure, including two-pointer movement and copying remaining elements

**Student**: Review the merge-sort recurrence and be prepared to continue with time-complexity analysis in the next class
[[analysis algo/leacture/12_lecture|12_lecture]]