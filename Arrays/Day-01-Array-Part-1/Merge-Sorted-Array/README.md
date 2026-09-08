# 88. Merge Sorted Array

**Day:** 1  
**Topic:** Arrays — Part 1  
**Difficulty:** Easy  
**Platform:** LeetCode  
**Problem:** https://leetcode.com/problems/merge-sorted-array/

## Approach

Use the **two-pointer approach from the end**.

`nums1` already has enough space to store all elements. Start with:
- `i` at the last valid element of `nums1`.
- `j` at the last element of `nums2`.
- `k` at the last position of `nums1`.

Compare `nums1[i]` and `nums2[j]` and place the larger value at `nums1[k]`. Moving from right to left prevents overwriting elements of `nums1` that still need to be processed.

After the main loop, copy any remaining elements from `nums2` into `nums1`.

## Complexity

- **Time:** `O(m + n)`
- **Space:** `O(1)`
