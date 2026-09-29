# 1799A - Recent Actions?

## Codeforces Problem

- **Problem Number:** 1799A
- **Problem Name:** Recent Actions
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/1799/A

## Problem Description

Given `x`, `y`, and `k`, repeatedly increase both `x` and `y` by `1` for `k` operations.

For every operation, add `y % x` to the answer before increasing both values.

The task is to calculate the total sum.

## Example

For:

```text
x = 2
y = 5
k = 3
```

The operations are:

```text
5 % 2 = 1
6 % 3 = 0
7 % 4 = 3
```

Therefore:

```text
1 + 0 + 3 = 4
```

The answer is:

```text
4
```

## Brute Force Approach

The brute-force solution directly performs all `k` operations.

1. Read `x`, `y`, and `k`.
2. For every operation:
   - Add `y % x` to `sm`.
   - Increment `x`.
   - Increment `y`.
3. Print `sm`.

### Brute Force Code

```cpp
#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        long long x, y, k;
        cin >> x >> y >> k;

        long long sm = 0;

        while (k--) {
            sm += y % x;
            x++;
            y++;
        }

        cout << sm << endl;
    }

    return 0;
}
```

## Optimized Approach

Since both `x` and `y` increase by `1` after every operation, their difference remains constant:

```text
d = y - x
```

Therefore:

```text
y % x = (x + d) % x = d % x
```

So instead of updating both `x` and `y`, we can work only with `x` and the constant difference `d`.

When `x > d`:

```text
d % x = d
```

Therefore, all remaining operations contribute exactly `d`.

The optimized solution processes only the initial values where `x <= d`, then handles all remaining operations together.

## Algorithm

1. Read `x`, `y`, and `k`.
2. If `x >= y`, the difference is non-positive and the answer is `0`.
3. Calculate:
   ```text
   d = y - x
   ```
4. While `x <= d` and operations remain:
   - Add `d % x` to `sm`.
   - Increment `x`.
   - Decrement `k`.
5. If operations remain:
   - Add `k * d` to `sm`.
6. Print `sm`.

## Time Complexity

### Brute Force

O(k).

The loop runs once for every operation.

### Optimized

O(log(y - x)) in the relevant range, and O(1) after `x > y - x`.

The optimized solution avoids processing all remaining operations individually.

## Space Complexity

O(1).

Only a constant number of variables are used.

## C++ Solution

### Brute Force Solution

The brute-force implementation is useful for understanding the direct simulation of the operations.

### Optimized Solution

The optimized implementation uses the constant difference:

```text
d = y - x
```

and avoids unnecessary iterations when:

```text
x > d
```

## Key C++ Concept Used

### Constant Difference

Since both values increase together:

```text
x → x + 1
y → y + 1
```

their difference remains unchanged:

```text
(y + 1) - (x + 1) = y - x
```

This allows the modulo expression to be simplified.

### Modulo Optimization

When:

```text
x > d
```

then:

```text
d % x = d
```

So instead of calculating the modulo for every remaining operation, we can directly add:

```text
k * d
```

to the answer.

## Solution

See `solution.cpp`.