# Min Stack

## Difficulty
Medium

## LeetCode Link
https://leetcode.com/problems/min-stack/

## Approach
Use a stack to store integer values.

The push operation adds a value to the stack.

The pop operation removes the top value.

The top operation returns the top value.

The getMin operation checks all values in the stack and returns the smallest value.

## Time Complexity
Push: O(1)

Pop: O(1)

Top: O(1)

Get Minimum: O(n)

## Space Complexity
O(n)

## Test Cases

### Test Case 1

Operations:
```text
push(-2)
push(0)
push(-3)
getMin()
pop()
top()
getMin()