# Poisson Distribution: Parameter, Defect Probabilities, and Recurrence

October 8, 2026·11:07 AM·33m 13s

### Play Audio

0:00

34:20

SummaryTranscriptNotes

Edit

A statistics lesson worked through Poisson parameter finding, defective-item probabilities, sums of independent Poisson variables, and recurrence-based probability fitting.

## Finding a Poisson Parameter from a Probability Relation

Using (P(X=x)=e^{-\lambda}\lambda^x/x!), the class set up the stated relationship among probabilities for 2, 4, and 6 successes and simplified by cancelling common factors.

Substituting (x=\lambda^2) led to (x^2+3x-4=0), which factors to give the valid Poisson parameter (\lambda=1); the negative root was rejected because a Poisson parameter cannot be negative.

For a Poisson distribution, the mean and variance are both (\lambda), so each equals 1 in this example.

## Defective Items in a Box

For a box with 500 items and a 0.4% defect rate, the expected number of defective items is (\lambda=np=500(0.4/100)=2).

With (\lambda=2), the probability of no defective items is (P(X=0)=e^{-2}\approx0.1353).

The probability of exactly one defective item is (P(X=1)=e^{-2}(2)\approx0.2707).

The probability of exactly two defective items is (P(X=2)=e^{-2}(2^2/2!)\approx0.2707).

“At least one” is found using the complement: (P(X\ge1)=1-P(X=0)\approx0.8647).

“At most one” includes zero or one defective item, so it is calculated as (P(X=0)+P(X=1)).

For 1,000 identical boxes, expected counts are approximately 135 boxes with no defective items and 865 with at least one defective item.

## Sums of Independent Poisson Variables

If (X) and (Y) are independent Poisson random variables with parameters (\lambda_1) and (\lambda_2), then (X+Y) is Poisson with parameter (\lambda_1+\lambda_2).

Example: parameters 1.5 and 0.5 produce a sum with parameter 2; its variance is also 2.

## Recurrence Relation and Fitting Poisson Probabilities

Dividing consecutive Poisson probabilities gives the recurrence relation [ P(X=x+1)=\frac{\lambda}{x+1}P(X=x). ]

The relation can generate probabilities successively, beginning with (P(X=0)=e^{-\lambda}); the instructor noted it as a possible exam question alongside the binomial recurrence relation.

In the frequency example, values for (x=0,1,2,3,4,5) were 25, 35, 30, 12, 10, and 3. The stated total was 100.

The mean was calculated as (\sum fx/n=1.56), so (\lambda=1.56). The class began building a recurrence table and calculating (P(X=0)=e^{-1.56}\approx0.210), then generating later probabilities from the recurrence.
