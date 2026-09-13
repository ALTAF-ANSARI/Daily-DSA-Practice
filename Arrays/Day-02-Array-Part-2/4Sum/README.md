# 18. 4Sum

- **Day:** Day 02 — Array (Part 2)
- **Difficulty:** Medium
- **Platform:** LeetCode
- **Problem:** 4Sum

## Approach

Use **sorting + two nested loops + two pointers** to find all unique quadruplets whose sum equals `target`.

1. Sort the array.
2. Fix the first element using `i`.
3. Fix the second element using `j`.
4. Use `left` and `right` to find the remaining two elements.
5. If the sum equals `target`, store the quadruplet and skip duplicates.
6. If the sum is smaller than `target`, move `left` forward.
7. If the sum is larger than `target`, move `right` backward.
8. Use `long long` for the sum to safely handle integer overflow.

## Duplicate Handling

Duplicates are skipped at all four positions where necessary:

- Skip duplicate `nums[i]` values.
- Skip duplicate `nums[j]` values.
- After finding a valid quadruplet, skip duplicate `left` and `right` values.

This ensures that the result contains only unique quadruplets.

## Complexity

- **Time:** `O(n³)` — sorting takes `O(n log n)`, followed by two fixed loops and a linear two-pointer scan.
- **Space:** `O(1)` auxiliary space, excluding the output and the sorting implementation's internal stack.

## Key Concept

**4Sum extends the 3Sum pattern:** sort the array, fix two elements, then use two pointers for the remaining pair while carefully skipping duplicates.
