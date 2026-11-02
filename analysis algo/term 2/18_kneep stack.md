# Fractional Knapsack Greedy Method and Heap Sort Complexity

October 19, 2026·9:26 AM·37m 56s

### Play Audio

0:00

39:04

SummaryTranscriptNotes

Edit

The class explains fractional knapsack through profit-to-weight ratios and a worked example, then reviews heapify, heap sort, and their time and space properties.

## Fractional Knapsack: Greedy Choice by Profit per Weight

Fractional knapsack allows taking part of an item, unlike zero-one knapsack, which is handled using dynamic programming.

For each item, calculate `profit / weight`; sorting these ratios in descending order prioritizes the greatest profit per unit of capacity.

In the first example, the bag capacity is 25, and the items include weights 8, 5, 12, and 10 with profits 150, 100, 180, and 140.

Ratios are approximately 18.75, 20, 15, and 14, so the order is item 2, item 1, item 3, then item 4.

Taking the first three items uses all 25 units of capacity and produces total profit 450; the corresponding decision vector records the full items taken.

The instructor emphasizes that choosing items arbitrarily can produce a lower profit; the ratio-based greedy order makes the selection.

## Fractional Item and Worked Calculation

A second example uses capacity 34 and five items. The listed profit-to-weight ratios are 8, approximately 4.5, 8.3, 17.5, and 13.3.

Descending-ratio priority is therefore the item with ratio 17.5, then 13.3, then 8.3, followed by 8 and approximately 4.5.

After taking the first four selected items fully, 5 units of capacity remain, while the next item weighs 11.

Take a `5/11` fraction of that item to fill the bag.

Its profit contribution is the same `5/11` fraction of its full profit; the worked total is 312.5.

The decision vector expresses full selections as 1 and the partial selection as `5/11`, in the original item indexing.

Computing all ratios takes `O(n)`, sorting takes `O(n log n)`, and processing items takes `O(n)`. Overall fractional-knapsack time complexity is `O(n log n)`.

---

## Heapify and Heap Sort

Heapify builds a max heap by comparing nodes with their parent and children, moving larger values upward as needed.

Repeatedly deleting the root of a max heap outputs values in descending order; a min heap produces ascending order.

Heap sort is in-place, meaning it does not require an extra array.

Building a heap from an array takes `O(n)`. Each deletion takes `O(log n)`, and deleting all `n` elements gives heap sort a total time complexity of `O(n log n)`.

The instructor motivates the `O(n)` heap-build cost by considering the number of nodes at each tree level: many leaf nodes require little or no adjustment, while fewer upper-level nodes may move farther.

Heap memory and stack memory are briefly referenced, with the instructor indicating that their relationship to tree storage will be covered later.