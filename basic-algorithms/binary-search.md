# Binary Search

**Difficulty:** Easy

**LeetCode Link:** https://leetcode.com/problems/binary-search/

## Approach

Binary Search is used on a sorted array. The algorithm checks the middle element and eliminates half of the search range after every comparison. If the middle element is smaller than the target, the search continues in the right half. Otherwise, it continues in the left half.

## Time Complexity

O(log n)

## Space Complexity

O(1)

## Test Cases

### Test Case 1 - Typical Case

**Input:**
```text
nums = [-1,0,3,5,9,12]
target = 9
