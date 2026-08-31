# Recursion, Factorial Complexity, Recursive Multiplication, and Fibonacci in DSA

August 31, 2026·9:25 AM·42m 47s



## Overview

DSA lecture focused on recursion, termination conditions, stack usage, time/space complexity, and recursive problem solving

One instructor with multiple students; Ashish and Mansi were directly addressed

Critical outcomes:

Every recursive function must include a termination or base condition

Factorial and recursive multiplication both use stack space proportional to the number of recursive calls

Recursive factorial has O(N) time and O(N) extra space; iterative factorial has O(N) time and O(1) space

Students were assigned stack-versus-heap memory revision and asymptotic-notation practice

Recursive Fibonacci was introduced using base cases N = 0 and N = 1

## Factorial Recursion and the Need for Termination

Factorial follows the recursive relation `factorial(N) = N × factorial(N − 1)`.

The example `6!` expands as:

`6 × 5!`

`5 × 4!`

`4 × 3!`

`3 × 2!`

`2 × 1!`

The base case is `1! = 1`, which stops the function before it attempts to calculate `1 × 0!`.

Recursive calls reduce the parameter by one at every step, so the problem becomes smaller until the termination condition is reached.

Without a termination condition, the function continues calling itself and enters an infinite loop or uncontrolled recursion.

After reaching the base case, the results return in reverse order:

`1`

`2 × 1 = 2`

`3 × 2 = 6`

`4 × 6 = 24`

`5 × 24 = 120`

`6 × 120 = 720`

## Recursive Program Structure and Stack Execution

A recursive factorial function can be structured as:

If `N == 1`, return `1`

Otherwise, return `N × factorial(N − 1)`

The instructor emphasized that the termination condition should be written first when designing recursive code.

Each active function call remains stored in the call stack until the deeper recursive call finishes.

For `factorial(6)`, approximately six stack units are required; for `factorial(7)`, approximately seven units are required.

The stack usage depends on `N`, the number of recursive calls, so the extra space complexity is O(N).

The multiplication operations are performed while the calls return from the deepest level, not while the calls are initially moving downward.

Recursion was connected to divide-and-conquer problem solving: large problems can be divided into smaller subproblems and solved through repeated self-calls.

Iterative or non-recursive code can be faster than recursive code, but recursion is useful when it expresses the structure of a difficult problem clearly.

Tower of Hanoi was given as an example where a recursive solution is much shorter and easier to express than manually listing every disk movement.

## Time and Space Complexity of Factorial

The factorial function makes one recursive call for each value from `N` down to the base case.

The time complexity is O(N), because the function is called approximately N times.

The recursive call stack creates O(N) extra space.

Space complexity was explained as input space plus extra space, although interview and algorithm questions generally focus on the extra space introduced by the algorithm.

A constant-size integer input may use a fixed amount of memory, such as two or four bytes, while the recursive stack grows with N.

If an input array already requires O(N) space and the algorithm uses another O(N) amount of stack space, the total remains O(N) in asymptotic notation because constant factors are ignored.

## Iterative Factorial and Constant Extra Space

An iterative factorial version uses a loop, such as `for (i = 0; i <= N; i++)`, together with an accumulator like `s = s × i`.

The loop still performs a linear number of operations, giving O(N) time complexity.

The iterative version does not create recursive stack frames.

Its extra space complexity is O(1), because only a fixed number of variables are used regardless of N.

The instructor clarified that “not using extra space” does not mean the program uses no memory at all; variables still occupy a constant amount of RAM.

Recursion is therefore not being taught merely to calculate factorial. It is being introduced because later problems may be naturally recursive and may require dividing a large problem into smaller parts.

## Recurrence Relations and Recursive Multiplication

The class moved from factorial to a recursive program for calculating `M × N`, where `M` and `N` are greater than or equal to 1.

Multiplication was represented as repeated addition:

`4 × 5` means adding `4` five times

`multiply(M, N) = M + multiply(M, N − 1)`

A suitable termination condition is reached when either `M == 0` or `N == 0`.

If either value is zero, the result is zero.

The recursive structure is:

If `M == 0` or `N == 0`, return `0`

Otherwise, return `M + multiply(M, N − 1)`

For `multiply(4, 5)`, the calls reduce through `N = 5, 4, 3, 2, 1, 0`.

The result is calculated while returning from the stack:

`4 + 0 = 4`

`4 + 4 = 8`

`8 + 4 = 12`

`12 + 4 = 16`

`16 + 4 = 20`

The time complexity is O(N), because the recursive call count depends on N.

The stack space is also O(N), with a possible additional constant-level call depending on how the base case is counted.

The recurrence relation follows the same recursive pattern as the code: `T(N) = T(N − 1) + constant`, leading to linear complexity.

## Recursive Fibonacci and Base Cases

Fibonacci numbers were introduced using the sequence:

`F(0) = 0`

`F(1) = 1`

`F(2) = 1`

`F(3) = 2`

`F(4) = 3`

`F(5) = 5`

`F(6) = 8`

`F(7) = 13`

`F(8) = 21`

Each value is formed by adding the previous two values:

`F(N) = F(N − 1) + F(N − 2)`

The recursive program requires two base cases:

If `N == 0`, return `0`

If `N == 1`, return `1`

For other values, the function returns `fibonacci(N − 1) + fibonacci(N − 2)`.

The instructor highlighted that Fibonacci has different complexity behavior from factorial because each non-base call branches into two recursive calls.

The exact Fibonacci complexity was not finalized in the transcript; its time-complexity behavior was connected to later discussion of dynamic programming.

## Memory Concepts, Interview Preparation, and Practice

Students were assigned homework to revise the difference between stack memory and heap memory, including when each is used inside RAM.

Recursive functions generally use the call stack because every active function call must be stored until it returns.

Heap allocation was connected to functions such as `malloc` and to dynamically allocated structures such as linked lists.

The instructor encouraged students to identify stack usage immediately when they see recursive code and heap usage when code explicitly performs dynamic allocation.

Asymptotic notation and complexity-comparison questions should be practiced regularly.

Students were asked to remind the instructor in the lab to provide two additional questions.

Insertion sort had already been taught, and the class was encouraged to continue solving time-complexity problems rather than relying only on memorized answers.

The examples were framed as useful for coding interviews and for future DSA topics, particularly divide-and-conquer and dynamic programming.

---

## Action items

**Students**: Revise the difference between stack memory and heap memory, including when each is used in RAM.

**Students**: Continue practicing asymptotic-notation and time-complexity comparison questions.

**Students**: Remind the instructor in the lab to provide two additional practice questions.