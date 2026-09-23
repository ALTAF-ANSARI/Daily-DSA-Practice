# 31. Next Permutation

- **Day:** Day 03 — Array (Part 3)
- **Difficulty:** Medium
- **Platform:** LeetCode
- **Problem:** Next Permutation

## Approach

Use the standard **Next Permutation** algorithm:

1. Find the first index `i` from the right such that `nums[i] < nums[i + 1]`. This is the **pivot**.
2. If no such index exists, the array is in descending order, so reverse the entire array to obtain the smallest permutation.
3. Find the first index `j` from the right such that `nums[j] > nums[i]`.
4. Swap the pivot with `nums[j]`.
5. Reverse the suffix from `i + 1` to the end. Since the suffix was in descending order, reversing it produces the smallest possible suffix.

## Complexity

- **Time:** O(n)
- **Space:** O(1)

## Key Concept

Find the rightmost position where the permutation can be increased, make the smallest possible increase there, then arrange the remaining suffix in ascending order.
