# 50. Pow(x, n)

- **Day:** Day 01 — Array (Part 1)
- **Difficulty:** Medium
- **Platform:** LeetCode
- **Problem:** Pow(x, n)

## Approach

Use **recursive Binary Exponentiation (Fast Power)**.

1. If `n == 0`, return `1.0`.
2. Convert the exponent to `long long` so the negative case is safe, especially for `INT_MIN`.
3. For a negative exponent, use the reciprocal: `x^n = 1 / x^(-n)`.
4. Recursively calculate `x^(n/2)` once and store it in `half`.
5. If `n` is even, return `half * half`.
6. If `n` is odd, return `x * half * half`.

This reduces the number of multiplications from linear in `n` to logarithmic in `n`.

## Complexity

- **Time:** `O(log |n|)`
- **Space:** `O(log |n|)` due to recursive call stack

## Key Concept

**Binary Exponentiation:** repeatedly divide the exponent by 2 and reuse the result of the smaller exponent.
