# 74. Search a 2D Matrix

- **Day:** Day 02 — Array (Part 2)
- **Difficulty:** Medium
- **Platform:** LeetCode
- **Problem:** Search a 2D Matrix

## Approach

Treat the entire matrix as a **sorted 1D array** and apply binary search.

For a matrix with `n` rows and `m` columns, the virtual 1D index ranges from `0` to `n * m - 1`.

For a virtual index `mid`, convert it back to matrix coordinates:

- `row = mid / m`
- `col = mid % m`

Then compare `matrix[row][col]` with `target` and perform normal binary-search movement.

## Why This Works

The matrix satisfies the condition that each row is sorted and the first element of every row is greater than the last element of the previous row. Therefore, all elements can be viewed as one globally sorted sequence.

## Complexity

- **Time:** `O(log(n × m))`
- **Space:** `O(1)`

## Key Concept

**2D Binary Search:** Map a 1D binary-search index to a 2D matrix using division and modulo.
