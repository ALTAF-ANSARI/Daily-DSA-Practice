# 15. 3Sum

- **Day:** Day 02 — Array (Part 2)
- **Difficulty:** Medium
- **Platform:** LeetCode
- **Problem:** 3Sum

## Approach

Use **sorting + two pointers** to find all unique triplets whose sum is `0`.

1. Sort the array.
2. Fix `nums[i]` as the first element of the triplet.
3. Use `left` and `right` pointers to search for the other two elements.
4. If the sum is `0`, store the triplet and skip duplicate values.
5. If the sum is less than `0`, move `left` forward to increase the sum.
6. If the sum is greater than `0`, move `right` backward to decrease the sum.
7. Skip duplicate values for `i`, `left`, and `right` so the result contains only unique triplets.

## Why It Works

After sorting, moving `left` right increases the sum, while moving `right` left decreases the sum. This lets each fixed `i` be processed in linear time instead of checking every pair with a nested loop.

## Complexity

- **Time:** `O(n²)` — sorting takes `O(n log n)` and the two-pointer search takes `O(n²)`.
- **Space:** `O(1)` auxiliary space, excluding the output and the sorting implementation's internal stack.

## Key Concept

**Sort + Fix One Element + Two Pointers + Duplicate Skipping** is the standard optimized pattern for 3Sum.
