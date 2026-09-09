# 11. Container With Most Water

- **Day:** Day 02 — Array (Part 2)
- **Difficulty:** Medium
- **Platform:** LeetCode
- **Problem:** Container With Most Water

## Approach

Use the **Two Pointer** technique with one pointer at each end of the array.

1. Start `left` at the first index and `right` at the last index.
2. The container width is `right - left`.
3. Its height is limited by the shorter of `height[left]` and `height[right]`.
4. Calculate the current area and update `maxarea`.
5. Move the pointer pointing to the shorter line, because keeping the shorter boundary cannot produce a larger area with a smaller width.
6. Continue until the two pointers meet.

## Formula

```text
Area = (right - left) × min(height[left], height[right])
```

## Complexity

- **Time:** `O(n)`
- **Space:** `O(1)`

## Key Concept

The two-pointer approach reduces the brute-force `O(n²)` pair search to a single `O(n)` traversal while preserving the possibility of finding the maximum area.
