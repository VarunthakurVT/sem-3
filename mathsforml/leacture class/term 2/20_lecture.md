# Binomial and Poisson Distributions: Estimation, Properties, and Examples

October 5, 2026·11:07 AM·37m 6s

### Play Audio

0:00

38:26

SummaryTranscriptNotes

Edit

A statistics class worked through fitting a binomial distribution to frequency data, introduced the Poisson distribution and its properties, and applied those properties to a mean-and-variance calculation.

## Fitting a Binomial Distribution to Observed Frequencies

**Observed data**: Values (X=0,1,2,3,4,5) had frequencies (4,8,18,32,28,10), totaling 100.

**Estimated mean**: The frequency-weighted sum was 270, so the sample mean was (270/100=2.7).

**Binomial parameters**: With (n=5), the mean relation (np=2.7) gives (p=0.54), and (q=1-p=0.46).

**Probability recurrence**: The class used the adjacent-probability ratio involving ((n-x)/(x+1)) and (p/q) to calculate successive binomial probabilities, starting from (P(X=0)=q^5).

**Expected frequencies**: Each probability was multiplied by the total frequency of 100. The resulting expected frequencies were approximately (2,12,28,33,20,5), for (X=0) through (5). Probabilities sum to 1, so expected frequencies sum to 100.

**Parameter context**: Here (n=5) because each packet has five items; (X=0) is possible when none are defective. A distinction was made between estimating from this data and a separate testing setup where (n) could be 6.

## Poisson Distribution: Conditions, Formula, and Examples

**Binomial-to-Poisson limit**: The binomial distribution approaches a Poisson distribution when (n) is very large, (p) is very small and approaches zero, and the mean (np) is represented by (\lambda).

**Probability mass function**: (P(X=x)=e^{-\lambda}\lambda^x/x!), for (x=0,1,2,\ldots). The class substituted (x=0,1,2) to illustrate the first probabilities.

**Examples**: Suggested situations included word-processing mistakes across many words, defective items in a large production context, road accidents across a large population, and rare wrong or scam calls.

**Finding (\lambda)**: If the probabilities of one and two successes are equal, setting (e^{-\lambda}\lambda=e^{-\lambda}\lambda^2/2) and solving gives (\lambda=2).

## Poisson Mean, Variance, and Mode

**Mean and variance**: Both are equal to (\lambda), so a Poisson variable with parameter (\lambda) has mean (\lambda) and variance (\lambda).

**Mode when (\lambda) is not an integer**: The distribution is unimodal, with mode equal to the integer part of (\lambda); for (\lambda=2.3), the mode is 2.

**Mode when (\lambda) is an integer**: The distribution is bimodal, with modes (\lambda-1) and (\lambda); for (\lambda=2), the modes are 1 and 2.

## Combining Independent Poisson Variables

**Given parameters**: Independent (X) and (Y) were modeled as Poisson variables. For (X), equal probabilities of one and two successes imply (\lambda=2), so (E[X]=2) and (\operatorname{Var}(X)=2).

**Parameter for (Y)**: Equal probabilities of two and three successes lead to (\mu=3), so (E[Y]=3) and (\operatorname{Var}(Y)=3).

**Linear combination**: Independence gives (E[X-2Y]=E[X]-2E[Y]=2-6=-4). Its variance is (\operatorname{Var}(X)+(-2)^2\operatorname{Var}(Y)=2+4(3)=14).