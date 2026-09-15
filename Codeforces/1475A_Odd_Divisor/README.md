# 1475A - Odd Divisor

## Codeforces Problem

- **Problem Number:** 1475A
- **Problem Name:** Odd Divisor
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/1475/A

## Problem Description

Given an integer `x`, determine whether it has an **odd divisor greater than 1**.

If such an odd divisor exists, print `YES`.

Otherwise, print `NO`.

## Example

For:

x = 12

Remove all factors of `2`:

12 → 6 → 3

The remaining value is `3`, which is an odd divisor greater than `1`.

Therefore, the answer is:

YES

For:

x = 8

Remove all factors of `2`:

8 → 4 → 2 → 1

The remaining value is `1`, so there is no odd divisor greater than `1`.

Therefore, the answer is:

NO

## Approach

The solution repeatedly divides `x` by `2` while `x` is even.

1. Read the number of test cases.
2. For each test case, read `x`.
3. While `x` is divisible by `2`, divide `x` by `2`.
4. After removing all factors of `2`:
   - If `x == 1`, print `NO`.
   - Otherwise, print `YES`.
5. Repeat for all test cases.

## Algorithm

1. Read the number of test cases `n`.
2. For each test case:
   - Read `x`.
   - While `x % 2 == 0`, divide `x` by `2`.
   - If `x == 1`, print `NO`.
   - Otherwise, print `YES`.

## Time Complexity

O(log x) per test case.

Each division by `2` reduces the value of `x`, so the loop runs at most `O(log x)` times.

## Space Complexity

O(1).

Only a constant amount of extra space is used.

## C++ Solution

The complete implementation is available in `solution.cpp`.

The solution uses repeated division by `2` to remove all factors of `2` and checks whether an odd factor greater than `1` remains.

## Key C++ Concept Used

### Repeated Division

The loop:

```text
while(x % 2 == 0)
    x /= 2;
```

removes all factors of `2` from `x`.

For example:

```text
x = 40

40 → 20 → 10 → 5
```

The remaining value is `5`, which is greater than `1`, so `40` has an odd divisor greater than `1`.

### Modulo Operator

The modulo operator `%` is used to check whether `x` is divisible by `2`.

```text
x % 2 == 0
```

means that `x` is even.

## Solution

See `solution.cpp`.