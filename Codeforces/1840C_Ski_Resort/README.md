# 1840C - Ski Resort

## Codeforces Problem

- **Problem Number:** 1840C
- **Problem Name:** Ski Resort
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/1840/C

## Problem Description

You are given:

- `n`: Number of days.
- `k`: Minimum number of consecutive days required for a vacation.
- `q`: Maximum allowed temperature for skiing.
- An array `a` containing the temperature of each day.

A vacation can be planned for any `k` or more consecutive days, provided that the temperature on every selected day is at most `q`.

Your task is to count the total number of possible vacation periods.

## Example

### Input
```text
3
5 1 10
1 10 10 10 1
5 2 5
1 2 3 4 5
6 2 10
1 2 3 10 11 12
```

### Output
```text
15
0
6
```

### Explanation

For the first test case, all 5 days have temperatures at most 10.

Since `k = 1`, every non-empty consecutive subarray is valid.

Total possible periods:

\[
\frac{5 \times 6}{2} = 15
\]

For the second test case, no two consecutive days satisfy the temperature condition, so the answer is `0`.

## Approach

Use a **consecutive valid segment counting** technique.

Instead of generating every possible subarray, count the lengths of consecutive days whose temperatures are at most `q`.

Maintain:

- `length`: Current consecutive valid days.
- `total`: Total number of valid vacation periods.

Whenever a day has temperature greater than `q`, the current segment ends.

For a valid segment of length `L`, the number of subarrays having length at least `k` is:

\[
\frac{(L-k+1)(L-k+2)}{2}
\]

Add this value to `total`.

Finally, process the last segment because it may not end with an invalid day.

## Algorithm

1. Read the number of test cases `t`.
2. For each test case:
   - Read `n`, `k`, and `q`.
   - Initialize `total = 0` and `length = 0`.
3. Traverse the temperature array:
   - If `x <= q`, increment `length`.
   - Otherwise:
     - If `length >= k`, add the number of valid subarrays to `total`.
     - Reset `length = 0`.
4. After the loop, process the remaining segment if `length >= k`.
5. Print `total`.

## Time Complexity

- **O(n)** per test case — Each temperature is processed exactly once.

## Space Complexity

- **O(1)** auxiliary space — Only counters are maintained in the optimized solutions.

## Python Solution

```python
t = int(input())

for _ in range(t):
    n, k, q = map(int, input().split())
    arr = list(map(int, input().split()))

    total = 0
    length = 0

    for x in arr:
        if x <= q:
            length += 1
        else:
            if length >= k:
                total += (length - k + 1) * (length - k + 2) // 2

            length = 0

    if length >= k:
        total += (length - k + 1) * (length - k + 2) // 2

    print(total)
```

## C++ Solution 1 - Optimized Approach

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;

        long long total = 0;
        long long len = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x <= q) {
                len++;
            }
            else {
                if (len >= k) {
                    total += (1LL * (len - k + 1) *
                              (len - k + 2)) / 2;
                }

                len = 0;
            }
        }

        if (len >= k) {
            total += (1LL * (len - k + 1) *
                      (len - k + 2)) / 2;
        }

        cout << total << '\n';
    }

    return 0;
}
```

## C++ Solution 2 - Using Vectors

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;

        vector<vector<int>> ans;
        vector<int> v;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x <= q) {
                v.push_back(x);
            }
            else {
                if (!v.empty()) {
                    ans.push_back(v);
                    v.clear();
                }
            }
        }

        if (!v.empty()) {
            ans.push_back(v);
        }

        for (int i = (int)ans.size() - 1; i >= 0; i--) {
            if (ans[i].size() < k) {
                ans.erase(ans.begin() + i);
            }
        }

        long long total = 0;

        for (int i = 0; i < ans.size(); i++) {
            long long len = ans[i].size();

            if (len >= k) {
                total += (1LL * (len - k + 1) *
                          (len - k + 2)) / 2;
            }
        }

        cout << total << '\n';
    }

    return 0;
}
```

## Key Concepts Used

- Array Traversal
- Sliding Window / Consecutive Segments
- Combinatorics
- Subarray Counting
- Mathematical Formula
- Greedy Counting

## Solution

The optimized solution counts consecutive valid days instead of generating all possible subarrays.

For every valid segment of length `L`, the formula:

\[
\frac{(L-k+1)(L-k+2)}{2}
\]

calculates the number of consecutive subarrays with length at least `k`.

This allows us to solve the problem in linear time, O(n), with constant auxiliary space.