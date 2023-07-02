
# **2305. Fair Distribution of Cookies**

[Link to question](https://leetcode.com/problems/fair-distribution-of-cookies/)

## Question : 

You are given an integer array cookies, where cookies[i] denotes the number of cookies in the ith bag. You are also given an integer k that denotes the number of children to distribute all the bags of cookies to. All the cookies in the same bag must go to the same child and cannot be split up.

The unfairness of a distribution is defined as the maximum total cookies obtained by a single child in the distribution.

Return the minimum unfairness of all distributions.

## Solution : 

- Think of all possible solutions using recursion.
- Next think of any path that are redundant.
- Here the path in which any of the children will not get any candies bag is discarded as it will not lead to minimum Unfairness.

## Note :
 - This question similar to **956.Tallest billboard**

