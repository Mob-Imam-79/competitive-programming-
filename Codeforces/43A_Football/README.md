# 43A - Football

## Codeforces Problem

- **Problem Number:** 43A
- **Problem Name:** Football
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/43/A

## Problem Description

Two football teams played a match. During the match, `n` goals were scored.

Each goal is represented by the name of the team that scored it.

There are exactly two different teams. The task is to determine which team scored more goals and print its name.

## Example

### Input
```text
5
A
ABA
A
A
ABA
```

### Output
```text
A
```

### Explanation

- Team `A` scored 3 goals.
- Team `ABA` scored 2 goals.

Therefore, team `A` is the winner.

## Approach

Use a Hash Map (Dictionary in Python) to count the goals scored by each team.

1. Read the number of goals `n`.
2. Read each team's name.
3. Store the frequency of each team in a map.
4. Identify the two different team names.
5. Compare their goal counts.
6. Print the team with more goals.

## Algorithm

1. Initialize an empty map `mp`.
2. Initialize two strings `s1` and `s2`.
3. Read each team name:
   - Store the first team name in `s1`.
   - Store the second different team name in `s2`.
   - Increment the corresponding team's count.
4. Compare `mp[s1]` and `mp[s2]`.
5. Print the team with the greater count.

## Time Complexity

- **O(n log n)** for the C++ solution using `map`.
- **O(n)** expected time for the Python solution using a dictionary.

## Space Complexity

- **O(1)** — Only two distinct team names are present, so the map stores at most two entries.

## Python Solution

```python
n = int(input())

s1 = ""
s2 = None
mp = {}

while n > 0:
    s = input()

    if s1 == "":
        s1 = s
    elif s1 != s and s2 is None:
        s2 = s

    if s not in mp:
        mp[s] = 0

    mp[s] += 1
    n -= 1

if s2 is not None and mp[s1] > mp[s2]:
    print(s1)
elif s2 is None:
    print(s1)
else:
    print(s2)
```

## C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> mp;

    string s1 = "";
    string s2 = "";

    while (n--) {
        string s;
        cin >> s;

        if (s1 == "") {
            s1 = s;
        } else if (s != s1 && s2 == "") {
            s2 = s;
        }

        mp[s]++;
    }

    if (mp[s1] > mp[s2]) {
        cout << s1;
        return 0;
    }

    cout << s2;

    return 0;
}
```

## Key Concepts Used

- String Manipulation
- Hash Map / Dictionary
- Frequency Counting
- `map<string, int>` in C++
- Conditional Statements

## Solution

The problem can be solved by counting how many goals each team scores. Since exactly two teams participate, comparing their frequencies gives the winning team's name.