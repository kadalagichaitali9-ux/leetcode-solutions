# Merge Two Sorted Lists

## Difficulty
Easy

## LeetCode Link
https://leetcode.com/problems/merge-two-sorted-lists/

## Approach
Compare the current nodes of both sorted linked lists.

Attach the smaller node to the merged list and move to the next node.

Continue until one list becomes empty.

Finally, attach the remaining nodes of the other list.

## Time Complexity
O(n + m)

## Space Complexity
O(1)

## Test Cases

### Test Case 1

Input:
```text
List 1: 1 -> 3
List 2: 2 -> 4
