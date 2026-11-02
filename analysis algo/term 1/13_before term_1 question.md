# DSA & Algorithms — Complete Solved Question Bank

Every question found across Lectures 1–12 and Practical 4, with worked answers.

> **Three corrections to the notes are marked with ⚠️** — see Q21, Q41 and Q47.

---

## Lecture 3 — Time Complexity of Loops

### Q1. Repeated square root

```c
while (n > 2)
    n = sqrt(n);
```

**Answer: Θ(log log n)**

After k iterations the value is `n^(1/2^k)`. Stop when `n^(1/2^k) = 2`.

Take log₂ both sides: `(log₂ n)/2^k = 1` → `2^k = log₂ n` → `k = log₂(log₂ n)`.

---

### Q2. Simple bound

```c
for (i = 1; i <= n*n; i++)
```

**Answer: Θ(n²)** — the loop body runs exactly n² times.

---

### Q3. Decrement by a constant

```c
for (i = n; i >= 1; i = i - 2)
```

**Answer: Θ(n)**

It runs n/2 times. The ½ is a constant factor and is dropped. (The ₹100 with ₹2 spent per day analogy: 50 days, still linear in the starting amount.)

---

### Q4. Power-based update

```c
for (i = 5; i < pow(n,7); i = i*i*i)
```

**Answer: Θ(log log n)**

- After k steps: `i = 5^(3^k)`
- Stop when `5^(3^k) = n⁷`
- `3^k = log₅(n⁷) = 7·log₅ n`
- `k = log₃(7 log₅ n) = log₃ 7 + log₃(log₅ n)`
- `log₃ 7` is a constant → **Θ(log log n)**

---

### Q5. GATE nested loop (the combined one)

Three independent nested loops: the `n²` loop (Q2) × the decrement-by-2 loop (Q3) × the power loop (Q4).

**Answer: O(n³ log log n)**

```
n² × (n/2) × log₃(log₅ n⁷)  =  (n³/2) · (log₃7 + log₃log₅ n)  →  O(n³ log log n)
```

Independent nested loops **multiply**. Constants `½` and `log₃7` vanish asymptotically — the exam writes `7` in deliberately so it shows up mid-derivation and disappears at the end.

---

### Q6. Doubling loop inside a doubling loop

```c
for (i = 1; i <= n; i = i*2)      // outer
    for (j = 1; j <= p; j = j*2)  // inner, p is logarithmic in n
```

**Answer: O(log n)**

- Outer: `2^k = n` → `k = log n`
- Inner: `2^k = p` → `k = log₂ p`; since `p ~ log n`, inner = `log log n`
- Total `log n + log log n`; `log log n` is dominated → **O(log n)**

**Key distinction:** `log log n` ≪ `log n`. Adding them keeps only `log n`.

---

### Q7. Dependent increments (triangular sum)

```c
j = 1;
while (i <= n) {
    i = i + j;
    j++;
}
```

**Answer: Θ(√n)**

`i` takes values `1, 1+2, 1+2+3, …` After k steps `i = k(k+1)/2 ≈ k²/2`.

Set `k² ≈ n` → **k ≈ √n**.

**Method:** write the actual values of `i` and `j` out on paper. Don't mechanically add expressions — you must see what `i` is storing.

---

### Q8. Pre-increment vs post-increment (assigned reading)

||Expression|Value returned|Side effect|
|---|---|---|---|
|Pre|`++i`|new value (i+1)|i incremented first|
|Post|`i++`|old value (i)|i incremented after|

In `b[m++] = a[i++]`, the _old_ values of `m` and `i` are used as indices, then both advance. This matters directly in the merge code (Q56).

---

## Practical 4 — Coding Tasks

### Q9. Insert a node between X and Y

```c
newNode->next = X->next;   // points to Y
X->next = newNode;
```

**Time complexity: O(1)** if you already hold a pointer to X. **O(n)** if you must search for X first. Anything worse than O(n) here means the code has a redundant traversal and must be optimised — an O(n²) insertion is wrong.

---

### Q10. Doubly linked list

```c
struct Node {
    char data;
    struct Node *prev;
    struct Node *next;
};
```

- First node: `prev = NULL`
- Last node: `next = NULL`
- Every other node stores **both** directions (the 1000 / 2000 / 3000 address example)
- Nodes must be created with dynamic allocation (`malloc` / `new`) and linked by address

---

### Q11. Traversal

```c
p = head;
while (p != NULL) {
    print(p->data);
    p = p->next;
}
```

**O(n).** Always use a _temporary_ pointer — never move `head` itself, or you lose the list. Creating nodes without traversing them proves nothing; traversal is what verifies the data is actually reachable.

---

### Q12. Binary search

```c
int binarySearch(int a[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == key) return mid;
        else if (a[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
```

**O(log n)** — recurrence `T(n) = T(n/2) + O(1)`.

Requires a **sorted** array. The "left side has fewer elements so it's cheaper" idea is wrong — both halves are `n/2`, and asymptotically the split is symmetric. Watch for restarting the search from the root/beginning inside a loop; that turns `log n` into `n log n` or worse.

---

### Q13. MSYS2 setup

1. Download the `.exe` installer from the MSYS2 site
2. Run it, then run the integration/update command in the MSYS2 shell
3. Add the toolchain `bin` folder to the system PATH so `gcc` is found from any terminal
4. Verify with `gcc --version`

---

## Lecture 5 — Asymptotic Notation Proofs

**Definitions**

|Notation|Condition|Meaning|
|---|---|---|
|`f = O(g)`|`f(n) ≤ c·g(n)` for all `n ≥ n₀`, some `c > 0`|eventual upper bound|
|`f = Ω(g)`|`f(n) ≥ c·g(n)` for all `n ≥ n₀`, some `c > 0`|eventual lower bound|
|`f = Θ(g)`|`c₁g(n) ≤ f(n) ≤ c₂g(n)` for all `n ≥ n₀`|tight bound (both of the above)|
|`f = o(g)`|`f(n) < c·g(n)` for **every** `c > 0`|strict — equality never allowed|

---

### Q14. Is n + 10 = O(n)?

**Answer: Yes.** Need `n + 10 ≤ c·n`.

Take `c = 2`: `n + 10 ≤ 2n` ⟺ `10 ≤ n`.

|n|n+10|2n|holds?|
|---|---|---|---|
|1|11|2|✗|
|5|15|10|✗|
|10|20|20|✓|
|11|21|22|✓|

**c = 2, n₀ = 10.** A larger `c` gives a smaller `n₀` — the pair isn't unique.

---

### Q15. Is n = O(n + 10)?

**Answer: Yes.** `n ≤ 1·(n + 10)` is true from n = 1. **c = 1, n₀ = 1.**

Together with Q14: each is Big-O of the other.

---

### Q16. Is n² = O(n)?

**Answer: No.**

Assume `n² ≤ c·n`. Divide by `n > 0`: `n ≤ c`.

`c` is fixed but `n` grows without bound, so this fails for every `n > c`. No valid `(c, n₀)` exists → **n² ∉ O(n)**. Graphically, the parabola eventually crosses above every straight line `cn`.

---

### Q17. Is n + 10 = Ω(n)?

**Answer: Yes.** `n + 10 ≥ 1·n` for all n ≥ 1. **c = 1, n₀ = 1.**

---

### Q18. Is n = Ω(n + 10)?

**Answer: Yes.** Need `n ≥ c(n + 10)`. Take `c = ½`:

`n ≥ (n+10)/2` ⟺ `2n ≥ n + 10` ⟺ `n ≥ 10`. **c = ½, n₀ = 10.**

(n = 10: 10 ≥ 10 ✓; n = 11: 11 ≥ 10.5 ✓)

---

### Q19. Show n + 10 = Θ(n); why is n² not Θ(n)?

**n + 10 = Θ(n):** from Q14 (O) and Q17 (Ω). Explicitly `1·n ≤ n + 10 ≤ 2·n` for n ≥ 10, so `c₁ = 1, c₂ = 2, n₀ = 10`.

**n² vs n:** Θ needs both directions. `n² = Ω(n)` holds, but `n² = O(n)` fails (Q16), so no Θ relation. Different dominant powers can never be Θ of each other.

**Also:** two algorithms can both be Θ(n²) and still differ in real running time — constant factors and hardware differ, but the asymptotic class is the same.

---

## Lecture 6 — Complexity Classes & GATE Comparisons

### Q20. Order these by increasing growth

**Answer:**

```
1/N  <  O(1)  <  log log N  <  log N  <  √N  <  N  <  N log N
     <  N²  <  N² log N  <  N³  <  N^C  <  2^N  <  3^N  <  4^N  <  N!  <  N^N
```

Notes:

- `O(1)`, `O(100)`, `O(200)` are all the **same class** — constant
- `1/N` is decreasing, so it's the smallest of all
- `N log N` sits strictly between `N` and `N²`; `N² log N` between `N²` and `N³`
- `log log N` is genuinely smaller than `log N` but rarely appears as a real algorithm's cost
- Exponentials with different bases are different classes: `2^N < 3^N < 4^N`
- `N^N` beats even `N!`

---

### Q21. ⚠️ Compare 2^N and N^(log N)

**Answer: 2^N grows faster.**

Take log₂ of both:

- `log(2^N) = N`
- `log(N^(log N)) = (log N)²`

Compare `N` vs `(log N)²` — `N` wins for large N. So `2^N > N^(log N)`.

Equivalently `N^(log₂ N) = 2^((log₂ N)²)`, and `(log N)² ≪ N`.

> ⚠️ **The notes record this backwards.** The correct ordering is `N^C < N^(log N) < 2^N < N! < N^N`. `N^(log N)` is _superpolynomial but subexponential_.

---

### Q22. Rewrite √(log N)

**Answer:** `√(log N) = (log N)^(1/2)`.

Growth: `(log N)^(1/2) < log N < (log N)² < N^ε` for any ε > 0. Any power of a log is still slower than any positive power of N.

---

### Q23. log log N vs log log log N

**Answer: log log N is larger.** Each extra log shrinks the value further. For N = 2^65536: `log N = 65536`, `log log N = 16`, `log log log N = 4`.

---

### Q24. Is 2^N × 2^N polynomial?

**Answer: No.** `2^N × 2^N = 2^(2N) = (2^N)²` — still exponential, and in fact `2^(2N) ∉ O(2^N)` because the ratio `2^N` is unbounded.

---

### Q25. Choosing constants in asymptotic inequalities

`c` may be chosen as large as you like (`2^400`, `2^25` — anything), **but it must be a fixed constant**, independent of N. That's the whole game: if satisfying the inequality forces `c` to grow with N, the relation fails (exactly what killed Q16).

---

### Q26. Can 2^N be replaced by C·2^N?

**Answer: No, not when the exponent is what differs.** `C·2^N = Θ(2^N)` — a constant multiplier is fine. But `2^(2N)` is _not_ `C·2^N` for any constant C. A variable in the exponent cannot be absorbed into a constant.

---

### Q27. The GATE small-o question

`f(N) = o(g(N))` requires `f(N) < c·g(N)` for **every** positive c (equivalently `lim f/g = 0`). Equality is not permitted.

- `n = o(n²)` ✓
- `n = o(n)` ✗ (Big-O holds, small-o does not)
- `2n = o(n)` ✗

**Small-o is a strictly stronger claim than Big-O.**

---

### Q28. Sorting algorithms and complexities

|Algorithm|Best|Average|Worst|Space|
|---|---|---|---|---|
|Insertion sort|O(N)|O(N²)|O(N²)|O(1)|
|Selection sort|O(N²)|O(N²)|O(N²)|O(1)|
|Merge sort|O(N log N)|O(N log N)|O(N log N)|O(N)|
|Quick sort|O(N log N)|O(N log N)|O(N²)|O(log N)|

Merge sort and quick sort beat the quadratic sorts. Quick sort's O(N²) worst case comes from a consistently bad pivot.

---

## Lecture 7 — Recursion

### Q29. Recursive factorial — code, trace, complexity

```c
int fact(int n) {
    if (n == 1) return 1;          // termination condition FIRST
    return n * fact(n - 1);
}
```

**Trace of 6!** — calls go down, multiplications happen on the way back up:

```
Down:  6×5!  →  5×4!  →  4×3!  →  3×2!  →  2×1!  →  1! = 1
Up:    1  →  2×1=2  →  3×2=6  →  4×6=24  →  5×24=120  →  6×120=720
```

**Time: O(N)** — one call per value from N down to 1. **Extra space: O(N)** — every active call sits on the stack until the deeper one returns (fact(6) ≈ 6 stack frames, fact(7) ≈ 7).

Without the base case the recursion never terminates — stack overflow.

---

### Q30. Iterative factorial

```c
int fact(int n) {
    int s = 1;
    for (int i = 2; i <= n; i++)
        s = s * i;
    return s;
}
```

**Time: O(N). Extra space: O(1).**

No stack frames are created. "O(1) space" doesn't mean zero memory — `s` and `i` still occupy RAM; it means a _fixed_ amount regardless of N.

**Space complexity = input space + extra space.** Interview/algorithm questions normally ask only about extra space. And if the input already needs O(N) and the algorithm adds another O(N), the total is still O(N).

---

### Q31. Recursive multiplication M × N

Multiplication as repeated addition: `4 × 5` = add 4 five times.

```c
int multiply(int m, int n) {
    if (m == 0 || n == 0) return 0;
    return m + multiply(m, n - 1);
}
```

**Trace multiply(4,5):** calls unwind through n = 5,4,3,2,1,0, then `4+0=4 → 4+4=8 → 8+4=12 → 12+4=16 → 16+4=20`.

**Recurrence:** `T(N) = T(N−1) + c` → **Time O(N), Stack space O(N).**

---

### Q32. Recursive Fibonacci

```c
int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n-1) + fib(n-2);
}
```

Sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21 …

**Recurrence:** `T(n) = T(n−1) + T(n−2) + O(1)`

**Time: Θ(φⁿ) where φ ≈ 1.618 — loosely O(2ⁿ).** Every non-base call _branches into two_, unlike factorial's single chain — that's why the complexity is exponential rather than linear.

**Space: O(n)** — the tree is exponential in size but only `n` deep, and the stack only holds one root-to-leaf path at a time.

This exponential blow-up (the same subproblems recomputed over and over) is the exact motivation for **dynamic programming**: memoise and it drops to O(n).

---

### Q33. Stack vs heap memory

||Stack|Heap|
|---|---|---|
|Allocation|automatic, by the compiler|manual (`malloc`, `new`)|
|Freed|automatically on return|manually (`free`, `delete`)|
|Used for|function calls, local variables, parameters, return addresses|dynamic structures: linked lists, trees, graphs|
|Size|small, fixed|large|
|Failure|stack overflow|memory leak / fragmentation|
|Speed|fast|slower|

**Rule of thumb:** see recursion → think **stack** space. See explicit dynamic allocation → think **heap** space.

---

## Lecture 8 — Recurrence Relations (Substitution)

Three solving methods: **substitution**, **recursion tree**, **Master method**.

### Q35. T(n) = T(n−1) + n

**Answer: Θ(n²)**

```
T(n) = T(n-1) + n
     = T(n-2) + (n-1) + n
     = T(n-3) + (n-2) + (n-1) + n
     = T(n-k) + (n-k+1) + … + (n-1) + n
```

Stop when `n − k = 1` → `k = n − 1`. With `T(1) = 1`:

`T(n) = 1 + 2 + 3 + … + n = n(n+1)/2` → **O(n²)**

---

### Q36. T(n) = T(n−1) · n

**Answer: n!**

```
T(n) = T(n-1)·n = T(n-2)·(n-1)·n = … = T(n-k)·(n-k+1)···n
```

`n − k = 1` → `k = n − 1`, giving `1·2·3···n = n!`

**Bounds:** `2ⁿ < n! < nⁿ` for n ≥ 4.

**Stirling's approximation:** `n! ≈ √(2πn)·(n/e)ⁿ`, so **`log(n!) = Θ(n log n)`** — this is the form you actually use in recurrence problems.

---

### Q37. Harmonic recurrence

`T(n) = T(n−1) + 1/n` expands to `1 + ½ + ⅓ + … + 1/n`

**Answer: Θ(log n)** — the harmonic number `Hₙ ≈ ln n + γ`.

---

### Q38. T(n) = T(n−2) + log₂ n

**Answer: O(n log n)**

```
T(n) = T(n-2) + log n
     = T(n-4) + log(n-2) + log n
     = T(n-2k) + log(n-2k+2) + … + log n
```

Stop when `n − 2k = 0` → `k = n/2`, so there are about n/2 log terms.

Sum of logs = log of product:

`log 2 + log 3 + … + log(n/2) = log(2·3···(n/2)) = log((n/2)!)`

By Stirling: `log((n/2)!) = Θ((n/2)·log(n/2)) = Θ(n log n)`

**Same class as merge sort and average-case quick sort.**

---

### Q39. Stirling's approximation

```
n! ≈ √(2πn) · (n/e)ⁿ
log(n!) = Θ(n log n)
```

Intuition: `log(n!) = Σ log i`, which is bounded between `∫₁ⁿ log x dx` and `∫₁ⁿ⁺¹ log x dx`, both `Θ(n log n)`.

---

## Lecture 9 — Recurrences with Division & Strassen

### Q40. T(n) = 7T(n/2) + Θ(n²) — Strassen

**Answer: O(n^log₂7) ≈ O(n^2.807) ≈ O(n^2.8)**

Substitution:

```
T(n) = 7T(n/2) + n²
     = 7²T(n/4) + 7(n/2)² + n²
     = 7³T(n/8) + 7²(n/4)² + 7(n/2)² + n²
     = 7ᵏT(n/2ᵏ) + n²[1 + 7/4 + (7/4)² + … + (7/4)^(k-1)]
```

The bracketed part is a GP with ratio `7/4 > 1`, sum `= ((7/4)^k − 1)/((7/4) − 1)`.

Depth: `n/2ᵏ = 2` → `n = 2^(k+1)` → `k = log₂n − 1` (the `−1` is only a constant factor).

Exponent interchange: **`7^(log₂ n) = n^(log₂ 7)`**, and `log₂ 7 ≈ 2.807`.

Since `n^2.807 > n²`, the recursive term dominates → **O(n^2.8)**.

**Strassen's idea:** split each n×n matrix into four n/2 × n/2 blocks. Naive block multiplication needs **8** recursive multiplications → `8T(n/2) + Θ(n²) = O(n³)`. Strassen rearranges the block sums so only **7** multiplications are needed (at the cost of more additions, which stay Θ(n²)) → `O(n^2.81)`.

---

### Q41. ⚠️ T(n) = T(√n) + …

The exponent after k steps is `n^(1/2^k)`. Termination at `n^(1/2^k) = 2`:

`(log₂ n)/2^k = 1` → `2^k = log₂ n` → **`k = log₂(log₂ n)` levels**

Powers add when multiplying the same base: `n^(1/2) · n^(1/4) = n^(3/4)`, then `n^(7/8)`, approaching `n`.

Standard results by the per-level cost:

|Recurrence|Answer|
|---|---|
|`T(n) = T(√n) + O(1)`|**Θ(log log n)**|
|`T(n) = T(√n) + Θ(log n)`|**Θ(log n)**|
|`T(n) = 2T(√n) + log n`|**Θ(log n · log log n)**|
|`T(n) = √n · T(√n) + n`|**Θ(n log log n)**|

> ⚠️ The notes give `n log log n`, which corresponds only to the **last** form — where each of the `log log n` levels does Θ(n) work. `T(n) = T(√n) + c` alone is just `Θ(log log n)`. Check which recurrence the exam actually gives you.

---

### Q42. T(n) = 8T(n/2) + Θ(n²) — Cormen pp. 78–79

**Answer: Θ(n³)** — ordinary (non-Strassen) matrix multiplication.

Master method Case 1: `a = 8, b = 2, f(n) = n²`. `n^(log₂8) = n³`. Since `n² = O(n^(3−ε))`, the answer is `Θ(n³)`.

This is the baseline Strassen improves on by dropping `a` from 8 to 7.

---

### Q43. Ranking functions by growth (Cormen p. 62)

Standard hierarchy to apply:

```
1 < log log n < log n < (log n)^c < n^ε < n < n log n < n^c < c^n < n! < n^n
```

Techniques: take logs of both sides for expressions with powers; use `a^(log_b n) = n^(log_b a)`; any polylog beats no power of n.

---

### Q44. How does Strassen reduce n³ to n^2.8?

Partition into 4 blocks. Naive: 8 recursive multiplications → `n^log₂8 = n³`. Strassen: 7 cleverly combined products (P₁…P₇) reconstruct the four result blocks using extra additions/subtractions, which are only Θ(n²) and don't change the dominant term → `n^log₂7 ≈ n^2.81`.

**The count of recursive multiplications is what sets the exponent.**

---

## Lecture 10 — Master Method & Series

### Master Theorem (reference)

For `T(n) = aT(n/b) + f(n)`, with `a ≥ 1`, `b > 1`, let `d = log_b a`:

|Case|Condition|Result|
|---|---|---|
|1|`f(n) = O(n^(d−ε))`|`Θ(n^d)`|
|2|`f(n) = Θ(n^d)`|`Θ(n^d log n)`|
|3|`f(n) = Ω(n^(d+ε))` and regularity holds|`Θ(f(n))`|

The Master method is a **shortcut that only applies to recurrences of this form**. Anything else (e.g. `T(n−1)`, `T(√n)`, varying subproblem sizes) needs substitution or a recursion tree.

---

### Q45. Recurrences with n/2, n/3, 2n/3

Identify the shrink factor per level, since it fixes the depth:

|Reduction|Depth|
|---|---|
|`n → n/2`|`log₂ n`|
|`n → n/3`|`log₃ n`|
|`n → 2n/3`|`log_(3/2) n`|

All are `Θ(log n)` — only the constant base changes, since `log_b n = log₂n / log₂b`. So `log n` base 2, base 3 and base `n/2` differ only by constants.

Uneven splits like `T(n) = T(n/3) + T(2n/3) + n` still give **Θ(n log n)** — the recursion tree has varying depth but the longest path is `log_(3/2) n` and each level costs n.

---

### Q46. The Θ(n log n) form

`T(n) = 2T(n/2) + n` → Master Case 2 (`d = 1`, `f(n) = n = Θ(n)`) → **Θ(n log n)**.

---

### Q47. ⚠️ Geometric progression and convergence

For ratio `r` with `0 < r < 1`, powers shrink toward 0 and the infinite sum **converges**:

```
a + ar + ar² + …  =  a / (1 − r)
```

With `r = 4/5`: `1 + 0.8 + 0.64 + 0.512 + … = 1/(1 − 0.8) = 5` — a **constant**.

> ⚠️ The notes list `(0.2)² = 0.04` while discussing 4/5; that's the square of 1/5, not 4/5. `(0.8)² = 0.64`.

**Why it matters:** in a recurrence like `T(n) = T(n/5) + T(4n/5) + n`, or wherever the per-level work forms a decreasing GP, the whole series contributes only a **constant multiple of the top level**. That's the difference between Master Case 3 (top-heavy, answer = f(n)) and Case 1 (bottom-heavy, answer = leaves).

For `r > 1` the sum is dominated by the **last** term — which is exactly what happened in Q40 with `r = 7/4`.

---

### Q48. Binary search as a recurrence

`T(n) = T(n/2) + O(1)`, `T(1) = O(1)` → Master Case 2 with `d = log₂1 = 0`, `f(n) = Θ(n⁰)` → **Θ(log n)**.

---

## Lecture 11 — Divide & Conquer, Merge Sort

### Q49. Divide and conquer — the three steps

1. **Divide** the problem into subproblems: `p = floor((i + j)/2)`
2. **Recursively solve** the ranges `i…p` and `p+1…j`, stopping at a base case small enough to solve directly
3. **Combine** the subproblem solutions into the answer

It is a **design technique**, not a single algorithm.

**Applications:** min/max finding, power of an element, binary search, merge sort, quick sort, selection procedure, Strassen's matrix multiplication, counting inversions.

- Binary search divides but needs **no combine** step
- Merge sort: light divide, heavy combine (the merge)
- Quick sort: heavy divide (partition), no combine

---

### Q50. Trace merge sort on 7 elements (indices 1–7)

```
                       1-7
              ┌─────────┴─────────┐
            1-4                  5-7
        ┌────┴────┐          ┌────┴────┐
      1-2        3-4        5-6       7-7
     ┌─┴─┐      ┌─┴─┐      ┌─┴─┐
    1-1 2-2    3-3 4-4    5-5 6-6
```

A single element is already sorted — that's the base case.

---

### Q51. Calling sequence vs execution sequence (C1–C13)

**Calling sequence** = when a function is _invoked_ (top-down, left first). **Execution sequence** = when its work actually _completes_ (bottom-up).

Execution order:

```
C4, C5, C3,  C7, C8, C6,  C2,  C11, C12, C10,  C13, C9,  C1
```

Each parent completes only after **both** children finish. Recursion always goes fully left before going right.

---

### Q52. Traversal orders — which does a compiler use?

|Order|Root position|
|---|---|
|Preorder|root first (Root, Left, Right)|
|Inorder|root in the middle (Left, Root, Right)|
|Postorder|root last (Left, Right, Root)|

**A compiler evaluates expression trees in postorder** — children (operands) are computed before the parent (operator). That's exactly the pattern in Q51.

---

### Q53. Trace merge sort on 50, 80, 20, 16, 13, 55, 35

```
Split to singles:  [50][80][20][16] [13][55][35]

Merge pairs:       [50,80]  [16,20]  [13,55]  [35]
Merge:             [16,20,50,80]     [13,35,55]
Final merge:       [13,16,20,35,50,55,80]
```

Each merge repeatedly compares the smallest available element from each side, copies the smaller into the output, and advances that side's pointer. When one side empties, the rest of the other side is copied as-is.

---

### Q54. Why is merging two runs of X and Y elements O(X+Y)?

Every comparison copies exactly one element into the output, and each element is copied exactly once. Total copies = X + Y, so the work is `O(X + Y)` = **O(n)** for a full merge. No element is ever re-examined.

---

### Q55. Solve T(n) = 2T(n/2) + O(n), T(1) = O(1)

**Answer: O(n log n)**

**Recursion tree:**

|Level|Subproblems|Size each|Work per level|
|---|---|---|---|
|0|1|n|n|
|1|2|n/2|n|
|2|4|n/4|n|
|k|2ᵏ|n/2ᵏ|n|

Depth: `n/2ᵏ = 1` → `k = log n`. Levels × work per level = **n · log n**.

**Master method:** `a = 2, b = 2, d = log₂2 = 1`, `f(n) = Θ(n)` → Case 2 → `Θ(n log n)`.

Merge sort is O(n log n) in **all** cases — best, average and worst — because the split is always even.

---

### Q56. Merge sort pseudocode

```
mergeSort(A, i, j):
    if i == j: return A[i]            // one element, already sorted
    mid = floor((i + j) / 2)
    mergeSort(A, i, mid)
    mergeSort(A, mid+1, j)
    merge(A, i, mid, j)
    return A
```

The `merge` function is written **separately** from the recursive function.

---

### Q57. Interview variant — comparisons in a merge

Merging runs of X and Y elements takes:

- **Minimum X or Y comparisons** (when one array is entirely smaller than the other — e.g. [1,2,3] and [7,8,9] needs only 3)
- **Maximum X + Y − 1 comparisons** (fully interleaved)

The last element is always copied without a comparison, which is where the `−1` comes from.

---

## Lecture 12 — The Merge Implementation

### Q58. Write the merge function

Merging `a = 10, 20, 30, 40` with `11, 21, 31, 41`:

```c
void merge(int a[], int low, int mid, int high) {
    int b[SIZE];
    int i = low;        // left pointer
    int k = mid + 1;    // right pointer
    int m = low;        // output pointer into b

    // 1. Compare while both sides have elements
    while (i <= mid && k <= high) {
        if (a[i] <= a[k]) {
            b[m] = a[i];
            i++; m++;
        } else {
            b[m] = a[k];
            k++; m++;
        }
    }

    // 2. Copy leftovers from the LEFT portion
    while (i <= mid) {
        b[m] = a[i];
        i++; m++;
    }

    // 3. Copy leftovers from the RIGHT portion
    while (k <= high) {
        b[m] = a[k];
        k++; m++;
    }

    // 4. Copy back into the original array
    for (int p = low; p <= high; p++)
        a[p] = b[p];
}
```

**Trace:** 10<11 → 10 | 20>11 → 11 | 20<21 → 20 | 30>21 → 21 | 30<31 → 30 | 40>31 → 31 | 40<41 → 40 | left exhausted → copy 41. Result: `10, 11, 20, 21, 30, 31, 40, 41`

**Assign `mid + 1` to `k` once** rather than rewriting `mid+1` everywhere.

**Using `<=` rather than `<` in the comparison is what makes merge sort stable** — equal elements keep their original relative order.

---

### Q59. The leftover-copy logic (the missing part)

Steps 2 and 3 above. When the main comparison loop ends, **exactly one** side still has elements. Those elements are already sorted among themselves _and_ are all larger than everything copied so far, so they're copied straight across with **no further comparisons**.

Omitting this is the classic bug — the output array silently loses the tail.

---

### Q60. Why is merging O(N)?

Each element is examined and copied a constant number of times (once during comparison/copy, once on the copy-back). Total work is linear in the number of elements → **O(N)**. Extra space is also **O(N)** for the temporary array `b`.

---

## Lecture 1 — Course Setup Tasks

### Q61. Textbook

_Introduction to Algorithms_ by **Cormen, Leiserson, Rivest, Stein (CLRS)** — 3rd edition is the syllabus reference. (A 4th edition exists, but match the syllabus.)

### Q62. Lecture series

**MIT OpenCourseWare 6.006 _Introduction to Algorithms_** (ocw.mit.edu and the MIT OCW YouTube channel). The older series co-taught by **Charles Leiserson and Erik Demaine (6.046J)** is the motivational one — early-2000s recordings, available only at roughly 144p–240p. Cormen himself is at Dartmouth, not MIT; the MIT lectures are by his co-authors.

### Q63. Prerequisite revision

Binary trees and binary search trees, before the algorithm units. AVL / height-balanced trees come later.

---

## Algorithm Fundamentals (Lecture 1–2 Theory)

### Q64. Define an algorithm

A **sequence of a finite set of steps** used to solve a particular problem. The sequence matters — steps have a defined relationship and execution order. Written **language-independently**, so it can be converted into C, C++, Python or anything else.

Example — add two numbers:

```
1. Take two inputs a and b
2. sum ← a + b
3. Return sum
```

### Q65. The properties every algorithm must satisfy

|Property|Meaning|
|---|---|
|**Finiteness**|Must terminate in finite time|
|**Output**|At least one output, so success is observable|
|**Input**|Zero or more — optional (a printing procedure may take none)|
|**Definiteness / Determinism**|A given input follows a precisely defined path: state S1 + input → exactly S2, never ambiguously several states (same idea as a DFA)|
|**Effectiveness**|Every statement has a purpose; useless steps cost time and clarity|
|**Language independence**|No reliance on one language's syntax or features|

### Q66. The six steps of algorithm design

1. **Problem statement** — define the exact input→output relation
2. **Design technique** — pick a strategy (divide-and-conquer, DP, greedy…)
3. **Flowchart** — represent control flow including branches
4. **Verification / testing** — does it give correct output for intended inputs?
5. **Implementation** — convert to code
6. **Analysis** — measure time and space

The subject name **DAA / ADA** comes from steps 2 and 6. Complexity is taught first because you cannot evaluate a design choice without knowing its cost.

### Q67. Total running time of a program

**Total time = compile time + run time.** Compile time is the compiler processing the source; run time is CPU execution. Asymptotic orders like O(n) and O(n²) let you compare algorithms **independently of hardware and compiler speed**.

A compiler is software that defines and enforces a language's rules (checking syntax such as semicolons); compiler construction connects to Theory of Computation.

### Q68. Is a lower time complexity always better?

**No.** An O(n) algorithm is generally preferable to O(n²) _when other factors are comparable_, but an algorithm that's faster in time while consuming excessive memory may be unusable. Time and space must be weighed together — and constant factors and hardware still affect real-world speed within the same asymptotic class.

---

## Quick Revision Card

**Loop patterns**

|Pattern|Complexity|
|---|---|
|`i = i + c`|Θ(n)|
|`i = i * c`|Θ(log n)|
|`i = i^c`|Θ(log log n)|
|`n = sqrt(n)`|Θ(log log n)|
|`i = i + j; j++`|Θ(√n)|

**Standard recurrences**

|Recurrence|Answer|
|---|---|
|`T(n) = T(n−1) + 1`|Θ(n)|
|`T(n) = T(n−1) + n`|Θ(n²)|
|`T(n) = T(n−1) + log n`|Θ(n log n)|
|`T(n) = T(n−1)·n`|n!|
|`T(n) = 2T(n−1) + 1`|Θ(2ⁿ)|
|`T(n) = T(n/2) + 1`|Θ(log n)|
|`T(n) = 2T(n/2) + n`|Θ(n log n)|
|`T(n) = 2T(n/2) + 1`|Θ(n)|
|`T(n) = 7T(n/2) + n²`|Θ(n^2.81)|
|`T(n) = 8T(n/2) + n²`|Θ(n³)|
|`T(n) = T(√n) + 1`|Θ(log log n)|
|`T(n) = T(n−1) + T(n−2)`|Θ(φⁿ)|

**Identity worth memorising:** `a^(log_b n) = n^(log_b a)`