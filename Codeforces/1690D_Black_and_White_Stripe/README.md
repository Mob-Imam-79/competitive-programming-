
# 1690D - Black and White Stripe

## Codeforces Problem

- **Problem Number:** 1690D
- **Problem Name:** Black and White Stripe
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/1690/D

## Problem Description

You are given a stripe of length `n`. Each cell is either white (`W`) or black (`B`).

You are also given an integer `k`.

The goal is to find the minimum number of white cells that must be changed into black cells to obtain at least one segment of `k` consecutive black cells.

If a segment of `k` consecutive black cells already exists, print `0`.

## Example

### Input
```text
4
5 3
BBWBW
5 5
BBWBW
5 1
BBWBW
1 1
W
```

### Output
```text
1
2
0
1
```

### Explanation

For `BBWBW` with `k = 3`:

- We can choose the substring `BBW`.
- Only one white character (`W`) needs to be changed into black (`B`).
- The resulting substring becomes `BBB`.

Therefore, the minimum number of changes is `1`.

For `BBWBW` with `k = 5`:

- The entire string must become black.
- There are two white characters.
- Both must be changed into black.

Therefore, the minimum number of changes is `2`.

## Approach

Use a Prefix Sum approach to efficiently count the number of black characters in every substring of length `k`.

1. Create a prefix sum array `pref` of size `n + 1`.
2. Traverse the string and calculate the cumulative number of black characters (`B`).
3. For every substring of length `k`, calculate the number of black characters using:

   `pref[i + k] - pref[i]`

4. Find the maximum number of black characters in any substring of length `k`.
5. Calculate the minimum number of white characters that need to be changed:

   `k - mx`

6. Print the result.

## Algorithm

1. Read the number of test cases `t`.
2. For each test case:
   - Read integers `n` and `k`.
   - Read the string `s`.
   - Initialize a prefix sum array `pref` of size `n + 1` with zeros.
3. Build the prefix sum array:
   - If `s[i - 1] == 'B'`, increment the previous prefix sum by 1.
   - Otherwise, keep the previous prefix sum unchanged.
4. Initialize `mx = 0`.
5. Traverse all possible substrings of length `k`:
   - Calculate the number of black characters using `pref[i + k] - pref[i]`.
   - Update the maximum count `mx`.
6. Calculate `k - mx`.
7. Print the result.

## Time Complexity

- **O(n)** per test case — Building the prefix sum array takes O(n), and checking all possible substrings of length `k` also takes O(n).

## Space Complexity

- **O(n)** auxiliary space — The prefix sum array stores `n + 1` elements.

## Python Solution

```python
t = int(input())

for _ in range(t):

    n, k = map(int, input().split())

    pref = [0] * (n + 1)

    s = input()

    for i in range(1, n + 1):

        if s[i - 1] == 'B':

            pref[i] = pref[i - 1] + 1

        else:

            pref[i] = pref[i - 1]

    mx = 0

    for i in range(n - k + 1):

        mx = max(mx, pref[i + k] - pref[i])

    print(k - mx)
```

## C++ Solution

```cpp
#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;

    cin >> t;

    while(t--){

        int n, k;

        cin >> n >> k;

        vector<int> pref(n+1,0);

        int cnt = 0;

        for(int i = 1; i <= n; i++){

            char ch;

            cin >> ch;

            if(ch == 'B'){

                pref[i] = pref[i-1] + 1;

            }else{

                pref[i] = pref[i-1];

            }

        }

        int mx = 0;

        for(int i = 0; i < pref.size() - k; i++){

            mx = max(mx,pref[i+k] - pref[i]);

        }

        cout<<k-mx<<endl;

    }

    return 0;
}
```

## Key Concepts Used

- Prefix Sum
- Sliding Window
- Greedy Algorithm
- String Traversal
- Array Traversal
- Frequency Counting

## Solution

The main idea is to find a substring of length `k` that already contains the maximum number of black characters (`B`).

The prefix sum array helps calculate the number of black characters in any substring efficiently:

`pref[i + k] - pref[i]`

Since the selected substring must contain exactly `k` black characters, all remaining white characters (`W`) in that substring must be changed into black characters.

Therefore:

**Minimum Changes = k - Maximum Black Characters**

By checking every possible substring of length `k`, we find the minimum number of changes required to obtain a substring consisting entirely of black characters.
