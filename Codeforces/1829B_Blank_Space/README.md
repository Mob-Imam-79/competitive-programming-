# 1829B - Blank Space

## Codeforces Problem

- **Problem Number:** 1829B
- **Problem Name:** Blank Space
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/1829/B

## Problem Description

Given an array containing `0`s and `1`s, find the maximum number of consecutive `0`s in the array.

For each test case, determine the longest continuous segment of zeros.

## Example

For:

```text
Array = 1 0 0 1 0 0 0 1
```

The consecutive zero groups are:

```text
0 0
0 0 0
```

The longest group contains `3` zeros.

Therefore, the answer is:

```text
3
```

## Approach

Maintain two variables:

- `cnt` — counts the current consecutive zeros.
- `mx` — stores the maximum number of consecutive zeros found.

1. Read the number of test cases.
2. For each test case, read the array size.
3. For every element:
   - If the element is `0`, increment `cnt`.
   - Otherwise, update `mx` and reset `cnt` to `0`.
4. After processing the array, update `mx` once more to handle trailing zeros.
5. Print `mx`.

## Algorithm

1. Read the number of test cases `n`.
2. For each test case:
   - Read `t`.
   - Initialize `cnt = 0` and `mx = 0`.
   - Repeat `t` times:
     - Read `x`.
     - If `x == 0`, increment `cnt`.
     - Otherwise:
       - Update `mx = max(mx, cnt)`.
       - Reset `cnt = 0`.
   - Update `mx = max(mx, cnt)`.
   - Print `mx`.

## Time Complexity

O(n) per test case.

Each element of the array is processed exactly once.

## Space Complexity

O(1).

Only a constant amount of extra space is used.

## C++ Solution

The complete implementation is available in `solution.cpp`.

The solution scans the array once and keeps track of the longest consecutive sequence of zeros.

## Key C++ Concept Used

### Counting Consecutive Elements

The variable `cnt` tracks the current sequence of consecutive zeros:

```text
if(x == 0)
    cnt++;
```

When a non-zero value is found, the current count is compared with the maximum:

```text
mx = max(mx, cnt);
cnt = 0;
```

### Handling Trailing Zeros

After the loop, `mx` is updated again:

```text
mx = max(mx, cnt);
```

This is necessary when the array ends with one or more zeros.

## Solution

See `solution.cpp`.