# Probability Density Functions, Expected Value, and Variance Through Coin-Toss Examples

September 14, 2026·11:11 AM·32m 33s

### Play Audio

0:00

33:45

SummaryTranscriptNotes

Edit

## Overview

Probability lecture covering continuous probability density functions, expected value, and variance through numerical examples

One instructor and multiple students; individual names are not clearly identified

Critical outcomes:

A valid probability density function must integrate to 1 over its full range

For (f(x)=kx(1-x)) on (0\le x\le1), (k=6)

Three-coin example gives expected heads (E[X]=1.5) and variance (Var(X)=0.75)

## Probability Density Function and Normalization

A small interval of length (dx) around (x) is represented by (x-\frac{dx}{2}) to (x+\frac{dx}{2})

The probability that a continuous random variable lies in this interval is approximately (f(x),dx)

A probability density function must satisfy:

(f(x)\ge0)

The total integral over the complete range, from (-\infty) to (+\infty), equals 1

The instructor introduced the example (f(x)=kx(1-x)), with (x) restricted to the interval ([0,1])

## Finding the Constant in (f(x)=kx(1-x))

Normalization requires: [ \int_0^1 kx(1-x),dx=1 ]

Expanding the integrand gives: [ k\int_0^1(x-x^2),dx ]

Applying the power rule: [ \int(x-x^2),dx=\frac{x^2}{2}-\frac{x^3}{3} ]

Evaluating from 0 to 1: [ k\left(\frac12-\frac13\right)=1 ]

The constant is: [ k=6 ]

Therefore, (f(x)=6x(1-x)) is a probability density function on ([0,1])

## Probabilities for Specific Intervals

For (P(X<0.4)), the integration range is (0) to (0.4): [ P(X<0.4)=\int_0^{0.4}6(x-x^2),dx ]

The calculation uses: [ 0.4^2=0.16,\qquad 0.4^3=0.064 ]

The resulting probability is: [ P(X<0.4)=0.352 ]

For (P(0.4<X<0.5)), the instructor applies the cumulative integral at (0.5) and subtracts the value already obtained at (0.4)

The interval probability is approximately (0.148), using: [ F(0.5)=6\left(\frac{0.5^2}{2}-\frac{0.5^3}{3}\right)=0.5 ] and (F(0.4)=0.352)

A further exercise was assigned for finding (P(0.25<X<0.5)) using: [ 6\left(\frac{x^2}{2}-\frac{x^3}{3}\right) ]

## Expected Value of a Discrete Random Variable

For a random variable (X) taking values (x_1,x_2,\ldots,x_n) with probabilities (p_1,p_2,\ldots,p_n), the expected value is: [ E[X]=p_1x_1+p_2x_2+\cdots+p_nx_n ]

Equal probabilities imply: [ p_1=p_2=\cdots=p_n=\frac1n ]

Under equal probabilities, expected value becomes the arithmetic mean: [ E[X]=\frac{x_1+x_2+\cdots+x_n}{n} ]

## Three-Coin Toss: Expected Number of Heads

Three coins produce (2^3=8) sample points

The possible outcomes contain different combinations of heads and tails, including all-heads, all-tails, and mixed outcomes

Let (X) denote the number of heads. Then:

(X=0) with probability (\frac18)

(X=1) with probability (\frac38)

(X=2) with probability (\frac38)

(X=3) with probability (\frac18)

The expected number of heads is: [ E[X]=0\left(\frac18\right)+1\left(\frac38\right)+2\left(\frac38\right)+3\left(\frac18\right) ]

The result is: [ E[X]=\frac{12}{8}=1.5 ]

## Variance and Two Equivalent Formulas

The first variance formula introduced was: [ Var(X)=E[X^2]-\big(E[X]\big)^2 ]

For the three-coin example, (X^2) takes values (0,1,4,9)

Its expected value is: [ E[X^2]=0\left(\frac18\right)+1\left(\frac38\right)+4\left(\frac38\right)+9\left(\frac18\right)=3 ]

Therefore: [ Var(X)=3-(1.5)^2=3-2.25=0.75 ]

The second formula introduced was: [ Var(X)=E[(X-E[X])^2] ]

With (E[X]=1.5), the deviations are (-1.5,-0.5,0.5,1.5), whose squared values are (2.25,0.25,0.25,2.25)

Weighting these squared deviations by their corresponding probabilities also gives: [ Var(X)=\frac68=0.75 ]

Either variance formula can be used; the first formula was presented as faster for this example

## Two-Coin Exercise and Classroom Notes

Students were asked to solve a two-coin problem where (X) represents the number of heads

The expected sample outcomes are (0,1,2), with probabilities: [ \frac14,\frac12,\frac14 ]

The exercise requested both (E[X]) and (Var(X))

The instructor paused several times to address students talking, looking behind them, using a mobile device, and disturbing the class

A student asked about notes; the instructor indicated that the relevant material was available and acknowledged receiving it