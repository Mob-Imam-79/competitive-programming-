# 131A - cAPS lOCK

## Codeforces Problem

- **Problem Number:** 131A
- **Problem Name:** cAPS lOCK
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/131/A

## Problem Description

The word typed by the user may have its capitalization accidentally enabled.

The task is to correct the word according to these rules:

1. If all letters are uppercase, convert the entire word to lowercase.
2. If the first letter is lowercase and all remaining letters are uppercase, convert the first letter to uppercase and the remaining letters to lowercase.
3. Otherwise, keep the word unchanged.

## Example

### Input
```text
cAPS
```

### Output
```text
Caps
```

### Explanation

The first letter is lowercase, and all remaining letters are uppercase. Therefore, the word is corrected to `Caps`.

## Approach

Check the capitalization pattern of the input string:

- If the entire string is uppercase, convert it to lowercase.
- If only the first letter is lowercase and the rest are uppercase, swap the case of every character.
- Otherwise, print the original string.

## Algorithm

1. Read the string `s`.
2. If all characters are uppercase, print `s` in lowercase.
3. Else if the first character is lowercase and all remaining characters are uppercase, print the string with swapped case.
4. Otherwise, print the original string.

## Time Complexity

- **O(n)** — The string is traversed to check and change its characters.

## Space Complexity

- **O(n)** — A new string may be created to store the modified result.

## Python Solution

```python
s = input()

if s.isupper():
    print(s.lower())
elif s[:1].islower() and (len(s) == 1 or s[1:].isupper()):
    print(s.swapcase())
else:
    print(s)
```

## C++ Solution

```cpp
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
    string s;
    cin >> s;

    if (s.size() == 0) {
        cout << "";
        return 0;
    }

    if (all_of(s.begin(), s.end(), ::isupper)) {
        string s1 = "";

        for (int i = 0; i < s.size(); i++) {
            s1 += tolower(s[i]);
        }

        cout << s1;
        return 0;
    }
    else if (all_of(s.begin(), s.begin() + 1, ::islower) &&
             all_of(s.begin() + 1, s.end(), ::isupper)) {
        string s1 = "";

        s1 += toupper(s[0]);

        for (int i = 1; i < s.size(); i++) {
            s1 += tolower(s[i]);
        }

        cout << s1;
        return 0;
    }
    else {
        cout << s;
    }

    return 0;
}
```

## Key Concepts Used

- String manipulation
- Character case conversion
- `isupper()` and `islower()`
- `all_of()`
- Conditional statements

## Solution

The program checks the capitalization pattern of the word and applies the required correction. If the word does not match either special case, it remains unchanged.