# Maximum Subarray

**Difficulty:** Medium

**LeetCode Link:** https://leetcode.com/problems/maximum-subarray/

## Approach

Use Kadane's Algorithm to find the maximum sum of a contiguous subarray. Keep track of the current subarray sum and the maximum sum found so far. At each element, decide whether to extend the current subarray or start a new subarray.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Test Cases

### Test Case 1 - Typical Case

**Input:**
```text
nums = [-2,1,-3,4,-1,2,1,-5,4]
