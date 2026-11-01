# 266B - Queue at the School

## Codeforces Problem

- **Problem Number:** 266B
- **Problem Name:** Queue at the School
- **Platform:** Codeforces
- **Link:** https://codeforces.com/problemset/problem/266/B

## Problem Description

There are `n` children standing in a queue. Each child is either a boy (`B`) or a girl (`G`).

During each second, every boy standing immediately in front of a girl swaps positions with her. These swaps happen simultaneously.

Given the initial queue and the number of seconds `t`, determine the final arrangement of the queue.

## Example

**Input:**
```text
5 1
BGGBG
```

**Output:**
```text
GBGGB
```

## Approach

Simulate the queue for `t` seconds.

For every second:
- Traverse the queue from left to right.
- If a boy (`B`) is immediately followed by a girl (`G`), swap their positions.
- Skip the next position after a swap to ensure that a child moves at most once during the same second.

Repeat this process for all `t` seconds.

## Algorithm

1. Read `n` and `t`.
2. Read the queue string `s`.
3. Repeat the following process `t` times:
   - Start traversing from index `0`.
   - If `s[i] == 'B'` and `s[i + 1] == 'G'`, swap them.
   - Increment `i` by `2` after a swap.
   - Otherwise, increment `i` by `1`.
4. Print the final queue.

## Time Complexity

- **Time:** `O(n × t)`
- **Space:** `O(n)` for the queue.

## Python Solution

```python
n, t = map(int, input().split())

s1 = input()
s = list(s1)

for j in range(t):
    i = 0

    while i < len(s) - 1:
        if s[i] == 'B' and s[i + 1] == 'G':
            s[i], s[i + 1] = s[i + 1], s[i]
            i += 2
        else:
            i += 1

s1 = "".join(s)
print(s1)
```

## C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    for (int j = 0; j < t; j++) {
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }

    cout << s;

    return 0;
}
```

## Key Concepts Used

### Simulation

The problem is solved by directly simulating the movement of boys and girls for each second.

### Simultaneous Swapping

After swapping a `B` and a `G`, the traversal skips the next index. This prevents a child from moving more than once in the same second.

## Solution

See `solution.py` or `solution.cpp`.