# 230A - Dragons

## Codeforces Problem

- **Problem Number:** 230A
- **Problem Name:** Dragons
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/230/A

## Problem Description

Kirito starts with an initial strength `s` and must fight `n` dragons.

Each dragon has:
- `x`: The dragon's strength.
- `y`: The bonus strength gained after defeating the dragon.

Kirito can defeat a dragon only if his current strength is strictly greater than the dragon's strength.

After defeating a dragon, his strength increases by the dragon's bonus.

Determine whether Kirito can defeat all dragons.

## Example

### Input
```text
2 2
1 99
100 0
```

### Output
```text
YES
```

### Explanation

- Initial strength = 2.
- Defeat the first dragon (strength 1), gaining 99.
- New strength = 101.
- Defeat the second dragon (strength 100).
- All dragons are defeated, so the answer is `YES`.

## Approach

Use a greedy approach:

1. Sort all dragons in ascending order of their strength.
2. Fight the weakest dragon first.
3. If current strength is greater than the dragon's strength, defeat it and add its bonus.
4. If current strength is less than or equal to the dragon's strength, print `NO`.
5. If all dragons are defeated, print `YES`.

## Algorithm

1. Read initial strength `s` and number of dragons `n`.
2. Store each dragon as a pair `(strength, bonus)`.
3. Sort the pairs by dragon strength.
4. Traverse the sorted list:
   - If `s > dragon_strength`, update `s = s + bonus`.
   - Otherwise, print `NO` and stop.
5. If every dragon is defeated, print `YES`.

## Time Complexity

- **O(n log n)** — Sorting the dragons takes O(n log n), and traversing them takes O(n).

## Space Complexity

- **O(n)** — Storing the strength and bonus of all dragons.

## Python Solution

```python
s, n = map(int, input().split())

l = []

for i in range(n):
    l1 = list(map(int, input().split()))
    l.append(l1)

l.sort()

for i in range(n):
    if l[i][0] < s:
        s += l[i][1]
    else:
        print("NO")
        break
else:
    print("YES")
```

## C++ Solution

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int Pstg, n;
    cin >> Pstg >> n;

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++) {
        int drg, bonus;
        cin >> drg >> bonus;

        v.push_back({drg, bonus});
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        if (v[i].first < Pstg) {
            Pstg += v[i].second;
        } else {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}
```

## Key Concepts Used

- Greedy Algorithm
- Sorting
- Vectors and Pairs (C++)
- Lists (Python)
- Conditional Statements

## Solution

Sorting dragons by increasing strength ensures that Kirito fights weaker dragons first and gains bonuses before facing stronger dragons. This greedy strategy determines whether all dragons can be defeated.