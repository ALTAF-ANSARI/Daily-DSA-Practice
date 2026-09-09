# 75. Sort Colors

- **Day:** Day 02 — Array (Part 2)
- **Difficulty:** Medium
- **Platform:** LeetCode
- **Problem:** Sort Colors

## Approach

Use the **Dutch National Flag Algorithm**, a three-pointer technique that sorts the array in one pass without using extra space.

Maintain three regions using `low`, `mid`, and `high`:

- `[0 ... low-1]` contains `0`s.
- `[low ... mid-1]` contains `1`s.
- `[mid ... high]` contains unprocessed elements.
- `[high+1 ... n-1]` contains `2`s.

### Rules

1. If `nums[mid] == 0`, swap it with `nums[low]`, then increment both `low` and `mid`.
2. If `nums[mid] == 1`, increment `mid`.
3. If `nums[mid] == 2`, swap it with `nums[high]` and decrement `high`. Do **not** increment `mid` because the swapped element has not been processed yet.

## Complexity

- **Time:** `O(n)`
- **Space:** `O(1)`

## Key Concept

The Dutch National Flag algorithm partitions an array containing three distinct values in a single traversal using constant extra space.
