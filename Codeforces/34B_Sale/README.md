# 34B - Sale

## Codeforces Problem

- **Problem Number:** 34B
- **Problem Name:** Sale
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/34/B

## Problem Description

Vasya wants to buy `m` items from a store.

Each item has a price that can be positive, zero, or negative.

A negative price means that Vasya can actually earn money by taking that item.

The task is to maximize the amount of money Vasya can earn by selecting at most `m` items.

## Example

For:

n = 5

m = 3

Prices:

-2 -1 5 4 3

After sorting:

-2 -1 3 4 5

The two negative prices provide a benefit:

2 + 1 = 3

Therefore, the maximum amount Vasya can earn is:

3

## Approach

The solution sorts all item prices in ascending order.

1. Read `n` and `m`.
2. Store all `n` prices in a vector.
3. Sort the vector in ascending order.
4. Check the first `m` prices.
5. If a price is negative or zero, add its positive value to `sm`.
6. Print the total amount earned.

Since negative prices appear first after sorting, the most beneficial items are considered first.

## Algorithm

1. Read `n` and `m`.
2. Store all `n` prices in a vector.
3. Sort the vector using `sort()`.
4. Initialize `sm = 0`.
5. Iterate through the first `m` elements.
6. If `v[i] <= 0`, add `-v[i]` to `sm`.
7. Print `sm`.

## Time Complexity

O(n log n).

Sorting the `n` prices takes `O(n log n)`, and checking the first `m` elements takes `O(m)`.

## Space Complexity

O(n).

The vector stores all `n` item prices.

## C++ Solution

The complete implementation is available in `solution.cpp`.

The solution uses sorting to place the most negative prices first and calculates the maximum possible earning from the first `m` items.

## Key C++ Concept Used

### Sorting

The `sort()` function arranges the prices in ascending order.

For example:

```text
5 -2 4 -1 3
```

After sorting:

```text
-2 -1 3 4 5
```

The negative prices appear first, making it easy to select the most profitable items.

### Negative Value Conversion

For a negative price, multiplying it by `-1` converts it into the amount of money earned.

For example:

```text
-5 × -1 = 5
```

Therefore, the code uses:

```text
sm += (-1 * v[i]);
```

to add the earning from a negative-priced item.

## Solution

See `solution.cpp`.