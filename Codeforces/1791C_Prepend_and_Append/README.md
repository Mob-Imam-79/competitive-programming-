# 1791C - Prepend and Append

## Codeforces Problem

- **Problem Number:** 1791C
- **Problem Name:** Prepend and Append
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/1791/C

## Problem Description

Given a binary string `s`, we can repeatedly remove the first and last characters if they are different.

The operation can be performed when:

- The first character is `0` and the last character is `1`.
- The first character is `1` and the last character is `0`.

The task is to determine the minimum possible length of the string after performing the operation as many times as possible.

## Example

For:

```text
s = 0101
```

The first character is `0` and the last character is `1`, so remove both:

```text
0101 → 10
```

Now the first character is `1` and the last character is `0`, so remove both:

```text
10 → ""
```

Therefore, the answer is:

```text
0
```

For:

```text
s = 0110
```

The first character is `0` and the last character is `0`, so they are equal.

No more operations can be performed.

Therefore, the answer is:

```text
4
```

## Approach

The solution repeatedly checks the first and last characters of the string.

1. Read the number of test cases.
2. For each test case, read the string `s`.
3. Check whether the first and last characters are different.
4. If they are different, remove both characters.
5. Continue until the first and last characters are equal.
6. Print the remaining length of the string.

## Algorithm

1. Read the number of test cases `n`.
2. For each test case:
   - Read `t` and string `s`.
   - While the first and last characters are different:
     - Remove the first character.
     - Remove the last character.
   - Print `s.size()`.

## Time Complexity

O(n²) in the worst case for the given implementation.

The `erase()` operation on a string can take O(n) because characters may need to be shifted.

## Space Complexity

O(n).

The string stores the input characters.

## C++ Solution

The complete implementation is available in `solution.cpp`.

The solution uses string operations to repeatedly remove the first and last characters whenever they are different.

## Key C++ Concept Used

### String `erase()`

The `erase()` function is used to remove characters from the string.

To remove the first character:

```text
s.erase(s.begin() + 0);
```

To remove the last character:

```text
s.erase(s.begin() + s.size() - 1);
```

### Comparing First and Last Characters

The first character is accessed using:

```text
s[0]
```

The last character is accessed using:

```text
s[s.size() - 1]
```

If they are different, both characters are removed.

## Solution

See `solution.cpp`.