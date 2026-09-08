# 2965. Find Missing and Repeated Values

**Day:** 1  
**Topic:** Arrays — Part 1  
**Difficulty:** Easy  
**Platform:** LeetCode  
**Problem:** https://leetcode.com/problems/find-missing-and-repeated-values/

## Problem

You are given an `n x n` grid containing every integer from `1` to `n²` exactly once except that one value is repeated and one value is missing. Return the repeated value and the missing value.

## Approach

Use an `unordered_set` to detect the repeated value while calculating the actual sum of all grid elements.

Then calculate the expected sum of numbers from `1` to `n²`:

`expectedSum = n² × (n² + 1) / 2`

If `a` is the repeated value and `b` is the missing value:

`actualSum = expectedSum + a - b`

Therefore:

`b = expectedSum - actualSum + a`

## Complexity

- **Time:** `O(n²)`
- **Space:** `O(n²)`
