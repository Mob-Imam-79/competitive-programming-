# 379A - New Year Candles

## Codeforces Problem

- **Problem Number:** 379A
- **Problem Name:** New Year Candles
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/379/A

## Problem Description

Vasya has `a` candles. Each candle burns for one hour and leaves behind one burnt-out candle.

He can exchange `b` burnt-out candles for one new candle.

The task is to calculate the maximum number of hours Vasya can keep the candles burning.

## Example

### Input
```text
5 2
```

### Output
```text
9
```

### Explanation

Initially, Vasya has 5 candles.

- Burn 5 candles: 5 hours, 5 burnt-out candles.
- Exchange 4 burnt-out candles for 2 new candles, with 1 remaining.
- Burn 2 candles: 2 more hours, 3 burnt-out candles.
- Exchange 2 burnt-out candles for 1 new candle, with 1 remaining.
- Burn 1 candle: 1 more hour.
- Now there are 2 burnt-out candles, so exchange them for 1 new candle.
- Burn the final candle: 1 more hour.

Total burning time = 5 + 2 + 1 + 1 = 9 hours.

## Approach

Use a simulation based on integer division and modulo.

For every iteration:

- `div = a // b` gives the number of new candles obtained through exchanges.
- `remin = a % b` gives the remaining burnt-out candles.
- Each exchange produces `b` burnt-out candles after burning the new candle, so add `div * b` to the total.
- Update the available burnt-out candles using `a = div + remin`.

If `div == 0`, no more exchanges are possible. Add the remaining candles and stop.

## Algorithm

1. Read `a` and `b`.
2. Initialize `hr = 0`.
3. While `a != 0`:
   - Calculate `div = a // b`.
   - Calculate `remin = a % b`.
   - If `div == 0`:
     - Add `remin` to `hr`.
     - Stop the loop.
   - Otherwise:
     - Add `div * b` to `hr`.
     - Update `a = div + remin`.
4. Print `hr`.

## Time Complexity

- **O(log_b a)** — The number of available candles decreases through repeated exchanges.

## Space Complexity

- **O(1)** — Only a constant number of variables are used.

## Python Solution

```python
a, b = map(int, input().split())

hr = 0

while a != 0:
    div = a // b
    remin = a % b

    if div == 0:
        hr += remin
        break

    hr += div * b
    a = div + remin

print(hr)
```

## C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int hr = 0;

    while (a != 0) {
        int div = a / b;
        int remin = a % b;

        if (div == 0) {
            hr += remin;
            break;
        }

        hr += div * b;
        a = remin + div;
    }

    cout << hr << endl;

    return 0;
}
```

## Key Concepts Used

- Simulation
- Integer Division
- Modulo Operator (`%`)
- Greedy Approach
- While Loop

## Solution

The problem is solved by repeatedly exchanging burnt-out candles for new candles.

Integer division calculates how many new candles can be obtained, while the modulo operator keeps track of the remaining burnt-out candles.

The process continues until no further exchange is possible. The accumulated burning time gives the final answer