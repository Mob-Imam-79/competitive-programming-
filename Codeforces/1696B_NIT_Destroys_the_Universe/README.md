# 1696B - NIT orz!

## Codeforces Problem

- **Problem Number:** 1696B
- **Problem Name:** NIT orz!
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/1696/B

## Problem Description

Given an array of integers, the task is to determine the minimum number of operations needed to make all elements equal to `0`.

In one operation, a non-empty contiguous subarray can be selected and `1` can be subtracted from every element in that subarray.

The goal is to find the minimum number of operations required.

## Example

For:

```text
Array = 1 1 0 1 1
```

There are two separate positive segments:

```text
1 1
```

and

```text
1 1
```

Therefore, the answer is:

```text
2
```

For:

```text
Array = 1 1 1
```

All positive elements form one continuous segment.

Therefore, the answer is:

```text
1
```

## Approach

The solution counts the number of separate positive segments in the array.

1. Read the number of test cases.
2. For each test case, read the array.
3. Track the position of the previous zero using `l`.
4. Use `r` to represent the current position.
5. Whenever a zero is found after a non-empty positive segment, increment `ans`.
6. After processing the entire array, check whether a positive segment remains and increment `ans`.
7. The answer cannot exceed `2`, so print `min(ans, 2)`.

## Algorithm

1. Read the number of test cases `a`.
2. For each test case:
   - Read `n`.
   - Initialize `ans = 0`, `l = -1`, and `r = 0`.
   - Process every element:
     - If `x == 0` and there are positive elements since the previous zero, increment `ans`.
     - If `x == 0`, update `l = r`.
     - Increment `r`.
   - After processing the array, if there are positive elements after the last zero, increment `ans`.
   - Print `min(ans, 2)`.

## Time Complexity

O(n) per test case.

Each element of the array is processed exactly once.

## Space Complexity

O(1).

The solution does not store the complete array and uses only a constant amount of extra space.

## C++ Solution

The complete implementation is available in `solution.cpp`.

The solution scans the array once and counts separate segments of positive values.

## Key C++ Concept Used

### Contiguous Positive Segments

A positive segment is a continuous group of elements greater than `0`.

For example:

```text
1 1 0 2 3 0 4
```

The positive segments are:

```text
1 1
2 3
4
```

The solution detects these segments by checking the distance between the current position `r` and the previous zero position `l`.

### `min()` Function

The answer is limited to `2`, so the solution uses:

```text
min(ans, 2)
```

This ensures that the printed answer never exceeds `2`.

## Solution

See `solution.cpp`.