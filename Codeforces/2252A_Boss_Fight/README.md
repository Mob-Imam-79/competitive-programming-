# 2252A - Boss Fight

## Codeforces Problem

- **Problem Number:** 2252A
- **Problem Name:** Boss Fight
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/2252/A

## Problem Description

Given a binary string `s`, perform the required deletion operation on the string.

For each test case, the solution removes a `0` followed by a `1` according to the given process.

The task is to print the resulting string after the required operations.

## Example

For:

```text
s = 01
```

The characters `0` and `1` are removed:

```text
01 → ""
```

Therefore, the resulting string is empty.

For:

```text
s = 0011
```

The first `0` and the corresponding `1` are removed:

```text
0011 → 01 → ""
```

Therefore, the resulting string is empty.

## Approach

The solution processes each test case by repeatedly removing a `0` followed by a `1`.

1. Read the number of test cases.
2. For each test case, read the string `s`.
3. Use two variables to track the number of performed deletions and the current position.
4. Search for the required `0` and `1` characters.
5. Remove the characters from the string.
6. Repeat until two characters have been removed.
7. Print the resulting string.

## Algorithm

1. Read the number of test cases `n`.
2. For each test case:
   - Read string `s`.
   - Initialize `i = 0`, `j = 0`, and `fg = true`.
   - While `i < 2`:
     - If the current character is `0` and `fg` is `true`, erase it.
     - Set `fg = false`.
     - If the current character is `1` and `fg` is `false`, erase it.
     - Continue until two characters are removed.
   - Print the resulting string.

## Time Complexity

O(n) in terms of the string length for each test case, with additional cost from `erase()` operations.

## Space Complexity

O(n).

The string is modified directly and may require additional space internally during erase operations.

## C++ Solution

The complete implementation is available in `solution.cpp`.

The solution uses string traversal and the `erase()` function to remove the required characters.

## Key C++ Concept Used

### String `erase()`

The `erase()` function removes characters from a string.

For example:

```text
s = 0101
```

Removing the character at index `0`:

```text
0101 → 101
```

The solution uses:

```text
s.erase(j, 1);
```

to remove one character at position `j`.

### Boolean Flag

The variable `fg` controls which character should be searched for.

```text
fg = true
```

means the solution is looking for `0`.

After removing `0`:

```text
fg = false
```

and the solution searches for `1`.

## Solution

See `solution.cpp`.