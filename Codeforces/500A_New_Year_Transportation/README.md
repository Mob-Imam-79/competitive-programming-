# 500A - New Year Transportation

## Codeforces Problem

- **Problem Number:** 500A
- **Problem Name:** New Year Transportation
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/500/A

## Problem Description

There are `n` cells arranged in a line, numbered from `1` to `n`.

You start at cell `1`. From cell `i`, you can move only to cell `i + a[i]`.

You are given the jump distances for the first `n-1` cells.

Determine whether it is possible to reach cell `t` starting from cell `1`.

## Example

### Input
```text
8 4
1 2 1 2 1 2 1
```

### Output
```text
YES
```

### Explanation

Starting from cell `1`:

- Cell 1 → Cell 2
- Cell 2 → Cell 4

Since we reach cell `4`, the answer is `YES`.

## Approach

Use simulation with a greedy traversal.

1. Start from cell `1`.
2. Move forward using the jump distance `a[i]`.
3. Continue until:
   - The current position becomes equal to `t`, or
   - The current position exceeds `t`.
4. If the position reaches `t`, print `YES`; otherwise, print `NO`.

## Algorithm

1. Read `n` and `t`.
2. Create an array `v` of size `n+1`.
3. Read the jump distances into positions `1` through `n-1`.
4. Initialize `ind = 1`.
5. While `ind` is less than or equal to `n` and `t`:
   - If `ind == t`, print `YES` and stop.
   - Otherwise, update `ind = ind + v[ind]`.
6. If the loop finishes without reaching `t`, print `NO`.

## Time Complexity

- **O(n)** — Each visited cell is processed at most once.

## Space Complexity

- **O(n)** — An array of size `n+1` stores the jump distances.

## Python Solution

```python
n, t = map(int, input().split())

v = [0] + list(map(int, input().split())) + [0]

ind = 1

while ind <= n and ind <= t:
    if ind == t:
        print("YES")
        break
    else:
        ind += v[ind]
else:
    print("NO")
```

## C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> v(n + 1, 0);

    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        v[i] = x;
    }

    int ind = 1;

    while (ind <= n && ind <= t) {
        if (ind == t) {
            cout << "YES";
            return 0;
        } else {
            ind += v[ind];
        }
    }

    cout << "NO";
    return 0;
}
```

## Key Concepts Used

- Array Traversal
- Simulation
- Greedy Approach
- Index Manipulation
- Conditional Statements

## Solution

Starting from the first cell, repeatedly jump according to the given distances. Since every jump moves forward, we only need to simulate the path until we reach the target cell or move beyond it.