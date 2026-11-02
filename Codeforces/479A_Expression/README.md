# 479A - Expression

## Codeforces Problem

- **Problem Number:** 479A
- **Problem Name:** Expression
- **Platform:** Codeforces
- **Link:** https://codeforces.com/problemset/problem/479/A

## Problem Description

You are given three positive integers `a`, `b`, and `c`.

Your task is to find the maximum value that can be obtained by placing arithmetic operations and parentheses between these three numbers while preserving their order.

The possible expressions are:

- `a + b + c`
- `a * b * c`
- `a + b * c`
- `a * (b + c)`
- `(a + b) * c`
- `a * b + c`

Print the maximum value.

## Example

**Input:**
```text
1
2
3
```

**Output:**
```text
9
```

**Explanation:**

The maximum value is obtained using:

`1 * (2 + 3) = 5`

Correction: For the input `1, 2, 3`, the maximum is `9`, obtained using:

`(1 + 2) * 3 = 9`

## Approach

Calculate all six possible expressions and store their results.

Use the `max()` function to find the largest value among them and print it.

## Algorithm

1. Read integers `a`, `b`, and `c`.
2. Calculate the six possible expressions:
   - `x1 = a + b * c`
   - `x2 = a * (b + c)`
   - `x3 = a * b * c`
   - `x4 = (a + b) * c`
   - `x5 = a + b + c`
   - `x6 = a * b + c`
3. Find the maximum among `x1`, `x2`, `x3`, `x4`, `x5`, and `x6`.
4. Print the maximum value.

## Time Complexity

- **Time:** `O(1)`
- **Space:** `O(1)`

## Python Solution

```python
a = int(input())
b = int(input())
c = int(input())

x1 = a + b * c
x2 = a * (b + c)
x3 = a * b * c
x4 = (a + b) * c
x5 = a + b + c
x6 = a * b + c

print(max(x1, x2, x3, x4, x5, x6))
```

## C++ Solution

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int x1 = a + b * c;
    int x2 = a * (b + c);
    int x3 = a * b * c;
    int x4 = (a + b) * c;
    int x5 = a + b + c;
    int x6 = a * b + c;

    int mx = max({x1, x2, x3, x4, x5, x6});

    cout << mx;

    return 0;
}
```

## Key Concepts Used

### Arithmetic Expressions

Different combinations of addition, multiplication, and parentheses can produce different results.

### Maximum Function

The `max()` function compares all possible results and returns the largest one.

## Solution

See `solution.py` or `solution.cpp`.

