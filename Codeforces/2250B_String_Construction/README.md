# 2250B - String Construction

## Codeforces Problem

- **Problem Number:** 2250B
- **Problem Name:** String Construction
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/2250/B

## Problem Description

Given two integers `n` and `k`, construct a binary string of length `n` according to the required conditions.

If it is possible to construct such a string, print it. Otherwise, print `-1`.

## Example

For:

```text
n = 5
k = 2
```

The constructed string is:

```text
11101
```

The string starts with `k + 1` ones and the remaining characters are added alternately.

Therefore, the answer is:

```text
11101
```

For:

```text
n = 3
k = 4
```

Since:

```text
k + 1 > n
```

the required string cannot be constructed.

Therefore, the answer is:

```text
-1
```

## Approach

The solution constructs the required binary string directly.

1. Read the number of test cases.
2. For each test case, read `n` and `k`.
3. Check whether `k + 1 <= n`.
4. If possible, add `k + 1` characters `1` to the string.
5. Fill the remaining positions by alternating between `0` and `1`.
6. Print the constructed string.
7. Otherwise, print `-1`.

## Algorithm

1. Read the number of test cases `t`.
2. For each test case:
   - Read `n` and `k`.
   - If `k + 1 <= n`:
     - Initialize an empty string `s1`.
     - Add `k + 1` characters `1`.
     - Add alternating `0` and `1` characters until the required length is reached.
     - Print `s1`.
   - Otherwise, print `-1`.

## Time Complexity

O(n) per test case.

The string is constructed by iterating through the required positions.

## Space Complexity

O(n).

The constructed string requires `O(n)` space.

## C++ Solution

The complete implementation is available in `solution.cpp`.

The solution uses a constructive approach by creating an initial block of `1`s and then alternating between `0` and `1`.

## Key C++ Concept Used

### String Construction

The solution first creates a block of `1`s:

```text
111
```

Then it adds alternating characters:

```text
0101
```

This allows the required string to be constructed directly without checking every possible binary string.

### Conditional Construction

The condition:

```text
k + 1 <= n
```

is checked before constructing the string.

If the condition is false, the solution prints:

```text
-1
```

## Solution

See `solution.cpp`.