- quick sort 
- heap -> max 
		-  > min 
		- > heapify
- knanp stack 
- recurrence relation 

![[WhatsApp Image 2026-10-23 at 12.30.49 PM.jpeg]]



ai notes ==-
# Term 2 Final Notes: Quick Sort, Heaps, Knapsack, Recurrences

Built from your class notes (lectures 15 to 18) and the Term 2 syllabus, 25 Oct 2026. Sections marked **[Class]** come from your lecture notes. Sections marked **[Added]** are standard textbook material I filled in because your notes did not cover them.

## 0. Read this first

**Syllabus map**

1. Quick sort: [Added], no lecture notes were uploaded for it.
2. Heap (max, min, heapify) plus heap sort: [Class], lectures 15 to 18.
3. Knapsack (fractional): [Class], lecture 18.
4. Recurrence relations: [Added], no lecture notes were uploaded for it.

**Things to double-check before the exam**

- Your file 15 is named 'quick sort' but its content is binary-tree array representation. Quick sort is not in your notes, so Section 3 is standard material. Compare it with your textbook or teacher's slides.
- Knapsack example 1: your notes say total profit 450, but the items taken (profits 100, 150, 180) add up to 430. I use 430 below. Check your notebook.
- The syllabus file links a WhatsApp image that I could not see. If it lists extra topics, send it and I will add them.
- Heap deletion was pushed to a later class in lecture 16 and only appears indirectly in lecture 18. Section 2.5 covers it fully.
- The max-heap construction was named as the lab/practical question. Be able to write the code in Section 2.6 from memory.

## 1. Binary tree array representation [Class]

This is the base for everything about heaps.

**Definitions**

- Strict (full) binary tree: every node has 0 or 2 children.
- Complete binary tree: every level is full except possibly the last, which fills from left to right.
- Level k holds at most 2^k nodes. A tree with h levels holds at most 2^h - 1 nodes (4 levels gives 1+2+4+8 = 15, the class example).
- A complete tree with n nodes has about n/2 leaves and height floor(log2 n).

**Index formulas**

|   |   |   |
|---|---|---|
|Relation|1-based (used in class)|0-based|
|Parent of i|floor(i/2)|floor((i-1)/2)|
|Left child|2i|2i+1|
|Right child|2i+1|2i+2|

- Floor matters for odd indices: the parent of 7 is 3, not 3.5.
- Starting at 0 changes the formulas and causes mistakes, so the class uses 1-based indexing and leaves a[0] unused.
- An array stores positions, so empty slots stay in the array for missing nodes. Left versus right placement matters even when two trees have the same node count.
- Arrays suit complete and almost-complete trees because no space is wasted. Other trees leave many empty slots, so a linked representation is usually preferred.

## 2. Heaps [Class]

### 2.1 Definition

- A heap is a complete binary tree stored in an array that obeys the heap property.
- Max-heap: every parent is greater than or equal to its children, so the root is the maximum.
- Min-heap: every parent is less than or equal to its children, so the root is the minimum.
- There is no ordering rule between left and right children.
- Because it is complete, the array has no gaps and the parent is found with integer division by two.

### 2.2 Max-heap versus an unsorted array

|   |   |   |
|---|---|---|
|Operation|Max-heap|Unsorted array|
|Find maximum|O(1), it is the root|O(n), scan everything|
|Find second maximum|Compare the root's two children|O(n)|
|Insert|O(log n)|O(1)|
|Delete maximum|O(log n)|O(n)|
|Build from n elements|O(n)|not needed|

Lecture 16 counted comparisons for the successive maxima without deleting: 1 comparison for the 2nd maximum, 2 for the 3rd, and so on. The cumulative count for the nth maximum is 1 + 2 + ... + n = n(n+1)/2, which is O(n^2). Doing proper deletions instead costs O(log n) each.

### 2.3 Insertion (upward heapify, also called sift-up)

1. Place the new element at the end of the array. This keeps the tree complete.
2. Compare it with its parent at index i/2. If it is larger (max-heap), swap.
3. Repeat until the parent is larger or you reach the root.

Time is O(log n) because the element climbs at most the height of the tree.

**Worked example.** Insert 80 into the max-heap [50, 30, 20, 10, 4] (1-based).

- Place 80 at index 6: [50, 30, 20, 10, 4, 80]. Parent of 6 is index 3 (value 20). 80 is bigger, so swap: [50, 30, 80, 10, 4, 20].
- Parent of 3 is index 1 (value 50). 80 is bigger, so swap: [80, 30, 50, 10, 4, 20].
- 80 is now the root. Done, 2 swaps.

### 2.4 Heapify (downward adjustment, also called sift-down)

Heapify fixes one node whose subtrees are already heaps.

1. Compare the node with its children.
2. If a child is larger (max-heap), swap the node with the larger child.
3. Continue from the child's position until the node is larger than both children or becomes a leaf.

Time is O(log n) per call. Remember the two directions: insertion moves up, heapify after deletion or during construction moves down.

### 2.5 Deletion of the root (delete max)

1. Save the root, it is the maximum.
2. Move the last element of the array to the root and reduce the size by 1.
3. Heapify down from the root.

**Worked example.** Delete the root of [80, 30, 50, 10, 4, 20].

- Move 20 to the root and shrink to 5 elements: [20, 30, 50, 10, 4].
- Children of the root are 30 and 50. The larger is 50, so swap: [50, 30, 20, 10, 4].
- Index 3 has no children inside the array. Done.

Time is O(log n).

### 2.6 Building a max-heap (the lab question)

There are two methods. Know both and which is faster.

- **Method A: insert one by one.** Run sift-up for each element. Cost is O(n log n).
- **Method B: bottom-up heapify (Floyd).** Start from the last non-leaf node, index floor(n/2), and heapify downward for i = n/2 down to 1. Cost is O(n). Leaves (about n/2 of the nodes) are already heaps and need no work.

**Practice trace for Method B** with the values from your lab class: [77, 79, 88, 86, 120, 130], n = 6. Your board example may use a different input order, so its final tree can differ. The method is what matters.

- i = 3: value 88, only child is index 6 (130). Swap: [77, 79, 130, 86, 120, 88].
- i = 2: value 79, children 86 and 120. Larger is 120, swap: [77, 120, 130, 86, 79, 88].
- i = 1: value 77, children 120 and 130. Larger is 130, swap: [130, 120, 77, 86, 79, 88]. 77 is now at index 3 with child 88 at index 6, swap again: [130, 120, 88, 86, 79, 77].
- Result: 130 at the root, then 120 and 88, then 86, 79, 77. Check every parent is at least its children.

**Code (1-based array a[1..n], C++)**

```cpp
void maxHeapify(int a[], int n, int i) {      // sift-down
    int largest = i;
    int l = 2 * i, r = 2 * i + 1;
    if (l <= n && a[l] > a[largest]) largest = l;
    if (r <= n && a[r] > a[largest]) largest = r;
    if (largest != i) {
        swap(a[i], a[largest]);
        maxHeapify(a, n, largest);
    }
}

void buildMaxHeap(int a[], int n) {
    for (int i = n / 2; i >= 1; i--)
        maxHeapify(a, n, i);
}

void insertHeap(int a[], int &n, int x) {     // sift-up
    a[++n] = x;
    int i = n;
    while (i > 1 && a[i / 2] < a[i]) {
        swap(a[i / 2], a[i]);
        i /= 2;
    }
}

void heapSort(int a[], int n) {
    buildMaxHeap(a, n);
    for (int i = n; i >= 2; i--) {
        swap(a[1], a[i]);                     // max goes to the end
        maxHeapify(a, i - 1, 1);
    }
}
```

For a **min-heap**, flip both comparisons (use < instead of > in heapify and > instead of < in insert).

### 2.7 Why build-heap is O(n) and not O(n log n)

Your lectures 17 and 18 both touch this, and lecture 17 left it unfinished. Here is the complete argument.

- Srges to a constant, so the total is O(n).

**Concrete check, 15 nodes (4 levels, class example 1+2+4+8):**

|   |   |   |   |
|---|---|---|---|
|Level|Nodes|Max swaps each|Total|
|Leaves|8|0|0|
|Next up|4|1|4|
|Next up|2|2|4|
|Root|1|3|3|

Total at most 11 swaps, which is less than n = 15. Most nodes sit near the bottom and move very little, so the work is linear. Insertion-based building is different, because there most nodes are deep and climb far.

### 2.8 Heap sort

1. Build a max-heap, O(n).
2. Swap the root with the last element and shrink the heap by one.
3. Heapify the root, O(log n).
4. Repeat n - 1 times.

- Conceptually, repeated deletion of the root of a max-heap yields values in descending order, and a min-heap yields ascending order. The in-place version above puts the maxima at the end of the same array, so the array ends up ascending.
- Time: O(n) + n x O(log n) = **O(n log n)** in best, average and worst case.
- Space: **O(1)**, it is in-place (no extra array).
- Not stable.
- Insertion and deletion are the building blocks of heap sort.
- Uses of heaps: priority queues, heap sort, finding the k largest or smallest elements.

## 3. Quick sort [Added]

### 3.1 Idea

Quick sort is divide and conquer.

1. **Divide:** choose a pivot and partition the array so that everything left of the pivot is at most the pivot and everything right of it is greater.
2. **Conquer:** recursively sort the left part and the right part.
3. **Combine:** nothing to do, because the sorting happens in place during partitioning.

### 3.2 Code (pivot = first element)

```cpp
int partition(int a[], int low, int high) {
    int pivot = a[low];
    int i = low, j = high;
    while (i < j) {
        while (a[i] <= pivot && i < high) i++;   // find element bigger than pivot
        while (a[j] > pivot) j--;                // find element not bigger than pivot
        if (i < j) swap(a[i], a[j]);
    }
    swap(a[low], a[j]);                          // put pivot in final place
    return j;
}

void quickSort(int a[], int low, int high) {
    if (low < high) {
        int p = partition(a, low, high);
        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}
```

### 3.3 Trace of one partition

Array [40, 20, 70, 10, 90, 30, 60], pivot = 40.

- i stops at 70 (index 2), j stops at 30 (index 5). Swap: [40, 20, 30, 10, 90, 70, 60].
- i stops at 90 (index 4), j stops at 10 (index 3). i has crossed j, so stop.
- Swap pivot with a[j]: [10, 20, 30, 40, 90, 70, 60]. The pivot 40 is now at its final index 3.
- Recurse on [10, 20, 30] and [90, 70, 60].

### 3.4 Complexity

|   |   |   |   |
|---|---|---|---|
|Case|Recurrence|Result|When|
|Best|T(n) = 2T(n/2) + n|O(n log n)|Pivot splits the array evenly|
|Average|about T(n/4) + T(3n/4) + n|O(n log n)|Random-looking input|
|Worst|T(n) = T(n-1) + n|O(n^2)|Already sorted or reverse sorted input with first or last element as pivot|

- Extra space: O(log n) recursion stack on average, O(n) in the worst case.
- In-place, not stable.
- Fixes for the worst case: random pivot, median-of-three pivot.
- Partition itself costs O(n), one pass.

## 4. Fractional knapsack [Class]

### 4.1 Idea

- You have items with weight w and profit p, and a bag of capacity M. You may take a **fraction** of an item. Maximise total profit.
- Greedy rule: compute the ratio p / w for every item, sort in descending order, and take items in that order until the bag is full. Take a fraction of the last item if it does not fit whole.
- **0/1 knapsack** (items taken whole or not at all) is solved with dynamic programming, not greedy.
- The decision vector x records how much of each item was taken, in original item order: 1 for full, 0 for none, a fraction for the partial item.

### 4.2 Algorithm

1. For each item compute p / w. O(n).
2. Sort by ratio, descending. O(n log n).
3. For each item in that order: if it fits whole, take it and reduce the capacity. Otherwise take (remaining capacity / weight) of it and stop. O(n).

**Time: O(n log n)**, dominated by the sort.

```cpp
struct Item { int id; double w, p, r; };

double fractionalKnapsack(vector<Item>& it, double W, vector<double>& x) {
    for (auto& i : it) i.r = i.p / i.w;
    sort(it.begin(), it.end(), [](Item a, Item b) { return a.r > b.r; });
    double profit = 0;
    for (auto& i : it) {
        if (W >= i.w) { x[i.id] = 1; profit += i.p; W -= i.w; }
        else { x[i.id] = W / i.w; profit += i.p * (W / i.w); break; }
    }
    return profit;
}
```

### 4.3 Example 1 (capacity 25)

|   |   |   |   |
|---|---|---|---|
|Item|Weight|Profit|p / w|
|1|8|150|18.75|
|2|5|100|20|
|3|12|180|15|
|4|10|140|14|

- Order by ratio: item 2, item 1, item 3, item 4.
- Take item 2 (weight 5, left 20), item 1 (weight 8, left 12), item 3 (weight 12, left 0). The bag is full.
- Profit = 100 + 150 + 180 = **430**. (Your notes say 450, which does not match these numbers.)
- Decision vector in original order: x = (1, 1, 1, 0).
- Taking items arbitrarily can give less profit. The ratio order is what makes the answer optimal.

### 4.4 Example 2 (capacity 34, five items)

The notes give the ratios in item order: 8, 4.5, 8.3, 17.5, 13.3.

- Descending priority: item 4 (17.5), item 5 (13.3), item 3 (8.3), item 1 (8), item 2 (4.5).
- The first four selected items are taken whole and use 29 units. 5 units remain.
- The next item (item 2) weighs 11, so take **5/11** of it. Its profit contribution is 5/11 of its full profit.
- Total profit from your worked answer: 312.5.
- Decision vector in original order: x = (1, 5/11, 1, 1, 1).
- Your notes do not list the individual weights and profits, so recompute the total from your notebook table before the exam.

### 4.5 Why greedy fails for 0/1 knapsack

Capacity 50, items (weight, profit): (10, 60), (20, 100), (30, 120).

- Ratios 6, 5, 4. Greedy by ratio takes the items of weight 10 and 20, profit 160. The third item (weight 30) no longer fits whole.
- The best 0/1 choice is the items of weight 20 and 30, profit 220.
- With fractions allowed, greedy would take 2/3 of the third item and reach 240, which is optimal for the fractional version.

### 4.6 Quick comparison

|   |   |   |
|---|---|---|
||Fractional|0/1|
|Items|Can be split|Whole or nothing|
|Method|Greedy by p / w|Dynamic programming|
|Time|O(n log n)|O(nM)|
|Optimal?|Yes|Greedy is not optimal|

## 5. Recurrence relations [Added]

### 5.1 What they are

A recurrence expresses the running time of a recursive algorithm in terms of smaller inputs. Example: merge sort splits in two halves and merges in linear time, so T(n) = 2T(n/2) + n.

### 5.2 Recurrences to memorise

|   |   |   |
|---|---|---|
|Algorithm|Recurrence|Solution|
|Binary search|T(n) = T(n/2) + 1|O(log n)|
|Merge sort|T(n) = 2T(n/2) + n|O(n log n)|
|Quick sort best case|T(n) = 2T(n/2) + n|O(n log n)|
|Quick sort worst case|T(n) = T(n-1) + n|O(n^2)|
|Factorial|T(n) = T(n-1) + 1|O(n)|
|Naive Fibonacci|T(n) = T(n-1) + T(n-2) + 1|O(2^n)|
|Tower of Hanoi|T(n) = 2T(n-1) + 1|O(2^n)|
|Heapify|T(n) <= T(2n/3) + 1|O(log n)|

### 5.3 Method 1: Substitution (back-substitution)

Expand repeatedly, spot the pattern, then use the base case.

**T(n) = T(n-1) + n, T(1) = 1**

- T(n) = T(n-2) + (n-1) + n = T(n-3) + (n-2) + (n-1) + n = ...
- After reaching the base case: T(n) = 1 + 2 + ... + n = n(n+1)/2, which is **O(n^2)**.

**T(n) = 2T(n/2) + n, T(1) = 1**

- T(n) = 2[2T(n/4) + n/2] + n = 4T(n/4) + 2n.
- After k steps: T(n) = 2^k T(n / 2^k) + k n.
- The base case is reached when 2^k = n, so k = log2 n. Then T(n) = n x T(1) + n log n = **O(n log n)**.

### 5.4 Method 2: Recursion tree

Draw the tree, find the cost at each level, and add all levels.

- For T(n) = 2T(n/2) + n, each level costs n in total and there are log n levels, so the total is n log n.
- Number of levels is how many times you can halve n before reaching 1.

### 5.5 Method 3: Master theorem

Use it for T(n) = a T(n/b) + f(n), with a >= 1 and b > 1. Compute n^(log_b a) and compare it with f(n).

|   |   |   |
|---|---|---|
|Case|Condition|Result|
|1|f(n) grows slower than n^(log_b a) (polynomially)|T(n) = Theta(n^(log_b a))|
|2|f(n) = Theta(n^(log_b a))|T(n) = Theta(n^(log_b a) x log n)|
|3|f(n) grows faster than n^(log_b a) (polynomially), and a f(n/b) <= c f(n) for some c < 1|T(n) = Theta(f(n))|

**Worked examples**

- T(n) = 2T(n/2) + n: a = 2, b = 2, n^(log_2 2) = n. f(n) = n matches, so case 2: **Theta(n log n)**.
- T(n) = 4T(n/2) + n: n^(log_2 4) = n^2. f(n) = n is smaller, so case 1: **Theta(n^2)**.
- T(n) = T(n/2) + n: n^(log_2 1) = n^0 = 1. f(n) = n is larger, so case 3: **Theta(n)**.
- T(n) = 2T(n/2) + n^2: n^1 vs n^2, case 3 (check 2 x (n/2)^2 = n^2 / 2, so c = 1/2 works): **Theta(n^2)**.
- T(n) = T(n/2) + 1: n^0 = 1 matches f(n) = 1, case 2: **Theta(log n)**.
- Heapify, T(n) <= T(2n/3) + 1: b = 3/2, a = 1, f(n) = 1 matches n^0, case 2: **O(log n)**. This links your heap section to recurrences.

**When the master theorem does not apply:** T(n) = T(n-1) + n (not of the form n/b) and T(n) = 2T(n/2) + n / log n (f(n) is not polynomially different). Use substitution for these.

## 6. Complexity cheat sheet

|   |   |   |   |   |   |
|---|---|---|---|---|---|
|Item|Best|Average|Worst|Extra space|Stable?|
|Quick sort|O(n log n)|O(n log n)|O(n^2)|O(log n) avg|No|
|Heap sort|O(n log n)|O(n log n)|O(n log n)|O(1)|No|
|Merge sort (for comparison)|O(n log n)|O(n log n)|O(n log n)|O(n)|Yes|
|Build max-heap (bottom-up)|O(n)|O(n)|O(n)|O(1)|n/a|
|Heap insert|O(1)|O(log n)|O(log n)|O(1)|n/a|
|Heap delete max|O(log n)|O(log n)|O(log n)|O(1)|n/a|
|Fractional knapsack|O(n log n)|O(n log n)|O(n log n)|O(n)|n/a|

**Formulas to know cold**

- 1-based: parent floor(i/2), left 2i, right 2i+1.
- Nodes in a complete tree of h levels: 2^h - 1. Leaves of an n-node complete tree: about n/2. Height: floor(log2 n).
- Last non-leaf node: floor(n/2).
- Sum of 1 to n: n(n+1)/2.

## 7. Practice questions with short answers

1. **Parent and children of index 11 (1-based)?** Parent 5, children 22 and 23.
2. **Insert 80 into the max-heap [50, 30, 20, 10, 4].** Result [80, 30, 50, 10, 4, 20].
3. **Delete the root of [80, 30, 50, 10, 4, 20].** Result [50, 30, 20, 10, 4].
4. **Build a max-heap from [77, 79, 88, 86, 120, 130] by the bottom-up method.** Result [130, 120, 88, 86, 79, 77].
5. **Why is bottom-up heap construction O(n), not O(n log n)?** Half the nodes are leaves and need no work. Only a few nodes near the root can move far. The sum of h x n / 2^(h+1) converges to O(n).
6. **Time and space of heap sort?** O(n log n) time in every case, O(1) extra space, not stable.
7. **When is quick sort O(n^2)?** When the pivot is always the smallest or largest element, for example sorted input with the first element as pivot.
8. **Fractional knapsack, capacity 25, weights 8, 5, 12, 10, profits 150, 100, 180, 140.** Order 2, 1, 3. Profit 430. Vector (1, 1, 1, 0).
9. **Why does greedy fail for 0/1 knapsack?** Taking the best-ratio item whole can leave unusable space. See the 50-capacity example in Section 4.5.
10. **Solve T(n) = 3T(n/2) + n^2.** log_2 3 is about 1.58, less than 2, so case 3: Theta(n^2).
11. **Solve T(n) = T(n-1) + 1, T(0) = 0 by substitution.** T(n) = n, which is O(n).

## 8. Last-night checklist

- Write max-heapify, build-heap and heap sort from memory without looking.
- Do one full heap build and one insertion and one deletion by hand with a fresh array.
- Redo knapsack example 1 and fix the 430 versus 450 in your notebook.
- Write the partition function and trace it on a 7-element array.
- Memorise the table of recurrences in 5.2 and practise the three master theorem cases.
- For every algorithm, be ready to state time (best, average, worst), space, in-place, and stable.
- For theory questions, state the definition first, then the steps, then the complexity. That order tends to collect the most marks.