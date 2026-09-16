# 1374A - Multiply by 2, divide by 6

## Codeforces Problem

- **Problem Number:** 1374A
- **Problem Name:** Multiply by 2, divide by 6
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/1374/A

## Problem Description

You are given an integer `n`.

In one move, you can either:

- Multiply `n` by `2`.
- Divide `n` by `6` if it is divisible by `6`.

The task is to find the minimum number of moves needed to obtain `1` from `n`.

If it is impossible to obtain `1`, print `-1`.

## Example

For:

n = 12

We can perform the following operations:

12 → 2 → 4 → 8 → 16 → ...

This does not directly produce `1`.

Instead, using the valid sequence:

12 → 2

The value `2` cannot be divided by `6`, so this case is impossible.

Therefore, the answer is:

-1

For:

n = 6

We can divide by `6`:

6 → 1

Therefore, the answer is:

1

## Approach

The solution counts the powers of `2` and `3` in the prime factorization of `n`.

Suppose:

`n = 2^a × 3^b`

To reach `1`, every factor of `3` must be removed using division by `6`.

Each division by `6` removes one factor of `2` and one factor of `3`.

If there are more factors of `2` than factors of `3`, it is impossible because multiplication by `2` can only add factors of `2`.

If `n` contains any prime factor other than `2` or `3`, it is also impossible.

1. Read `n`.
2. Count the number of factors of `2`.
3. Count the number of factors of `3`.
4. Check whether any other prime factor remains.
5. If another factor remains, print `-1`.
6. If the number of factors of `2` is greater than the number of factors of `3`, print `-1`.
7. Otherwise, the minimum number of moves is:
   `cnt3 + (cnt3 - cnt2)`.

## Algorithm

1. Read the number of test cases `t`.
2. For each test case:
   - Read `n`.
   - If `n == 1`, print `0`.
   - Count all factors of `2` and store the count in `cnt2`.
   - Count all factors of `3` and store the count in `cnt3`.
   - If the remaining value is not `1`, print `-1`.
   - If `cnt2 > cnt3`, print `-1`.
   - Otherwise, calculate:
     `ans = cnt3 + (cnt3 - cnt2)`.
   - Print `ans`.

## Time Complexity

O(log n) per test case.

The solution repeatedly divides `n` by `2` and `3`, so the number of iterations is logarithmic with respect to `n`.

## Space Complexity

O(1).

Only a constant amount of extra space is used.

## C++ Solution

The complete implementation is available in `solution.cpp`.

The solution uses prime factorization to count the powers of `2` and `3` and determines whether the required sequence of operations is possible.

## Key C++ Concept Used

### Prime Factorization

The solution repeatedly divides `n` by `2` and `3` to determine its prime factors.

For example:

```text
n = 72

72 → 36 → 18 → 9
```

So there are three factors of `2`.

Then:

```text
9 → 3 → 1
```

So there are two factors of `3`.

Thus:

```text
cnt2 = 3
cnt3 = 2
```

Since `cnt2 > cnt3`, it is impossible to reach `1`.

### Counting Factors

The following loop counts the number of factors of `2`:

```text
while (x % 2 == 0) {
    cnt2++;
    x /= 2;
}
```

Similarly, the following loop counts the number of factors of `3`:

```text
while (x % 3 == 0) {
    cnt3++;
    x /= 3;
}
```

### Move Calculation

If:

```text
cnt2 <= cnt3
```

then the minimum number of moves is:

```text
ans = cnt3 + (cnt3 - cnt2)
```

The `cnt3` divisions by `6` remove all factors of `3`, while the additional `cnt3 - cnt2` multiplications by `2` compensate for the missing factors of `2`.

## Solution

See `solution.cpp`.