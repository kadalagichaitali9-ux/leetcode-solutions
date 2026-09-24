# Best Time to Buy and Sell Stock

**Difficulty:** Easy

**LeetCode Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Approach

Keep track of the minimum stock price seen so far. For every price, calculate the possible profit by subtracting the minimum price from the current price. Update the maximum profit whenever a larger profit is found.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Test Cases

### Test Case 1 - Typical Case

**Input:**
```text