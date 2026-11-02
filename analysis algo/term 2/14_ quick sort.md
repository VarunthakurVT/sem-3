# Quicksort Partitioning, Pivot Placement, and Recursive Calls

September 28, 2026·9:22 AM·38m 23s

### Play Audio

0:00

39:38

SummaryTranscriptNotes

Edit

## Overview: DSA Lecture on Quicksort

Classroom lesson introducing quicksort’s properties, partition procedure, and recursive sorting in C++-oriented algorithm practice

One instructor and multiple students; student names and roles are not consistently identifiable

Critical outcomes:

Quicksort uses in-place partitioning and recursively sorts the elements on either side of the pivot

Partitioning returns the pivot’s final index; elements on its left are smaller and those on its right are larger

The instructor contrasted quicksort’s instability with mergesort’s stability and reviewed how to trace successive partition passes

## Quicksort Properties and When to Use It

Quicksort was described as an in-place sorting algorithm that does not require an additional array for partitioning.

The instructor contrasted it with mergesort: mergesort uses extra space and was presented as stable, while quicksort was presented as non-stable.

Stability was explained as preserving the original relative order of equal-valued items. The instructor said quicksort may swap equal values, while mergesort preserves their order.

Quicksort was characterized as a partial divide-and-conquer algorithm: partitioning divides the array, but there is no merge/combine step afterward.

The choice of algorithm depends on the question’s requirements, such as whether in-place operation or stability matters.

## Pivot Choice and Partitioning by Scanning the Array

The pivot is the chosen reference element used to divide the array; the example began with `50` as the first-element pivot.

The instructor noted that a pivot may be the first or last element in a standard quicksort implementation, or selected randomly in randomized quicksort.

In the first example, the array began `50, 80, 70, 60, 35, 89, 25`. The scan moved through the array, looking for values smaller than pivot `50`.

Values greater than the pivot were left in place. When a smaller value appeared, the boundary index `I` advanced, and that value was swapped into the lower-than-pivot region.

The final swap placed the pivot at its partition position. The returned index identifies that position; values to its left are smaller, and values to its right are larger.

## Partition Pseudocode and Pointer Roles

The instructor named the array `A`, the start and end positions `P` and `Q`, the saved pivot value `X = A[P]`, boundary index `I`, and scan index `J`.

`I` starts at `P`; `J` scans from `P + 1` through `Q`.

For each `A[J] < X`, the procedure increments `I` and swaps `A[I]` with `A[J]`.

After the scan finishes, the pivot at `P` is swapped with `A[I]`, and the partition procedure returns `I`.

The instructor emphasized that `I` is an index, not an array value, and that the pivot must be saved so it remains available for the final swap.

## Worked Examples and Recursive Quick Sort

A second walkthrough used pivot `45` with the array beginning `45, 80, 39`. Values smaller than `45` were moved toward the left by advancing `I` and swapping; larger values remained on the right.

After the final pivot swap, the pivot’s returned index marked the boundary between the two partitions.

Quicksort then calls itself on the left range, `A[P..M-1]`, and the right range, `A[M+1..Q]`, where `M` is the index returned by partitioning.

The base case is reached when `P == Q`, meaning only one element remains.

A further example with pivot `23` was used to explain that each recursive call works on a smaller subarray, and that a question asking for a particular partition pass is different from asking for a particular recursive quicksort call.

## Stability, Coding Practice, and Interview Context

The instructor used a subarray containing `80, 80, 83` to illustrate how the described partition procedure can perform swaps involving equal values, and connected this to quicksort being non-stable.

The class briefly discussed implementing swaps with a temporary variable or C++’s built-in `swap`.

Coding interview problems may require sorting as part of a larger conditional task rather than asking students simply to implement quicksort; the instructor referenced _Cracking the Coding Interview_ and LeetCode-style practice.

The instructor advised learning the algorithmic logic first and practicing in the language being used. C and C++ examples were discussed, including the challenge of returning multiple values in C; Python restrictions in some company settings were also mentioned.

The instructor previewed a later graph topic, naming Kruskal’s algorithm, but did not teach it during this portion.