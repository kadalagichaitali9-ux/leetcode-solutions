# Valid Parentheses

**Difficulty:** Easy

**LeetCode Link:** https://leetcode.com/problems/valid-parentheses/

## Approach

Use a stack to store opening brackets. When a closing bracket is found, compare it with the most recent opening bracket. If they match, remove the opening bracket from the stack. At the end, the stack must be empty for the parentheses to be valid.

## Time Complexity

O(n)

## Space Complexity

O(n)

## Test Cases

### Test Case 1 - Typical Case

**Input:**
```text
s = "()[]{}"
