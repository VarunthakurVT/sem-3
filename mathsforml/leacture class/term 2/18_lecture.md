# Expectation, Variance, and Binomial Distribution Class

September 28, 2026·11:08 AM·35m 46s

### Play Audio

0:00

37:02

SummaryTranscriptNotes

Edit

## Overview: Probability and Random Variables Lesson

Classroom lesson on expectation and variance rules, followed by an introduction to the binomial distribution

One teacher and multiple students; individual student identities are unclear

Critical outcomes:

Expected values are linear; variances of independent linear combinations use squared coefficients

A binomial random variable models independent trials with two outcomes and constant success probability

“At least one success” can be calculated as 1 minus the probability of zero successes

## Expectation and Variance Rules

For random variables (X) and (Y), (E[X+Y]=E[X]+E[Y]); when independent, (E[XY]=E[X]E[Y])

For independent variables, (\mathrm{Var}(X+Y)=\mathrm{Var}(X)+\mathrm{Var}(Y))

For constants (A) and (B), (E[AX+BY]=A E[X]+B E[Y])

The variance rule is (\mathrm{Var}(AX+BY)=A^2\mathrm{Var}(X)+B^2\mathrm{Var}(Y)) for independent (X,Y); a negative coefficient becomes positive when squared

With (E[X]=10), (E[Y]=20), (\mathrm{Var}(X)=4), and (\mathrm{Var}(Y)=5):

(E[X+Y]=30), while (E[X-Y]=-10)

(\mathrm{Var}(X+Y)=\mathrm{Var}(X-Y)=9)

---

## Applying the Rules to Linear Combinations

For (X+2Y), the expected value is (10+2(20)=50), and the variance is (4+2^2(5)=24)

For (X-2Y), the expected value is (10-2(20)=-30), and the variance is also (4+(-2)^2(5)=24)

The class practiced expressions such as (2X+Y) and (2X-Y), emphasizing that coefficient signs affect expectations but disappear in the variance when squared

Using the stated variances (4) and (5), either expression has variance (2^2(4)+1^2(5)=21)

---

## Binomial Distribution: Conditions and Probability Formula

A binomial model applies when there are (n) independent trials, each with two possible outcomes—success or failure—and the success probability stays constant

If (X) successes occur, then there are (n-X) failures; success and failure probabilities are denoted (p) and (q)

A particular sequence with (X) successes has probability (p^Xq^{n-X}); the successes can occur in (\binom nX) different orders

Therefore, the probability mass function is: [ P(X=x)=\binom nx p^xq^{n-x},\qquad x=0,1,\ldots,n ]

The probabilities across all possible values sum to 1, corresponding to the binomial expansion of ((p+q)^n), where (p+q=1)

---

## Zero, All, and At-Least-One Success

Zero successes: setting (x=0) gives (P(X=0)=q^n)

All trials successful: setting (x=n) gives (P(X=n)=p^n)

“At least one” means (X=1,2,\ldots,n); instead of adding all those cases, calculate (1-P(X=0)=1-q^n)

“At most one” means (X=0) or (X=1); the class clarified the difference between “at least” and “at most”

Numerical practice with the binomial distribution was deferred to the next class



q 1-- Given independent random variables $X$ and $Y$ with $E[X] = 10$ and $E[Y] = 20$, what is the value of $E[3X - 2Y]$?
![[Pasted image 20261025181713.png]]  
q2  Assume $X$ and $Y$ are independent random variables with $\text{Var}(X) = 4$ and $\text{Var}(Y) = 5$. What is $\text{Var}(X - Y)$?
![[Pasted image 20261025182135.png]]
q3 Using the same independent variables where $\text{Var}(X) = 4$ and $\text{Var}(Y) = 5$, evaluate $\text{Var}(2X - 3Y)$.
![[Pasted image 20261025182435.png]]