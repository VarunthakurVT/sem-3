# Standard Deviation Formulas for Discrete and Continuous Frequency Distributions

August 24, 2026·11:07 AM·35m 37s


## Overview

Mathematics lecture on calculating standard deviation using direct, assumed-mean, and step-deviation methods

One teacher and multiple students; some student identities were unclear in the recording

Critical outcomes:

Direct and shortcut formulas were applied to discrete frequency data

Assumed-origin and changed-scale methods were shown to simplify fractional means and large deviations

Continuous frequency distributions were solved using class midpoints

Equivalent methods produced the same standard deviation, including √130

## Discrete Frequency Distribution: Direct Calculation of Standard Deviation

A discrete frequency distribution contains values (x_1, x_2, \ldots, x_n) with corresponding frequencies (f_1, f_2, \ldots, f_n); total frequency is represented by capital (N)

The mean for frequency data is calculated as: [ \bar{x}=\frac{\sum fx}{N} ]

For the example, the values of (x) were (1,2,3,4,5), with corresponding frequencies (2,5,6,5,2), giving total frequency (N=20)

The weighted total was (\sum fx=60), so: [ \bar{x}=\frac{60}{20}=3 ]

Deviations from the mean were calculated as (x-\bar{x}), producing (-2,-1,0,1,2)

Squared deviations were (4,1,0,1,4)

Multiplying squared deviations by their corresponding frequencies gave a total of: [ \sum f(x-\bar{x})^2=36 ]

The standard deviation was therefore: [ \sigma=\sqrt{\frac{36}{20}} ]

---

## Shortcut Formula When the Mean Is Fractional

Direct deviation calculations become inconvenient when the mean is a fraction

The alternative formula is: [ \sigma=\sqrt{\frac{\sum fx^2}{N}-\left(\frac{\sum fx}{N}\right)^2} ]

The same (x)-values and frequencies were used:

(x^2=1,4,9,16,25)

(fx^2=2,20,54,80,50)

(\sum fx^2=206)

(\sum fx=60)

(N=20)

Substitution gives: [ \sigma=\sqrt{\frac{206}{20}-\left(\frac{60}{20}\right)^2} =\sqrt{\frac{26}{20}} ]

This method avoids calculating individual deviations when the mean is fractional or awkward

---

## Assumed-Mean Method for Large Values of (x)

When the observations are large, a common assumed value (A) can be subtracted from every observation

With: [ d=x-A ] the formula becomes: [ \sigma=\sqrt{\frac{\sum fd^2}{N}-\left(\frac{\sum fd}{N}\right)^2} ]

The assumed value used in the example was (A=4)

Deviations from the assumed value were: [ -3,-2,-1,0,1 ]

The frequency-weighted deviation total was: [ \sum fd=-20 ]

The frequency-weighted squared-deviation total was: [ \sum fd^2=46 ]

Substitution produced the same result as the previous method: [ \sigma=\sqrt{\frac{46}{20}-\left(\frac{-20}{20}\right)^2} =\sqrt{\frac{26}{20}} ]

Squaring the negative value of (\sum fd) makes the sign irrelevant in the final calculation

---

## Continuous Frequency Distribution: Midpoints and Direct Method

For continuous classes, each class interval is represented by its midpoint: [ x=\frac{\text{lower limit}+\text{upper limit}}{2} ]

The midpoints used were (5,15,25,35,45)

Corresponding frequencies were (2,5,6,5,2), giving: [ N=20 ]

The weighted midpoint total was calculated as: [ \sum fx=500 ]

The mean was: [ \bar{x}=\frac{500}{20}=25 ]

Deviations from the mean were (-20,-10,0,10,20)

Squared deviations were (400,100,0,100,400)

After multiplying by the corresponding frequencies: [ \sum f(x-\bar{x})^2=2600 ]

The standard deviation became: [ \sigma=\sqrt{\frac{2600}{20}}=\sqrt{130} ]

---

## Continuous Distribution: Shortcut Formula

The same continuous-frequency example was solved using: [ \sigma=\sqrt{\frac{\sum fx^2}{N}-\left(\frac{\sum fx}{N}\right)^2} ]

The squared midpoints were (25,225,625,1225,2025)

Multiplication by frequency produced:

(2\times25=50)

(5\times225=1125)

(6\times625=3750)

(5\times1225=6125)

(2\times2025=4050)

The calculation was intended to confirm the direct-method result, (\sqrt{130})

Careful arithmetic was emphasized because the shortcut method contains larger intermediate values and subtraction

---

## Change of Origin and Change of Scale

Changing the origin simplifies calculations by subtracting a convenient constant from every observation

The example used a new deviation based on subtracting (15): [ d=x-15 ]

The resulting deviations were (-10,0,10,20,30)

Squared deviations were (100,0,100,400,900)

The frequency-weighted totals were: [ \sum fd=200,\qquad \sum fd^2=4600 ]

Applying the assumed-origin formula again yielded: [ \sigma=\sqrt{\frac{4600}{20}-\left(\frac{200}{20}\right)^2} =\sqrt{130} ]

Because every deviation was divisible by (10), the scale was changed using: [ d'=\frac{x-A}{10} ]

The simplified deviations became (-1,0,1,2,3)

Their frequency-weighted totals were: [ \sum fd'=20,\qquad \sum fd'^2=46 ]

Since the deviations were divided by (10), the resulting standard deviation had to be multiplied by (10): [ \sigma=10\sqrt{\frac{46}{20}-\left(\frac{20}{20}\right)^2} =10\sqrt{13} =\sqrt{130} ]

The lecture concluded that changing both the origin and scale reduces calculation effort without changing the final statistical result

## Classroom Clarifications

The teacher paused to address students who were having difficulty following the calculation

Students were encouraged to ask the teacher directly when a step was unclear rather than relying only on another student or mentor

Some interruptions concerned identifying students in the class and checking whether the explanation was understandable