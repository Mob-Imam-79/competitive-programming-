# 579A - Raising Bacteria

## Codeforces Problem

- **Problem Number:** 579A
- **Problem Name:** Raising Bacteria
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/579/A

## Problem Description

A scientist wants to produce exactly `n` bacteria.

Initially, there is one bacterium. Every day, the scientist can:

1. Double the number of bacteria in the test tube.
2. Add one new bacterium.

The task is to find the minimum number of bacteria that must be added to obtain exactly `n` bacteria.

## Example

### Input
```text
5
```

### Output
```text
2
```

### Explanation

- Start with 1 bacterium.
- Double it to get 2.
- Add 1 bacterium to get 3.
- Double it to get 6.

This overshoots 5, so instead consider the binary representation of 5 (`101`). It contains two set bits, meaning two additions are required.

## Approach

The key observation is that the minimum number of bacteria additions equals the number of set bits (`1`s) in the binary representation of `n`.

For example:

- `5` in binary = `101`
- Number of set bits = `2`
- Answer = `2`

We can calculate this using:
- C++: `__builtin_popcount(n)`
- Python: `n.bit_count()`

## Algorithm

1. Read integer `n`.
2. Convert `n` conceptually into its binary representation.
3. Count the number of bits equal to `1`.
4. Print the count.

## Time Complexity

- **O(log n)** — Counting the set bits takes time proportional to the number of binary digits.

## Space Complexity

- **O(1)** — Only a constant amount of extra memory is used.

## C++ Solution 1 - Manual Approach

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int bact = 0;
    int y = n;

    while (y != 1) {
        if (y % 2 == 0) {
            y /= 2;
        } else {
            break;
        }
    }

    if (y == 1) {
        cout << 1;
        return 0;
    }

    int x = n;

    while (x != 0) {
        int cnt = 0;
        int num = x;

        while (num != 1) {
            num /= 2;
            cnt++;
        }

        x -= (1 << cnt);
        bact++;
    }

    cout << bact;
    return 0;
}
```

## C++ Solution 2 - Built-in Function

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    cout << __builtin_popcount(n);

    return 0;
}
```

## Python Solution

```python
n = int(input())

print(n.bit_count())
```

## Key Concepts Used

- Binary Number System
- Bit Manipulation
- Set Bits
- `__builtin_popcount()`
- `bit_count()`

## Solution

The minimum number of additions required is equal to the number of set bits in `n`'s binary representation. Each set bit represents one bacterium that must be introduced, while doubling accounts for the powers of two.