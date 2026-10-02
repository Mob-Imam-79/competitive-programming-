# 1878C - Vasilije in Cacak

## Codeforces Problem

- **Problem Number:** 1878C
- **Problem Name:** Vasilije in Cacak
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/1878/C

## Problem Description

Given three integers `n`, `k`, and `x`, determine whether it is possible to choose exactly `k` distinct integers from `1` to `n` such that their sum is exactly `x`.

The minimum possible sum is obtained by choosing the smallest `k` numbers:

```text
1 + 2 + ... + k
```

The maximum possible sum is obtained by choosing the largest `k` numbers:

```text
n + (n - 1) + ... + (n - k + 1)
```

If `x` lies between these two sums, the answer is `YES`. Otherwise, the answer is `NO`.

## Example

For:

```text
n = 5
k = 2
x = 7
```

Minimum sum:

```text
1 + 2 = 3
```

Maximum sum:

```text
5 + 4 = 9
```

Since:

```text
3 <= 7 <= 9
```

the answer is:

```text
YES
```

For:

```text
n = 5
k = 2
x = 10
```

The maximum possible sum is:

```text
5 + 4 = 9
```

Since `10 > 9`, the answer is:

```text
NO
```

## Approach

The solution checks whether `x` lies within the possible range of sums.

1. Calculate the minimum sum of `k` distinct numbers:
   `k * (k + 1) / 2`.
2. Calculate the maximum sum of `k` distinct numbers:
   `k * (2 * n - k + 1) / 2`.
3. If `x` is between the minimum and maximum sums, print `YES`.
4. Otherwise, print `NO`.

## Algorithm

1. Read the number of test cases `t`.
2. For each test case:
   - Read `n`, `k`, and `x`.
   - Calculate:
     ```text
     min_sum = k * (k + 1) / 2
     ```
   - Calculate:
     ```text
     max_sum = k * (2 * n - k + 1) / 2
     ```
   - If:
     ```text
     min_sum <= x <= max_sum
     ```
     print `YES`.
   - Otherwise, print `NO`.

## Time Complexity

O(1) per test case.

Only a constant number of arithmetic operations are performed.

## Space Complexity

O(1).

Only a constant amount of extra space is used.

## Python Solution

The complete implementation is available in `solution.py`.

The solution uses minimum and maximum possible sums to determine whether the target sum `x` can be achieved.

## Key Python Concept Used

### Minimum Sum

The smallest `k` numbers are:

```text
1, 2, 3, ..., k
```

Their sum is:

```text
k * (k + 1) // 2
```

### Maximum Sum

The largest `k` numbers are:

```text
n, n-1, ..., n-k+1
```

Their sum is:

```text
k * (2 * n - k + 1) // 2
```

### Range Checking

If:

```text
min_sum <= x <= max_sum
```

then a valid selection of `k` distinct numbers exists.

Otherwise, it is impossible.

## Solution

See `solution.py`.

