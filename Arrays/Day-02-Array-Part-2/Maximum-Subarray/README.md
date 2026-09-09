# 53. Maximum Subarray

- **Day:** Day 02 — Array (Part 2)
- **Difficulty:** Medium
- **Platform:** LeetCode
- **Problem:** Maximum Subarray

## Approach

Use **Kadane's Algorithm** to find the maximum sum of a contiguous subarray in one pass.

1. Maintain `currsum` as the best subarray sum ending at the current position.
2. Add the current element to `currsum`.
3. Update `maxsum` with the best sum seen so far.
4. If `currsum` becomes negative, reset it to `0` because a negative running sum cannot improve a future subarray.
5. Initialize `maxsum` with `INT_MIN` so the solution also works when all elements are negative.

## Complexity

- **Time:** `O(n)`
- **Space:** `O(1)`

## Key Concept

**Kadane's Algorithm:** At every index, decide whether to continue the current subarray or start a new subarray from the current element.
