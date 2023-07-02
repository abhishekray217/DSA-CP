# **1601. Maximum Number of Achievable Transfer Requests**

[Link to Problem](https://leetcode.com/problems/maximum-number-of-achievable-transfer-requests/)

## Problem Statement

We have n buildings numbered from `0` to `n - 1`. Each building has a number of employees. It's transfer season, and some employees want to change the building they reside in.

You are given an array requests where `requests[i]` = `[from i, to i]` represents an employee's request to transfer from building `from i` to building `to i`.

All buildings are full, so a list of requests is achievable only if for each building, the net change in employee transfers is zero. This means the number of employees leaving is equal to the number of employees moving in. 
>For example if n = 3 and two employees are leaving building 0, one is leaving building 1, and one is leaving building 2, there should be two employees moving to building 0, one employee moving to building 1, and one employee moving to building 2.

Return the maximum number of achievable requests.

### Constraints:

- 1 <= n <= 20
- 1 <= requests.length <= 16
- requests[i].length == 2
- 0 <= fromi, toi < n

## Solution

Intuition : In brute force approach we could think of a solution in which we either take a take a request or not take a request. So for each request we have two possibilities and we are going to have at max 16 requests so time complexity `O(2^16)`. If we serve the request we will update out count which will store number of requests served else we will just go for next request in which we will have the same 2 scenarios.

we would be having an array indegree in which we are going to decrement values of from building and increment values of to building.

## Note :

First a graph approach strike my mind.In graph what I was planning to do is
- Find distinct component of the graph.
- Then in each component, find the largest cycle and calculate its length.
- Sum up length of each cycles.

I am not sure of solution so I dropped the Idea
