# 1791D - Distinct Split

## Codeforces Problem

- **Problem Number:** 1791D
- **Problem Name:** Distinct Split
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/1791/D

## Problem Description

You are given a string `s` of length `n`.

You need to split the string into two non-empty parts:

- A prefix `s1`.
- A suffix `s2`.

The score of a split is the sum of the number of distinct characters in both parts.

Find the maximum possible score among all valid splits.

## Example

### Input
```text
5
2
aa
7
abcabcd
5
aaaaa
6
abcdef
6
abccba
```

### Output
```text
2
7
2
6
6
```

### Explanation

For `abcabcd`, consider the split:

- Prefix: `abc`
- Suffix: `abcd`

Distinct characters in the prefix = 3.

Distinct characters in the suffix = 4.

Total score = 3 + 4 = 7.

## Approach

Use **Prefix and Suffix Arrays** with a Set.

The idea is to calculate the number of distinct characters:

1. In every prefix of the string.
2. In every suffix of the string.

Then try every possible split and calculate the combined score.

### Prefix Array

`pref[i]` stores the number of distinct characters from index `0` to `i`.

### Suffix Array

`suff[i]` stores the number of distinct characters from index `i` to `n-1`.

For every valid split at index `i`, calculate:

`pref[i] + suff[i+1]`

The maximum value is the answer.

## Algorithm

1. Read the number of test cases `t`.
2. For each test case:
   - Read `n` and string `s`.
   - Create two arrays `pref` and `suff` of size `n`.
3. Calculate prefix distinct counts:
   - Traverse from left to right.
   - Insert each character into a set.
   - Store the set size in `pref[i]`.
4. Calculate suffix distinct counts:
   - Clear the set.
   - Traverse from right to left.
   - Insert each character into the set.
   - Store the set size in `suff[i]`.
5. Initialize `mx = 1`.
6. Check every possible split:
   - Calculate `pref[i] + suff[i+1]`.
   - Update the maximum score.
7. Print `mx`.

## Time Complexity

- **O(n)** per test case, assuming a fixed-size character set (as in the problem's lowercase English letters).
- Prefix and suffix calculations each take linear time.
- Checking all possible splits takes O(n).

## Space Complexity

- **O(n)** — Two arrays of size `n` are used to store prefix and suffix distinct counts.

## Python Solution

```python
t = int(input())

for _ in range(t):
    n = int(input())
    s = input()

    pref = [0] * n
    suff = [0] * n

    st = set()

    # Prefix distinct characters
    for i in range(n):
        st.add(s[i])
        pref[i] = len(st)

    st.clear()

    # Suffix distinct characters
    for i in range(n - 1, -1, -1):
        st.add(s[i])
        suff[i] = len(st)

    mx = 1

    for i in range(n - 1):
        mx = max(mx, pref[i] + suff[i + 1])

    print(mx)
```

## C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> pref(n, 0);
        vector<int> suff(n, 0);

        set<char> st;

        // Prefix distinct characters
        for (int i = 0; i < n; i++) {
            st.insert(s[i]);
            pref[i] = st.size();
        }

        st.clear();

        // Suffix distinct characters
        for (int i = n - 1; i >= 0; i--) {
            st.insert(s[i]);
            suff[i] = st.size();
        }

        int mx = 1;

        for (int i = 0; i < n - 1; i++) {
            mx = max(mx, pref[i] + suff[i + 1]);
        }

        cout << mx << endl;
    }

    return 0;
}
```

## Key Concepts Used

- String Manipulation
- Prefix Arrays
- Suffix Arrays
- Sets
- Distinct Character Counting
- Greedy / Optimization

## Solution

The main idea is to precompute the number of distinct characters in every prefix and suffix.

By checking every possible split using `pref[i] + suff[i+1]`, we can find the maximum possible score efficiently in linear time for the given lowercase English alphabet.