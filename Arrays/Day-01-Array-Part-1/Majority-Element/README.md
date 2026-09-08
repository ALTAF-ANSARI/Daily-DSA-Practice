# 169. Majority Element

**Day:** 1  
**Topic:** Arrays — Part 1  
**Difficulty:** Easy  
**Platform:** LeetCode  
**Problem:** https://leetcode.com/problems/majority-element/

## Problem

Given an array `nums` of size `n`, return the majority element.

The majority element is the element that appears more than `⌊n / 2⌋` times. You may assume that the majority element always exists in the array.

## Approach

Use the **Boyer-Moore Voting Algorithm**.

Maintain:
- `candidate` — the current possible majority element.
- `count` — its current vote count.

For every element:
1. If it matches the candidate, increase `count`.
2. Otherwise, decrease `count`.
3. When `count` becomes zero, choose the current element as the new candidate and reset the count to `1`.

Because the majority element occurs more than all other elements combined, it will remain as the final candidate.

## Complexity

- **Time:** `O(n)`
- **Space:** `O(1)`
