# Statistics Lecture: AM–GM–HM Inequality and Measures of Dispersion


## Overview

Statistics lecture covering inequalities among averages and the main measures of dispersion

One instructor addressing a class of students; individual student names are not identified

Critical outcomes:

AM ≥ GM ≥ HM, with equality only when all observations are equal

Dispersion measures variability that central tendency alone cannot show

Range must be calculated consistently when comparing multiple data series

Mean deviation uses absolute deviations and is minimum when measured from the median

## Arithmetic, Geometric, and Harmonic Means

For observations such as 2 and 8:

Arithmetic mean: ((2+8)/2=5)

Geometric mean: (\sqrt{2\times8}=4)

Harmonic mean: (2/(1/2+1/8)=3.2)

The relationship among the three means is:

Arithmetic mean ≥ geometric mean ≥ harmonic mean

Equality holds only when all observations are the same.

For two equal observations, 5 and 5:

Arithmetic mean = 5

Geometric mean = 5

Harmonic mean = 5

When observations are not all equal, the relationship becomes a strict inequality: AM > GM > HM

---

## Why Measures of Dispersion Are Needed

Three data series were used to show why the mean is insufficient:

First series: 10, 10, 10, 10, 10

Second series: 8, 9, 10, 11, 12

Third series: 1, 5, 10, 15, 20

Each series has five observations and a mean of 10, but their variability differs considerably.

The first series has no variation because every observation equals 10.

The second series has moderate variation, with observations from 8 to 12.

The third series has much greater variation, with observations extending from 1 to 20.

Measures of central tendency should therefore be supported by measures of dispersion.

Dispersion measures the variability or spread within a data set.

## Properties of a Good Measure of Dispersion

Simple computation and easy interpretation

Based on every observation in the data set

Properly defined through a clear formula

Not excessively affected by extreme values

Suitable for further mathematical treatment, including calculation of a combined measure for different series

Stable under sampling

The main measures introduced were:

Range

Quartile deviation

Mean deviation

Standard deviation

---

## Range and Consistent Calculation Across Series

Range is the difference between the maximum and minimum values.

For the first series, 10, 10, 10, 10, 10:

Maximum = 10

Minimum = 10

Range = 0

For the second series, 8, 9, 10, 11, 12:

Range = 12 − 8 = 4

For the third series, the range was described using its maximum and minimum values; the transcript contains an inconsistent spoken value while illustrating the calculation.

For a continuous frequency distribution with classes such as 0–10 through 90–100, two methods were explained:

**Midpoint method**

Midpoint of the first class = 5

Midpoint of the last class = 95

Range = 95 − 5 = 90

**Class-limit method**

Upper limit of the last class = 100

Lower limit of the first class = 0

Range = 100 − 0 = 100

The two methods produce different values, so the same method must be applied to every series being compared. A midpoint-based range should be compared only with other midpoint-based ranges; the same consistency applies to the class-limit method.

---

## Quartile Deviation

Quartiles divide ordered data into four equal parts.

Three quartile values are determined:

(Q_1): first quartile

(Q_2): second quartile, corresponding to the median

(Q_3): third quartile

Quartile deviation is calculated as:

[  
\text{Quartile Deviation}=\frac{Q_3-Q_1}{2}  
]

It measures the spread of the middle 50% of observations.

---

## Mean Deviation and Absolute Deviations

Mean deviation is the arithmetic mean of the absolute deviations of observations from a selected average.

The reference average may be:

Mean

Median

Mode

Geometric mean

Harmonic mean

General form:

[  
\text{Mean Deviation}=\frac{1}{N}\sum |x-A|  
]

where (A) is the selected average.

Absolute value or modulus removes the negative sign, so deviations such as −3 and +3 both contribute 3.

For the data set 1, 2, 4, 5, 8, the mean is 4.

The sum of deviations from the mean is always zero:

[  
\sum(x-\bar{x})=0  
]

Absolute deviations from the mean were shown as 3, 2, 0, 1, and 4, giving a total of 10.

Mean deviation from the mean:

[  
10/5=2  
]

Mean deviation is minimum when deviations are measured from the median.

## Mean Deviation for a Discrete Frequency Distribution

In a frequency distribution, the total number of observations is represented by capital (N), and each absolute deviation is multiplied by its corresponding frequency.

The mean is calculated using:

[  
\bar{x}=\frac{\sum fx}{N}  
]

In the illustrated example:

(\sum fx=129)

(N=30)

Mean (=129/30=4.3)

Deviations were calculated using (x-4.3), converted to absolute values, and multiplied by their frequencies.

The sum of frequency-weighted absolute deviations was given as 42.2.

Mean deviation from the mean:

[  
42.2/30\approx1.400  
]

## Mean Deviation from the Median and Mode

To find the median in the discrete frequency example, cumulative frequencies were calculated:

2, 7, 17, 26, 30

Since (N/2=15), the first cumulative frequency greater than 15 is 17.

The corresponding variable value is 4, so the median is 4.

Absolute deviations from the median were multiplied by their frequencies:

Contributions included 6, 10, 0, 9, and 16

Their total was stated as 41

Mean deviation from the median:

[  
41/30\approx1.367  
]

The mode is the value with the highest frequency.

In the example, the value 4 was identified as the mode because it occurred for the greatest number of students.

The instructor began to address deviation from the mode, but the transcript ends before the full calculation is completed.