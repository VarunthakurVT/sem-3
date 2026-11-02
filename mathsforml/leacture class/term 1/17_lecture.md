# Expected Tosses for the First Head and Expectation–Variance Rules

September 24, 2026·11:09 AM·33m 31s

### Play Audio

0:00

34:45

SummaryTranscriptNotes

Edit

## Overview: Probability and Random-Variable Properties

Classroom lesson on expected value and variance, using coin tosses and a three-coin example

An instructor and multiple students participated; individual speakers are not consistently identified

Critical outcomes:

The expected number of tosses until the first head is 2

For a constant (c), (E[cX]=cE[X]) and (\mathrm{Var}(cX)=c^2\mathrm{Var}(X))

Multiplying by a negative constant changes the expected value’s sign but does not make variance negative

## Expected Tosses Until the First Head

Let (X) be the number of tosses needed to get the first head. The possible outcomes are 1 toss, 2 tosses, 3 tosses, and so on.

The probability of first getting a head on toss (n) is ((1/2)^n): for example, (1/2) for one toss, (1/4) for two, and (1/8) for three.

The expectation is the sum of each possible toss count multiplied by its probability: [ E[X]=1(1/2)+2(1/4)+3(1/8)+4(1/16)+\cdots ]

This is an arithmetico-geometric series: the toss counts form an arithmetic sequence, while the probabilities form a geometric sequence with common ratio (1/2).

Multiplying the series by (1/2) and subtracting gives (\frac12E[X]=1), so (E[X]=2). On average, two tosses are required to get the first head.

## General Rules for Expectation and Variance

For a constant (c), (E[c]=c) and (\mathrm{Var}(c)=0), since a constant has no variation.

Scaling a random variable scales its expectation linearly: (E[cX]=cE[X]).

Variance scales by the square of the multiplier: (\mathrm{Var}(cX)=c^2\mathrm{Var}(X)). The rule also applies when (c) is negative because squaring removes the sign.

The variance identity used in the lesson was (\mathrm{Var}(X)=E[X^2]-(E[X])^2).

## Applying the Rules to Three Coin Tosses

For three coin tosses, the random variable (X) counts the number of heads; its possible values are 0, 1, 2, and 3, with probabilities (1/8, 3/8, 3/8,) and (1/8).

The lesson used (E[X]=1.5) and (\mathrm{Var}(X)=0.75).

For (2X), the expected value is 3, confirming (E[2X]=2E[X]=2(1.5)=3).

Using (\mathrm{Var}(2X)=E[(2X)^2]-(E[2X])^2), the lesson calculated (12-3^2=3), matching (2^2(0.75)=3).

The same scaling rule gives (\mathrm{Var}(-2X)=4(0.75)=3), (\mathrm{Var}(-X)=0.75), and (\mathrm{Var}(-3X)=9(0.75)).

By contrast, (E[-2X]=-2(1.5)=-3): expectation retains the negative multiplier’s sign.