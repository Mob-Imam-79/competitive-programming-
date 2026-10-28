# 1742A - Sum

## Codeforces Problem

- **Problem Number:** 1742A
- **Problem Name:** Sum
- **Platform:** Codeforces
- **Link:** https://codeforces.com/problemset/problem/1742/A

## Problem Description

You are given three integers `a`, `b`, and `c`.

Determine whether one of the three integers is equal to the sum of the other two.

- If `a + b = c`, `b + c = a`, or `c + a = b`, print `YES`.
- Otherwise, print `NO`.

## Example

**Input:**
```text
3
1 2 3
3 2 1
1 5 3
```

**Output:**
```text
YES
YES
NO
```

## Approach

For each test case, check all three possible combinations:

- `a + b == c`
- `b + c == a`
- `c + a == b`

If any condition is true, print `YES`. Otherwise, print `NO`.

## Algorithm

1. Read the number of test cases `t`.
2. For each test case:
   - Read integers `a`, `b`, and `c`.
   - Check whether any two numbers add up to the third.
   - Print `YES` if a condition is satisfied; otherwise, print `NO`.

## Time Complexity

- **Time:** `O(1)` per test case
- **Overall Time:** `O(t)`

## Space Complexity

- **Space:** `O(1)`

## Python Solution

```python
n = int(input())

while n != 0:
    a, b, c = map(int, input().split())

    if a + b == c or b + c == a or c + a == b:
        print("YES")
    else:
        print("NO")

    n -= 1
```

## Key Python Concept Used

### Conditional Statements

The `or` operator checks whether at least one of the three conditions is true. If any condition is satisfied, the program prints `YES`.

## Solution

See `solution.py`.