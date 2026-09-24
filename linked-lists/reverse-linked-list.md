# Reverse Linked List

## Difficulty
Easy

## LeetCode Link
https://leetcode.com/problems/reverse-linked-list/

## Approach
Use three pointers: previous, current, and next.

For each node, reverse its next pointer so that it points to the previous node.

Continue until the end of the linked list is reached.

The previous pointer becomes the new head of the reversed list.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Test Cases

### Test Case 1

Input:
```text
1 -> 2 -> 3
