# 41A - Translation

## Codeforces Problem

- **Problem Number:** 41A
- **Problem Name:** Translation
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/41/A

## Problem Description

Given two strings `s` and `s1`, determine whether `s1` is the reverse of `s`.

If `s1` is exactly the reverse of `s`, print `YES`.

Otherwise, print `NO`.

## Example

For:

```text
s = code
s1 = edoc
```

Reverse of `s`:

```text
code → edoc
```

Since `s1` matches the reversed string, the answer is:

```text
YES
```

For:

```text
s = hello
s1 = world
```

The strings are not reverses of each other.

Therefore, the answer is:

```text
NO
```

## Approach

The solution creates a copy of the first string and reverses it.

1. Read the first string `s`.
2. Read the second string `s1`.
3. Copy `s` into `s2`.
4. Reverse `s2`.
5. Compare `s1` with `s2`.
6. If they are equal, print `YES`.
7. Otherwise, print `NO`.

## Algorithm

1. Read strings `s` and `s1`.
2. Create `s2 = s`.
3. Reverse `s2` using `reverse()`.
4. Compare `s1` and `s2`.
5. If `s1 == s2`, print `YES`.
6. Otherwise, print `NO`.

## Time Complexity

O(n).

Reversing and comparing the strings take linear time, where `n` is the length of the string.

## Space Complexity

O(n).

An additional copy of the first string is stored in `s2`.

## C++ Solution

The complete implementation is available in `solution.cpp`.

The solution uses the `reverse()` function to reverse the first string and compares it with the second string.

## Key C++ Concept Used

### String Reversal

The `reverse()` function reverses the characters of a string.

```text
s = code

After reverse:

edoc
```

### String Comparison

The equality operator `==` is used to compare the reversed string with the second string.

```text
s1 == s2
```

If both strings are identical, the required translation is correct.

## Solution

See `solution.cpp`.