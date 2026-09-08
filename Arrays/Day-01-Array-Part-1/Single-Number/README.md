# 136. Single Number

**Day:** 1  
**Topic:** Arrays — Part 1  
**Difficulty:** Easy  
**Platform:** LeetCode  
**Problem:** https://leetcode.com/problems/single-number/

## Approach

Use the **XOR bitwise operation**.

The key XOR properties are:

- `x ^ x = 0`
- `x ^ 0 = x`
- XOR is commutative and associative.

Since every number appears exactly twice except one number, XORing all elements cancels every duplicate pair and leaves only the unique number.

For example:

`2 ^ 1 ^ 2 ^ 1 ^ 4 = 4`

## Complexity

- **Time:** `O(n)`
- **Space:** `O(1)`
