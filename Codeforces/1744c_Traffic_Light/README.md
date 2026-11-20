
# 1744C - Traffic Light

## Codeforces Problem

- **Problem:** [1744C - Traffic Light](https://codeforces.com/problemset/problem/1744/C)
- **Platform:** Codeforces
- **Contest:** Codeforces Round 828 (Div. 3)
- **Rating:** 1000
- **Tags:** Implementation, Two Pointers, Binary Search
- **Languages:** Python, C++

---

## Problem Description

You are given a circular traffic light represented by a string `s` of length `n`, containing three characters:

- `r` - Red
- `y` - Yellow
- `g` - Green

The traffic light repeats its sequence after every `n` seconds.

You are also given a character `c`, representing the current color of the traffic light.

Your task is to find the **maximum waiting time** required to reach the next green light among all positions where the current color is `c`.

If `c` is already `g`, the answer is `0`.

---

## Example

**Input:**
```text
6
5 r
rggry
1 g
g
3 r
rrg
5 y
yrrgy
7 r
rgrgyrg
9 y
rrrgyyygy
```

**Output:**
```text
3
0
2
4
1
4
```

**Explanation:**

For the first test case:

- String: `rggry`
- Current color: `r`
- The first `r` reaches green after 1 second.
- The second `r` reaches green after 3 seconds.

Therefore, the maximum waiting time is **3 seconds**.

---

## Approach

The traffic light follows a circular sequence, so the next green light may appear after the end of the original string.

To handle this, we duplicate the string:

```cpp
string s1 = s + s;
```

This allows us to check the next green light without manually handling circular indexing.

We traverse the doubled string from right to left and maintain:

- `pos`: Position of the nearest green light found so far.
- `mx`: Maximum waiting time.

Whenever we encounter `g`, update `pos`.

Whenever we encounter the required character `c`, calculate:

```cpp
pos - i
```

Update the maximum waiting time.

If `c == 'g'`, the answer is immediately `0`.

---

## Algorithm

1. Read the number of test cases `t`.
2. For each test case, read `n`, `c`, and string `s`.
3. If `c == 'g'`, print `0` and continue.
4. Duplicate the string: `s1 = s + s`.
5. Initialize `mx = 0` and `pos = -1`.
6. Traverse `s1` from right to left:
   - If `s1[i] == 'g'`, update `pos = i`.
   - If `s1[i] == c` and `pos != -1`, update `mx = max(mx, pos - i)`.
7. Print `mx`.
8. Repeat for all test cases.

---

## Time Complexity

- **Time Complexity:** O(n) per test case.

  The doubled string has length `2n`, and we traverse it only once.

- **Space Complexity:** O(n) per test case.

  We create an additional doubled string of length `2n`.

---

## Python Solution

```python
t = int(input())

while t > 0:
    n, ch = input().split()
    n = int(n)

    s = input()
    s1 = s + s

    if ch == 'g':
        print(0)
        t -= 1
        continue

    mx = 0
    pos = -1

    for i in range(len(s1) - 1, -1, -1):
        if s1[i] == 'g':
            pos = i
        elif s1[i] == ch and pos != -1:
            mx = max(mx, pos - i)

    print(mx)

    t -= 1
```

---

## C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        char ch;

        cin >> n;
        cin >> ch;

        string s;
        cin >> s;

        string s1 = s + s;

        if(ch == 'g')
        {
            cout << 0 << endl;
            continue;
        }

        int mx = 0;
        int pos = -1;

        for(int i = s1.size() - 1; i >= 0; i--)
        {
            if(s1[i] == 'g')
            {
                pos = i;
            }
            else if(s1[i] == ch && pos != -1)
            {
                mx = max(mx, pos - i);
            }
        }

        cout << mx << endl;
    }

    return 0;
}
```

---

## Key Concepts Used

- String Manipulation
- Circular Array / Circular String
- String Duplication
- Reverse Traversal
- Greedy Approach
- Maintaining Nearest Position
- Maximum Value Calculation

---

## Solution

The main idea is to **duplicate the circular string and traverse it from right to left**.

By maintaining the position of the nearest green light, we can calculate the waiting time for every occurrence of the required color in a single traversal.

This avoids repeatedly searching for the next green light and gives an efficient **O(n) solution** per test case.
