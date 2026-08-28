# Descriptive Statistics Lecture: Mode, Mean–Median–Mode Relation, Geometric Mean, and Harmonic Mean

August 17, 2026·11:06 AM·33m 29s

SummaryTranscriptNotes

Edit

## Overview: Descriptive Statistics Lecture

Statistics lesson covering mode, the mean–median–mode relationship, geometric mean, logarithmic calculation, and harmonic mean

Instructor and multiple students; individual identities are mostly unclear

Critical outcomes:

Mode is identified directly from the highest frequency in discrete data or the modal class in continuous data

The relation ( \text{Mode} = 3(\text{Median}) - 2(\text{Mean}) ) can find any one measure when the other two are known

Geometric mean is suitable for percentage changes; harmonic mean is suitable for rates and speeds

A zero observation prevents geometric and harmonic mean calculations according to the instructor

## Mode in Discrete and Continuous Frequency Distributions

**Discrete distribution**: The mode is the variable value with the maximum frequency

In the example, the maximum frequency is 13

The corresponding value of the variable is 4, so the mode is 4

**Continuous distribution**: The class interval with the highest frequency is called the modal class

For intervals such as 10–20, 20–30, 30–40, 40–50, and 50–60, the class 30–40 was identified as the modal class because its frequency was 13

**Mode formula for continuous data**: [ \text{Mode}=L+\frac{H(F_1-F_0)}{2F_1-F_0-F_2} ]

(L): lower limit of the modal class; here, (L=30)

(H): class interval; here, (H=40-30=10)

(F_1): frequency of the modal class; here, (F_1=13)

(F_0): frequency of the class immediately preceding the modal class; here, (F_0=12)

(F_2): frequency of the class immediately succeeding the modal class; here, (F_2=7)

Substitution gives: [ 30+\frac{10(13-12)}{2(13)-12-7} =30+\frac{10}{7} \approx31.4 ]

---

## Mean–Median–Mode Relationship and Class Assignment

**Empirical relationship**: [ \text{Mode}=3(\text{Median})-2(\text{Mean}) ]

Any one of mean, median, or mode can be calculated when the other two are known

Example with mode (=40) and mean (=35): [ 40=3(\text{Median})-2(35) ] [ 3(\text{Median})=110 ] [ \text{Median}=\frac{110}{3}\approx36.76 ]

A second prompt gave median (=40) and mode (=35), but the transcript does not show the completed calculation for the mean

The assessment assignment is expected to carry 10–15 marks and is being prepared during class

The instructor indicated that unclear material could be copied or made available in the evening; students were asked to clarify if they needed a photo

---

## Geometric Mean: Definition and Direct Examples

**Geometric mean for (n) observations**: [ GM=(x_1x_2x_3\cdots x_n)^{1/n} ]

For two observations: [ GM=\sqrt{x_1x_2} ]

Example with 2 and 8: [ GM=\sqrt{2\times8}=\sqrt{16}=4 ]

Example with 2, 4, and 8: [ GM=\sqrt[3]{2\times4\times8} =\sqrt[3]{64}=4 ]

Geometric mean is especially useful when data involves percentage increases or decreases

---

## Logarithmic Method for Large Geometric-Mean Calculations

Direct multiplication and root extraction become difficult when the number of observations is large, such as (n=10)

The logarithm rules introduced were: [ \log(m^n)=n\log m ] [ \log(mn)=\log m+\log n ] [ \log\left(\frac{m}{n}\right)=\log m-\log n ]

Taking logarithms of the geometric-mean formula: [ \log(GM)=\frac{1}{n}\log(x_1x_2\cdots x_n) ] [ \log(GM)=\frac{1}{n}\left(\log x_1+\log x_2+\cdots+\log x_n\right) ] [ GM=\text{antilog}\left(\frac{1}{n}\sum\log x\right) ]

The instructor explained that mobile calculators are not allowed in the examination, but necessary logarithm values would be provided

---

## Percentage-Increase Example and Zero Observations

Example percentage increases were 10% in the first year, 20% in the second year, and 30% in the third year

Starting from an assumed price of 100, the three corresponding values were taken as 110, 120, and 130

The logarithms used were approximately:

(\log 110\approx2.041)

(\log 120\approx2.079)

(\log 130\approx2.113)

Their sum was treated as 6.233; dividing by 3 gave approximately 2.078

The antilog was calculated as approximately 119.67

Relative to the starting value of 100, the resulting percentage increase was: [ 119.67-100=19.67% ]

Arithmetic-mean checks included:

Mean of 0 and 4 = 2

Mean of 0 and 100 = 50

Mean of 0 and 1000 = 500

The instructor stated that if any observation is zero, the geometric mean cannot be computed

---

## Harmonic Mean for Rates and Speeds

**Harmonic mean** is the reciprocal of the arithmetic mean of the reciprocals: [ HM=\frac{n}{\frac{1}{x_1}+\frac{1}{x_2}+\cdots+\frac{1}{x_n}} ]

For two observations: [ HM=\frac{2}{\frac{1}{x_1}+\frac{1}{x_2}} ]

Harmonic mean is used when the observations represent rates or speeds

For equal-distance travel at 30 km/h in one direction and 20 km/h in the return direction: [ HM=\frac{2}{\frac{1}{30}+\frac{1}{20}} =\frac{2}{\frac{5}{60}} =24\text{ km/h} ]

With 100 km travelled each way:

Forward time (=100/30)

Return time (=100/20)

Total distance (=200) km

Average speed (=) total distance divided by total time (=24) km/h

Average speed is not the same as simply taking the arithmetic mean of 30 km/h and 20 km/h

A zero speed creates a reciprocal term (1/0); the instructor stated that harmonic mean cannot be computed when any observation is zero

---

## Action items

**Instructor**: Copy or provide the unclear 10–15-mark assessment material in the evening for students who need it