# 58A - Chat Room

## Codeforces Problem

- **Problem Number:** 58A
- **Problem Name:** Chat Room
- **Platform:** Codeforces
- **Link:** https://codeforces.com/problemset/problem/58/A

## Problem Description

Vasya wants to say "hello" to a friend. He can delete some characters from a given string, but he cannot change the order of the remaining characters.

Given a string `s`, determine whether it is possible to obtain the word `"hello"` by deleting some characters from `s`.

- If `"hello"` can be formed as a subsequence, print `YES`.
- Otherwise, print `NO`.

## Example

**Input:**
```text
ahhellllloou
```

**Output:**
```text
YES
```

**Explanation:**

The characters `h`, `e`, `l`, `l`, and `o` appear in the correct order, so `"hello"` can be formed.

## Approach

Use two pointers to check whether `"hello"` is a subsequence of the input string.

- `i` points to the current character in `s`.
- `j` points to the current character in `"hello"`.

If the characters match, move both pointers forward. Otherwise, move only `i` forward.

If all characters of `"hello"` are matched, print `YES`.

## Algorithm

1. Read the input string `s`.
2. Set `s1 = "hello"`.
3. Initialize `i = 0` and `j = 0`.
4. Traverse `s` while both pointers are within their string lengths.
5. If `s[i] == s1[j]`, increment both `i` and `j`.
6. Otherwise, increment only `i`.
7. If `j == len(s1)`, print `YES`; otherwise, print `NO`.

## Time Complexity

- **Time:** `O(n)`, where `n` is the length of the input string.
- **Space:** `O(1)`.

## Python Solution

```python
s = input()

s1 = "hello"

i = 0
j = 0

while i < len(s) and j < len(s1):
    if s[i] == s1[j]:
        i += 1
        j += 1
    else:
        i += 1

if j == len(s1):
    print("YES")
else:
    print("NO")
```

## Key Python Concept Used

### Two-Pointer Technique

The two-pointer technique checks whether the characters of `"hello"` appear in the input string in the correct order. Characters can be skipped, but their order must remain unchanged.

## Solution

See `solution.py`.