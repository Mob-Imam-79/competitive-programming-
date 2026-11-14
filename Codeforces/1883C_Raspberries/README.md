# 1883C - Raspberries

## Codeforces Problem

- **Problem Number:** 1883C
- **Problem Name:** Raspberries
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/1883/C

## Problem Description

You are given an array of `n` integers and an integer `k`.

In one operation, you can choose an element of the array and increase it by `1`.

Your task is to find the minimum number of operations required to make the product of all array elements divisible by `k`.

## Example

### Input
```text
5
2 5
5 10
2 4
1 1
3 6
2 3 4
1 3
1
3 2
1 3 5
```

### Output
```text
0
2
0
2
1
```

### Explanation

- Test case 1: `5 × 10` is already divisible by `5`, so the answer is `0`.
- Test case 2: Increase both elements from `1` to `2`. Their product becomes `4`, divisible by `4`, requiring `2` operations.
- Test case 3: The product `2 × 3 × 4 = 24` is already divisible by `6`.
- Test case 4: Increase `1` to `3`, requiring `2` operations.
- Test case 5: Increase `1` to `2`, requiring `1` operation.

## Approach

The solution uses divisibility checks and a special case for `k = 4`.

### Case 1: When k is not 4

For the product to be divisible by `k`, at least one element must become divisible by `k`.

For each element:
- If `x % k == 0`, no operation is required.
- Otherwise, calculate the operations needed: `k - (x % k)`.
- Take the minimum value.

### Case 2: When k = 4

A product is divisible by `4` if:

- At least one element is divisible by `4`, or
- At least two elements are even.

If neither condition is satisfied:
- If there are no even elements, compare the minimum operations needed to make one element divisible by `4` with `2`.
- If there is exactly one even element, one additional operation is sufficient when `n > 1`.
- If `n = 1`, make the only element divisible by `4`.

## Algorithm

1. Read the number of test cases `t`.
2. For each test case:
   - Read `n` and `k`.
   - Initialize `mn = infinity`.
3. If `k != 4`:
   - Check every element.
   - If an element is divisible by `k`, print `0`.
   - Otherwise, calculate the minimum increments needed.
4. If `k == 4`:
   - Count the even elements.
   - Check whether any element is divisible by `4`.
   - Calculate the minimum increments needed to make an element divisible by `4`.
   - Apply the special conditions based on the even-element count.
5. Print the minimum operations.

## Time Complexity

- **O(n)** per test case — Every array element is visited once.

## Space Complexity

- **O(1)** auxiliary space — Only counters and variables are used.

## Python Solution

```python
t = int(input())

while t:
    t -= 1

    n, k = map(int, input().split())
    arr = list(map(int, input().split()))

    mn = float('inf')

    if k != 4:
        b1 = True

        for x in arr:
            if x % k == 0:
                b1 = False
            else:
                mn = min(mn, k - (x % k))

        if not b1:
            print(0)
        else:
            print(mn)

    else:
        cnt = 0
        b1 = True

        for x in arr:
            if x % 4 == 0:
                b1 = False

            if x % 2 == 0:
                cnt += 1

            mn = min(mn, 4 - (x % 4))

        if not b1:
            print(0)
        elif cnt == 0:
            print(min(2, mn))
        elif cnt == 1:
            if n == 1:
                print(mn)
            else:
                print(1)
        elif cnt >= 2:
            print(0)
```

## C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int mn = INT_MAX;

        if (k != 4) {
            bool b1 = true;

            for (int i = 0; i < n; i++) {
                int x;
                cin >> x;

                if (x % k == 0) {
                    b1 = false;
                } else {
                    mn = min(mn, k - (x % k));
                }
            }

            if (!b1)
                cout << 0 << endl;
            else
                cout << mn << endl;
        }
        else {
            int cnt = 0;
            bool b1 = true;

            for (int i = 0; i < n; i++) {
                int x;
                cin >> x;

                if (x % 4 == 0) {
                    b1 = false;
                }

                if (x % 2 == 0) {
                    cnt++;
                }

                mn = min(mn, 4 - (x % 4));
            }

            if (!b1) {
                cout << 0 << endl;
            }
            else if (cnt == 0) {
                cout << min(2, mn) << endl;
            }
            else if (cnt == 1) {
                if (n == 1)
                    cout << mn << endl;
                else
                    cout << 1 << endl;
            }
            else if (cnt >= 2) {
                cout << 0 << endl;
            }
        }
    }

    return 0;
}
```

## Key Concepts Used

- Greedy Algorithm
- Modular Arithmetic
- Divisibility
- Counting Even Numbers
- Conditional Statements
- Special Case Handling

## Solution

The main idea is to minimize the increments required to make the product divisible by `k`.

For most values of `k`, making one element divisible by `k` is sufficient. When `k = 4`, we additionally check whether at least two elements are even, because their product is divisible by `4`.