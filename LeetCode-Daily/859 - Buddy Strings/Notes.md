# **859. Buddy Strings**

[Link to question](https://leetcode.com/problems/buddy-strings/description/)

## Problem Statement 

Given two strings `s` and goal, return true if you can swap two letters in `s` so the result is equal to goal, otherwise, return `false`.

Swapping letters is defined as taking two indices `i` and `j` (0-indexed) such that `i != j` and swapping the characters at `s[i]` and `s[j]`.

>For example, swapping at indices 0 and 2 in "abcd" results in "cbad".

### Constraints:
- ```C++ 
    1 <= s.length, goal.length <= 2 * 104
    ```
- `s` and `goal` consist of lowercase letters.
 

## Solution : 

- If both strings have different size then they can never be equal so we need to return `false`
- If both strings are already equal then we will check if S contains two same characters or not. Here we are doing with the help of set data structure.
- After that we are checking if exactly in two indices of `S` there are different characters than `goal`. other than than that we were returning false.
- At last we are comparing the two index element s and goal. If it mathes the criteria then we return `true` else we are returning `false`

### Time Complexity: O(n)
