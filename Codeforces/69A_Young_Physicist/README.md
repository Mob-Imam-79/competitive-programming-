# 69A - Young Physicist

## Codeforces Problem

- **Problem Number:** 69A
- **Problem Name:** Young Physicist
- **Platform:** Codeforces
- **Link:** https://codeforces.com/problemset/problem/69/A

## Problem Description

A body is in equilibrium if the sum of all force vectors acting on it is zero.

Given `n` force vectors `(x, y, z)`, determine whether the total force in all three directions is zero.

- If `fx = 0`, `fy = 0`, and `fz = 0`, print `YES`.
- Otherwise, print `NO`.

## Example

**Input:**
```text
3
4 1 7
-2 4 -1
-2 -5 -6
```

**Output:**
```text
YES
```

## Approach

Keep three variables `fx`, `fy`, and `fz` to store the sum of the x, y, and z components of all force vectors.

After processing all vectors:
- If all three sums are `0`, the body is in equilibrium.
- Otherwise, it is not in equilibrium.

## Algorithm

1. Read the number of force vectors `n`.
2. Initialize `fx = 0`, `fy = 0`, and `fz = 0`.
3. Read each vector `(x, y, z)`.
4. Add its components to `fx`, `fy`, and `fz`.
5. Check whether `fx == fy == fz == 0`.
6. Print `YES` if true; otherwise print `NO`.

## Time Complexity

- **Time:** `O(n)`
- **Space:** `O(1)`

## Python Solution

```python
import sys
import math

n = int(input())

fx = 0
fy = 0
fz = 0

while n > 0:
    x, y, z = map(int, input().split())
    fx += x
    fy += y
    fz += z
    n -= 1

if fx == fy == fz == 0:
    print("YES")
else:
    print("NO")
```

## Key Python Concept Used

### Summation of Vector Components

Each vector contributes independently to the x, y, and z directions. We accumulate each component separately and check whether all three totals are zero.

## Solution

See `solution.py`.