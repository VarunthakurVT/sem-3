# Merge Sort Merging Step with Two-Pointer Array Copying

September 16, 2026·3:50 PM·25m 22s

### Play Audio

0:00

26:18

SummaryTranscriptNotes

Edit

## Overview

Data-structures programming lesson focused on implementing the merging step inside Merge Sort

Teacher and student; identities are not clearly identified

Critical outcomes:

Merge two sorted arrays using pointer-based comparisons

Copy remaining elements after one array is exhausted

Merging time complexity is (O(N))

## Understanding the Merge Sort Example

Example arrays discussed: `10, 20, 30, 40` and `11, 21, 31, 41`

**Merge Sort versus Merge Algorithm**:

Merge Sort is the overall sorting algorithm

The merging call inside Merge Sort is a separate function whose code must be written

The teacher connected the exercise to code written in the previous class, particularly the merging process using pointers and the `mid` position

The student was asked to write the code for this merging function

## Pointer-Based Comparison During Merging

Two sorted portions of an array are compared element by element

The first pointer refers to the left portion, beginning at index `i`

The second pointer refers to the right portion, beginning around `mid + 1`, referred to during the explanation as `k`

A third index, `m`, tracks the position where the smaller value is stored in the temporary array `b`

**Comparison logic**:

If `a[i] <= a[k]`, store `a[i]` in `b[m]`

Increment both `i` and `m`

Otherwise, store `a[k]` in `b[m]`

Increment both `k` and `m`

The teacher emphasized that `mid + 1` can be assigned to a pointer variable so that `mid` does not need to be repeatedly written

## Copying Remaining Elements After Comparison

Comparing stops when either the left or right sorted portion is exhausted

One portion may still contain unprocessed values after the main comparison loop ends

The remaining values must be copied directly into the temporary array `b`

**Remaining-left-portion case**:

If pointer `i` has not reached the end of the left portion, copy the remaining `a[i]` values into `b[m]`

Increment `i` and `m` after each copy

**Remaining-right-portion case**:

If pointer `k` has not reached the end of the right portion, copy the remaining `a[k]` values into `b[m]`

Increment `k` and `m` after each copy

This leftover-copying logic was identified as the missing part of the student's implementation

## Complexity and Class Discussion

The merging process examines and copies each element a limited number of times

Merging time complexity is (O(N)), where (N) is the array size

A brief question was raised about an exam date, but no definite date was provided

The final portion included unrelated personal and conversational remarks; no additional technical decision was established
