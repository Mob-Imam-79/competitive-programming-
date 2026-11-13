# 1913B - Swap and Delete

## Codeforces Problem

- **Problem Number:** 1913B
- **Problem Name:** Swap and Delete
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/1913/B

## Problem Description

You are given a binary string `s` consisting of `0`s and `1`s.

You can perform the following operations:

1. Choose two different positions and swap their characters.
2. Delete one character from the string.

The goal is to obtain a string where no character is equal to the character at the same position in the original string, while minimizing the number of deletions.

## Example

### Input
```text
3
0000
1111
0101
```

### Output
```text
4
4
0
```

### Explanation

For `0000`, there are no `1`s available to match the original `0`s. Therefore, all four characters must be deleted.

For `0101`, the characters can be rearranged to satisfy the required condition without deleting anything.

## Approach

Use a greedy approach based on counting zeros and ones.

1. Count the total number of zeros and ones in the string.
2. Traverse the string from left to right.
3. For each character:
   - If it is `0` and at least one `1` remains, consume one `1`.
   - If it is `1` and at least one `0` remains, consume one `0`.
   - Otherwise, stop.
4. The remaining characters must be deleted.
5. Print the number of remaining characters.

## Algorithm

1. Read the number of test cases `t`.
2. For each test case:
   - Read binary string `s`.
   - Count zeros and ones.
   - Initialize `i = 0`.
   - Traverse the string:
     - If `s[i] == '0'` and `ones > 0`, decrement `ones`.
     - Else if `s[i] == '1'` and `zeros > 0`, decrement `zeros`.
     - Otherwise, stop.
   - Calculate `len(s) - i`.
   - Print the result.

## Time Complexity

- **O(n)** per test case — Counting and traversing the string each take linear time.

## Space Complexity

- **O(1)** auxiliary space — Only counters and an index are used, excluding the input string.

## Python Solution

```python
t = int(input())

for _ in range(t):
    s = input().strip()

    zeros = s.count('0')
    ones = s.count('1')

    i = 0

    for i in range(len(s)):
        if s[i] == '0' and ones > 0:
            ones -= 1

        elif s[i] == '1' and zeros > 0:
            zeros -= 1

        else:
            break
    else:
        i = len(s)

    print(len(s) - i)
```

## C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int zeros = 0, ones = 0;

        for (char c : s) {
            if (c == '0') zeros++;
            else ones++;
        }

        int i = 0;

        for (; i < s.size(); i++) {
            if (s[i] == '0' && ones > 0) {
                ones--;
            }
            else if (s[i] == '1' && zeros > 0) {
                zeros--;
            }
            else {
                break;
            }
        }

        cout << s.size() - i << endl;
    }

    return 0;
}
```

## Key Concepts Used

- Greedy Algorithm
- Binary Strings
- Frequency Counting
- String Traversal
- Two Counters

## Solution

At every position, we need a character opposite to the original character. We greedily consume an available opposite character. Once no opposite character remains, all remaining characters must be deleted.

The number of remaining characters gives the minimum number of deletions.