# Random Variables, Sample Spaces, and Probability Mass Function Exercises

September 10, 2026·11:06 AM·32m 30s

### Play Audio

0:00

33:07

SummaryTranscriptNotes

Edit

## Overview: Probability lecture on random variables and PMFs

Classroom lecture covering random experiments, sample spaces, random variables, discrete/continuous types, and probability mass functions

One instructor and multiple students; individual speaker identities are not consistently labeled

Critical outcomes:

Three-coin toss example produced random-variable values from 0 to 3

A valid probability mass function must have nonnegative probabilities summing to 1

The parameter in the first PMF exercise was found as (K=\frac{1}{10})

Negative probability values invalidate a proposed probability mass function

## Random Experiments, Sample Points, and Sample Spaces

**Random experiment**: An experiment whose outcome cannot be predicted with certainty before it is performed

**Sample point**: A single possible outcome of a random experiment

**Sample space**: The totality of all sample points or possible outcomes

**Three-coin toss**: Tossing three coins simultaneously gives (2^3=8) possible outcomes

The lecture attempted to organize the eight outcomes by combinations of heads and tails, including outcomes with three heads, two heads, one head, and zero heads

## Random Variables and Their Values

**Random variable**: A real-valued function defined on the sample space, taking values from minus infinity to plus infinity

The random variable was denoted using capital letters such as (X), (Y), or (Z)

**Number of heads**: For three coin tosses, (X) was defined as the number of times heads occurs

Possible values: (0,1,2,3)

Three heads correspond to (X=3)

Two heads correspond to (X=2)

One head corresponds to (X=1)

No heads corresponds to (X=0)

**Number of tails**: Another random variable, (Y), was defined as the number of times tails occurs

Possible values also range from (0) to (3)

## Discrete and Continuous Random Variables

**Discrete random variable**: Takes finite or countable values, generally integer values such as (0,1,2,3), and is defined on a discrete sample space

**Continuous random variable**: Takes all possible values within a specified limit or interval

The type of random variable determines which probability function is used:

Discrete random variable → probability mass function

Continuous random variable → probability density function

## Probability Mass Function Conditions

For a discrete random variable (X) taking possible values (x_1,x_2,x_3,\ldots,x_n), each value is assigned a probability: [ P(X=x_i)=P_i ]

A valid probability mass function must satisfy two conditions:

Every probability is nonnegative: (P_i\geq 0)

The sum of all probabilities equals 1: [ P_1+P_2+P_3+\cdots+P_n=1 ]

If the probabilities do not sum to 1, the function is not a probability mass function

A probability cannot be negative, even if the total algebraic sum appears to satisfy another condition

## Three-Coin Toss PMF

For (X=) number of heads in three coin tosses, the possible values are (0,1,2,3)

The probabilities were calculated from the eight equally likely outcomes:

(P(X=0)=\frac{1}{8})

(P(X=1)=\frac{3}{8})

(P(X=2)=\frac{3}{8})

(P(X=3)=\frac{1}{8})

The probabilities sum to: [ \frac18+\frac38+\frac38+\frac18=1 ]

Since all probabilities are nonnegative and their sum is 1, this is a valid probability mass function

## Finding (K) from PMF Constraints

A practice question assigned probabilities involving (K) to values such as (-2,-1,0,1)

The probabilities were represented using terms including (2K), (K), and (3K)

Adding the assigned probabilities produced: [ 10K=1 ]

Therefore: [ K=\frac{1}{10} ]

Substituting (K=\frac{1}{10}) gives probabilities such as: [ \frac{2}{10},\frac{1}{10},\frac{3}{10} ]

Using (K=\frac18) would not work because the total probability would not equal 1

## Quadratic PMF Exercise and Calculation Checks

A more complex exercise used probability expressions involving (K^2) and (K), including:

(3K)

(K)

(7K^2+K)

(2K^2+K)

(K^2)

The class attempted to solve the normalization equation by adding all expressions and setting the result equal to 1

The algebra was simplified into a quadratic form involving terms such as (10K^2), (9K), and a constant

Candidate values discussed included (K=0), (K=1), (K=\frac{1}{10}), and negative values

Negative candidate values were rejected because they can produce negative probabilities

The instructor emphasized checking both requirements after solving:

Probabilities must be nonnegative

Their total must equal 1

Substitution with (K=\frac{1}{10}) led to individual calculations such as:

(3K=\frac{3}{10})

(K=\frac{1}{10})

(7K^2+K=\frac{7}{100}+\frac{1}{10}=\frac{17}{100})

Several arithmetic attempts produced inconsistent values, including (1.07), (17/100), (12/100), and (31/100); the instructor repeatedly corrected calculation and formula-substitution errors

The final displayed probability values included: [ \frac{3}{10},\frac{1}{10},\frac{17}{100},\frac{12}{100},\frac{31}{100} ] followed by an attempt to verify their total as (100/100)

The calculation was not presented cleanly enough to establish a fully verified final result for the quadratic exercise

## Return to the Core Definitions

Near the end, the instructor returned to the foundational definitions:

Random experiment

Sample point

Outcome of a random experiment

Sample space

The emphasis was on writing the definitions clearly before continuing with further example