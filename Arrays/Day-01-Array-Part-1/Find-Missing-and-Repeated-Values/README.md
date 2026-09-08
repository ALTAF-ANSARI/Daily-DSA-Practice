# 2965. Find Missing and Repeated Values

**Day:** 1  
**Topic:** Arrays — Part 1  
**Difficulty:** Easy  
**Platform:** LeetCode  
**Problem:** https://leetcode.com/problems/find-missing-and-repeated-values/

## Approach

Use an `unordered_set` to detect the repeated value and the sum of all grid elements to determine the missing value.

Let:
- `a` = repeated value
- `b` = missing value
- `expectedSum` = sum of integers from `1` to `n²`
- `actualSum` = sum of all values present in the grid

Because the repeated value appears one extra time and the missing value is absent:

`actualSum = expectedSum + a - b`

Therefore:

`b = expectedSum - actualSum + a`

The grid is traversed once to calculate the actual sum and identify the repeated value.

## Complexity

Let `N = n²`, the total number of cells.

- **Time:** `O(N)` average
- **Space:** `O(N)` for the hash set
