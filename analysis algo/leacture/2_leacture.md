# Asymptotic Notations: Big-O, Big-Ω, and Big-Θ Comparisons

August 24, 2026·9:25 AM·33m 56s

## Overview

Classroom lecture on comparing algorithm time complexities using asymptotic notation

Participants: an instructor and multiple students; individual names are not clearly identified

Critical outcomes:

Big-O describes an eventual upper bound using a positive constant and threshold

Big-Ω describes an eventual lower bound using a positive constant and threshold

Big-Θ requires both upper- and lower-bound relationships

Functions with different highest powers, such as (n^2) and (n), cannot be bounded by a fixed constant in both directions

## Comparing Algorithms Through Growth Rates

Algorithm comparison focuses on comparing the time-complexity growth of two functions rather than relying only on their actual running time

The instructor introduced three relationships:

Big-O: one function is eventually no larger than a constant multiple of another

Big-Ω: one function is eventually no smaller than a constant multiple of another

Big-Θ: both Big-O and Big-Ω relationships hold

The comparison is based on behavior after a sufficiently large input size, not necessarily on the initial values of the functions

Two algorithms can have the same asymptotic complexity but different practical speeds because of constant factors or differences in hardware

## Big-O as an Eventual Upper Bound

Big-O notation was explained using the form (f(n) \leq c \cdot g(n)) for all (n \geq n_0)

The definition requires:

A positive constant (c)

A threshold (n_0)

The inequality to remain true for every (n \geq n_0)

The right-hand function, after multiplication by (c), must eventually remain greater than or equal to the left-hand function

Graphically, (c \cdot g(n)) must stay above (f(n)) after the threshold (n_0)

### Example: (n+10) and (n)

For (f(n)=n+10) and (g(n)=n), the required inequality is: [ n+10 \leq c n ]

Using (c=2), individual values were checked:

(n=1): (11 \leq 2)

(n=3): (13 \leq 6)

(n=5): (15 \leq 10)

(n=10): (20 \leq 20)

(n=11): (21 \leq 22)

The inequality becomes valid from (n_0=10) onward for (c=2)

Therefore, (n+10) is (O(n))

The value of (n_0) depends on the chosen constant (c); choosing a larger constant can produce a different threshold

### Example: (n) and (n+10)

For (f(n)=n) and (g(n)=n+10), the inequality is: [ n \leq c(n+10) ]

Choosing (c=1) makes the right-hand side larger from the first positive input: [ n \leq n+10 ]

A valid choice is (c=1) and (n_0=1)

This shows that both (n+10) and (n) are (O) of each other

## Constant Factors and Practical Algorithm Speed

A constant multiplier changes the scale of a function but not its asymptotic growth family

Two linear functions may have different execution speeds because one can contain a larger constant factor

The faster function may change depending on the input range and the selected constants

Asymptotic notation focuses on long-term growth, so constant-factor differences are generally ignored when classifying complexity

Two algorithms with (n^2) complexity can still have different practical performance, but both remain in the same asymptotic class

## Why (n^2) Cannot Be Compared as Big-O of (n)

The instructor examined whether (f(n)=n^2) can be (O(g(n))) for (g(n)=n)

The required inequality would be: [ n^2 \leq c n ]

Dividing by (n) for positive (n) gives: [ n \leq c ]

Since (n) is a variable that keeps increasing, no fixed constant (c) can satisfy this for all (n \geq n_0)

The quadratic function eventually grows faster than every constant multiple of the linear function

Therefore: [ n^2 \notin O(n) ]

The graph interpretation is that the quadratic curve eventually rises above every fixed linear multiple of (n)

## Big-Ω as an Eventual Lower Bound

Big-Ω was introduced as the reverse type of comparison

Its definition uses: [ f(n) \geq c \cdot g(n) ] for all (n \geq n_0)

The required values are:

(c>0)

(n_0)

The inequality must remain valid for every input beyond (n_0)

Graphically, (f(n)) must eventually remain above (c\cdot g(n))

For (f(n)=n+10) and (g(n)=n), choosing (c=1) and (n_0=1) works because: [ n+10 \geq n ]

For (f(n)=n) and (g(n)=n+10), a constant such as (c=\frac12) can be used: [ n \geq \frac12(n+10) ]

The inequality becomes valid from (n_0=10):

(n=10): (10 \geq 20/2=10)

(n=11): (11 \geq 22/2=11)

The example demonstrates that constant selection affects the threshold (n_0), while the constant must remain positive

## Big-Θ as a Tight Bound

Big-Θ applies when a function is bounded both above and below by constant multiples of another function

The relationship can be expressed as: [ c_1g(n) \leq f(n) \leq c_2g(n) ] for all (n \geq n_0)

The definition requires three positive constants:

(c_1>0)

(c_2>0)

(n_0)

The function (f(n)) must remain between (c_1g(n)) and (c_2g(n)) after (n_0)

Big-Θ is equivalent to satisfying both:

(f(n)=O(g(n)))

(f(n)=\Omega(g(n)))

The earlier functions (n) and (n+10) were used to show that functions with the same dominant growth rate can be Big-Θ of one another

Since both are linear and differ only by an additive constant, each eventually bounds the other: [ n+10=\Theta(n) ]

In contrast, (n^2) and (n) do not have the same dominant growth rate and cannot be placed in a tight Θ relationship

## Class Logistics and Closing Remarks

The instructor briefly addressed classroom distractions, seating, attendance, and side conversations

The lecture ended with informal remarks about attendance and gaining experience