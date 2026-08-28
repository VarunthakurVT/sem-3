# Mean Deviation and Standard Deviation for Grouped and Ungrouped Data

August 21, 2026·10:12 AM·31m 1s


## Overview

Statistics lecture on mean deviation, median, and standard deviation using frequency distributions and numerical examples

One instructor with multiple students; individual student identities are mentioned but speakers are not clearly identified

Critical outcomes:

Mean deviation for the grouped example is calculated from the mean and median

Standard deviation is computed through direct, shortcut, change-of-origin, and change-of-scale formulas

The instructor emphasizes selecting formulas based on whether the mean is fractional and whether observations are large

## Mean Deviation for Continuous Frequency Distribution

Continuous classes used in the example: 0–10, 10–20, 20–30, 30–40, and 40–50

Corresponding frequencies: 2, 5, 8, 4, and 1

Mid-values calculated as 5, 15, 25, 35, and 45

Mean calculation uses (f \times x), with the lecture giving a total frequency of 20 and a total (fx) of 470

Mean obtained as (470/20 = 23.5)

Mean deviation from the mean follows: [ \text{Mean Deviation}=\frac{1}{n}\sum f|x-\bar{x}| ]

Deviations are found by subtracting the mean from each mid-value:

(5-23.5=-18.5)

(15-23.5=-8.5)

(25-23.5=1.5)

(35-23.5=11.5)

(45-23.5=21.5)

Absolute values are used, so negative signs are ignored

Each absolute deviation is multiplied by its corresponding frequency

The lecture gives a weighted absolute-deviation total of 129 and obtains: [ \text{Mean Deviation from Mean}=\frac{129}{20}=6.45 ]

## Median and Mean Deviation from the Median

Cumulative frequencies are formed by successive addition:

2, 7, 15, 19, 20

Since (n=20), (n/2=10)

The first cumulative frequency greater than 10 is 15, so the median class is 20–30

Median formula presented: [ \text{Median}=L+h\left(\frac{n/2-C}{f}\right) ] where (L) is the lower class limit, (h) is the class width, (C) is the cumulative frequency before the median class, and (f) is the median-class frequency

Substitution uses:

(L=20)

(h=10)

(n/2=10)

(C=7)

(f=8)

Median calculated as: [ 20+10\left(\frac{10-7}{8}\right)=23.75 ] The transcript later states 28.75, creating an arithmetic inconsistency

Deviations from the median are calculated using (|x-\text{Median}|), followed by multiplication with the corresponding frequencies

The lecture gives a later total of 157.75 and divides by 20 to obtain the mean deviation from the median

Some subsequent deviation values and totals are inconsistent with the earlier median value; the main method remains absolute deviation from the median divided by total frequency

## Standard Deviation: Definition and Direct Method

Standard deviation is introduced as the positive square root of the arithmetic mean of the squared deviations from the mean

Formula for observations: [ \sigma=\sqrt{\frac{1}{n}\sum (x-\bar{x})^2} ]

Direct calculation procedure:

Find the mean

Compute (x-\bar{x})

Square each deviation

Add the squared deviations

Divide by (n)

Take the positive square root

Example observations are given as 2, 6, 8, 10, and 14, while one part of the transcript refers to 40

Using the stated five observations, the mean is 8

Deviations from the mean are (-6,-2,0,2,6)

The sum of deviations from the mean is zero, illustrating the mean’s defining property

Squared deviations are 36, 4, 0, 4, and 36

Their sum is 80, producing: [ \sigma=\sqrt{\frac{80}{5}}=\sqrt{16}=4 ]

## Shortcut Formula for Fractional Means

Direct deviations become inconvenient when the mean is fractional and observations are small

Shortcut formula presented: [ \sigma=\sqrt{\frac{\sum x^2}{n}-\left(\frac{\sum x}{n}\right)^2} ]

The lecture calculates squares for 2, 6, 8, 10, and 14:

(4,36,64,100,196)

Sum of squares: 400

Sum of observations is treated as 40

Substitution gives: [ \sigma=\sqrt{\frac{400}{5}-\left(\frac{40}{5}\right)^2} =\sqrt{80-64} =\sqrt{16}=4 ]

This produces the same standard deviation as the direct method

## Change of Origin and Change of Scale

Change of origin is recommended when the mean is fractional and the observations are large

A convenient assumed value near the center of the data is selected, such as 6 or 10

Deviations are recalculated from the assumed value: [ d=x-A ]

The corresponding formula is: [ \sigma=\sqrt{\frac{\sum d^2}{n}-\left(\frac{\sum d}{n}\right)^2} ]

Using assumed value 10, the lecture gives deviations such as (-8,-4,-2,0,4), with their sum and squared sum used to recover the same variance result

Change of scale is applied when deviations share a common divisor

Formula given: [ d=\frac{x-A}{h} ] and the final standard deviation is multiplied by (h)

With 2 as the common divisor, transformed deviations are shown as (-4,-2,-1,0,2)

The standard deviation is calculated using the transformed values and then multiplied by (H=2)

The instructor summarizes four practical cases:

Integer mean and small observations: direct formula

Fractional mean and small observations: shortcut formula

Fractional mean and large observations: change of origin

Common divisor in deviations: change of origin and scale

## Classroom Management and Student Names

The instructor repeatedly asks late-arriving or disruptive students to sit properly, stop talking, or move outside if they are not studying

Names mentioned near the end include Anu Sachiv, Sacham Sharma, Kshika, Gautam Aksha, Piyush, Sneha, Arushi, Sacham Thakur, Shivam, and Aryan