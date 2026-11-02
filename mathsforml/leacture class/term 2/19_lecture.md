# Binomial Distribution: Parameters, Mode, Addition, and Recurrence

October 1, 2026·11:06 AM·30m 41s

### Play Audio

0:00

31:36

SummaryTranscriptNotes

Edit

## Overview: Binomial Distribution Lesson

Mathematics lecture on binomial-distribution properties and probability calculations, taught in a multilingual classroom.

One teacher and multiple students; individual student identities are unclear.

Critical outcomes:

For a binomial distribution, mean (np) is at least as large as variance (npq).

Independent binomial variables have a binomial sum only when their success probabilities match.

The mode depends on whether ((n+1)p) is an integer.

Successive probabilities can be calculated using a recurrence relation.

## Mean, Variance, and Recovering Parameters

For parameters (n) (number of trials), (p) (success probability), and (q=1-p) (failure probability), the mean is (np) and the variance is (npq).

Since (0<q<1), variance (npq) is smaller than the mean (np).

Example: mean (4), variance (3)

Dividing variance by mean gives (q=3/4), so (p=1/4).

From (np=4), the number of trials is (n=16).

Example: mean (3), variance (4)

This would require (q=4/3), which is impossible for a probability.

Therefore, the stated mean and variance cannot describe a binomial distribution.

## Probability Calculations for (n=16), (p=1/4)

The probability mass function is (P(X=x)=\binom{n}{x}p^xq^{n-x}).

(P(X=0)=(3/4)^{16}), since (\binom{16}{0}=1).

(P(X=1)=\binom{16}{1}(1/4)(3/4)^{15}).

“At least one” is calculated by the complement: (P(X\ge1)=1-P(X=0)=1-(3/4)^{16}).

“At most 15” excludes only (X=16): (P(X\le15)=1-P(X=16)).

## Finding the Mode

Calculate ((n+1)p) to determine the mode.

If ((n+1)p) is not an integer, the mode is its integer part.

For (n=16), (p=1/4), the value is (17/4=4.25), so the mode is (4).

If ((n+1)p) is an integer (m), the distribution is bimodal, with modes (m-1) and (m).

For ((n+1)p=4), the modes are (3) and (4).

## Adding Independent Binomial Variables

If (X\sim\mathrm{Bin}(n_1,p_1)) and (Y\sim\mathrm{Bin}(n_2,p_2)) are independent, their sum is not generally binomial when (p_1\ne p_2).

When (p_1=p_2=p), (X+Y\sim\mathrm{Bin}(n_1+n_2,p)).

Example: (X\sim\mathrm{Bin}(8,1/3)), (Y\sim\mathrm{Bin}(6,1/3))

(X+Y\sim\mathrm{Bin}(14,1/3)).

Its mean is (14/3), variance is (28/9), and modes are (4) and (5), since ((14+1)(1/3)=5).

With success probabilities (1/3) and (2/3), respectively, the sum does not follow a binomial distribution.

## Recurrence Relation for Probabilities

The probability of the next value can be computed from the current probability by dividing consecutive PMF terms: [ \frac{P(X=x+1)}{P(X=x)}=\frac{n-x}{x+1}\cdot\frac{p}{q}. ]

Thus, once (P(X=0)=q^n) is known, later probabilities can be generated successively using the recurrence relation.



q1  Consider a binomial distribution where $n=19$ and $p=1/4$. What is the mode of this distribution?
![[Pasted image 20261025184430.png]]
q2 Let $X \sim \text{Bin}(10, 0.4)$ and $Y \sim \text{Bin}(15, 0.4)$ be independent random variables. What is the distribution of $X+Y$?
![[Pasted image 20261025184754.png]]
Question 6

Suppose X∼Bin(5,0.2) and Y∼Bin(5,0.8) are independent variables. Why doesn't X+Y follow a binomial distribution? 
![[Pasted image 20261025184852.png]]
Question 8

A binomial distribution has a mean of 6 and a variance of 2. What is the total number of trials, n?

![[Pasted image 20261025185239.png]]