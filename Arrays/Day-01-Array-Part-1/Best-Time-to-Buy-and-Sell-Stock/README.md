# 121. Best Time to Buy and Sell Stock

**Day:** 1  
**Topic:** Arrays — Part 1  
**Difficulty:** Easy  
**Platform:** LeetCode  
**Problem:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Approach

Use a **one-pass greedy approach**.

Maintain:
- `minPrice` — the minimum stock price seen so far.
- `maxProfit` — the maximum profit possible using a buying day before the current selling day.

For each price:
1. Update `minPrice` with the lowest price seen so far.
2. Calculate the profit if we sell at the current price: `price - minPrice`.
3. Update `maxProfit` if this profit is larger.

This guarantees that the stock is bought before it is sold because `minPrice` only contains a price from an earlier or current position.

## Complexity

- **Time:** `O(n)`
- **Space:** `O(1)`
