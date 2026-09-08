# 88. Merge Sorted Array

**Day:** 1  
**Topic:** Arrays — Part 1  
**Difficulty:** Easy  
**Platform:** LeetCode  
**Problem:** https://leetcode.com/problems/merge-sorted-array/

## Approach

Use the **two-pointer technique from the end**.

`nums1` already contains enough empty positions at the end to hold all elements of `nums2`. Start with three pointers:

- `i = m - 1` → last valid element of `nums1`
- `j = n - 1` → last element of `nums2`
- `k = m + n - 1` → last position of `nums1`

Compare `nums1[i]` and `nums2[j]`, and place the larger value at `nums1[k]`. Move the corresponding pointer backward.

Moving from right to left prevents overwriting elements of `nums1` that still need to be processed.

Finally, if elements remain in `nums2`, copy them into `nums1`. Elements remaining in the original portion of `nums1` are already in their correct positions.

## Complexity

- **Time:** `O(m + n)`
- **Space:** `O(1)`
