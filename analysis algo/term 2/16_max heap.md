# Max-Heaps: Array Storage, Comparisons, and Insertion Heapify

October 5, 2026·9:31 AM·32m 20s

### Play Audio

0:00

33:05

SummaryTranscriptNotes

Edit

A data-structures class worked through binary-tree basics and max-heap behavior, deriving comparison costs and demonstrating array-based insertion and heapify.

## Binary-tree basics and heap structure

**Tree terminology:** Strict binary trees and complete binary trees were reviewed, with emphasis on knowing their definitions and being able to write code that determines a tree’s level.

Complete binary trees are stored in arrays; correct array layout is necessary to identify a node’s parent using integer division by two.

In a min-heap, the root contains the minimum value; in a max-heap, the root contains the maximum. No left-versus-right ordering rule was specified for the heap’s children.

The instructor highlighted tree fundamentals in _Data Structure using C and C Plus_ and connected heap construction to later heap sort.

## Max-heap comparisons versus an unsorted array

The maximum in a max-heap is the root, so finding it takes **O(1)** time.

Finding successive largest values requires comparisons among the relevant children of previously selected nodes. The examples illustrated one comparison for the second maximum and two for the third.

For the **nth maximum**, the instructor derived a cumulative comparison count of **n(n + 1) / 2**, giving **O(n²)** overall.

In a normal, unsorted array, finding either the maximum or second maximum requires scanning the array, taking **O(n)** time.

The contrast is useful when choosing a representation: a heap exposes the maximum at the root and supports parent-child checks, while an unsorted array requires searching its elements.

## Max-heap insertion and heapify

A new element is first placed at the end of the array, preserving the complete binary tree’s shape.

The inserted value is compared with its parent and swapped upward while needed to restore the max-heap property. The worked example inserted **80**, moving it above **10**, then **20**, and then **50**; the resulting array order was described as **80, 50, 20, 10, 4**.

The upward adjustment is heapify. Insertion can move an element up at most the tree’s height, which is **O(log n)** for a complete binary tree; the comparisons and swaps remain **O(log n)** overall.

The instructor framed insertion and deletion as prerequisites for heap sort. Insertion was covered in this class; deletion was deferred to the next class.

Students were asked to build the max-heap alongside the explanation. The instructor noted that heap construction can involve processing elements through the adjustment procedure, with the detailed algorithm to follow.