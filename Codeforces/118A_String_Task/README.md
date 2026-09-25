# 118A - String Task

## Codeforces Problem

- **Problem Number:** 118A
- **Problem Name:** String Task
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/118/A

## Problem Description

Given a string consisting of uppercase and lowercase Latin letters, transform it according to the following rules:

- Convert all uppercase letters to lowercase.
- Remove all vowels: `a`, `e`, `i`, `o`, `u`, and `y`.
- Before every remaining consonant, add a dot `.`.

The resulting string should be printed.

## Example

For:

```text
s = tour
```

Convert to lowercase:

```text
tour
```

Remove vowels:

```text
tr
```

Add a dot before each consonant:

```text
.t.r
```

Therefore, the answer is:

```text
.t.r
```

## Approach

The solution processes the string from right to left.

1. Read the string `s`.
2. Traverse the string from the last character to the first.
3. Convert each character to lowercase using `tolower()`.
4. If the character is a vowel, remove it from the string.
5. After removing all vowels, traverse the remaining string.
6. Add `.` before every remaining character.
7. Print the resulting string.

## Algorithm

1. Read string `s`.
2. Traverse `s` from right to left.
3. Convert each character to lowercase.
4. If the character is `a`, `e`, `i`, `o`, `u`, or `y`, erase it.
5. Create an empty string `s1`.
6. For every character in the remaining string:
   - Append `.` to `s1`.
   - Append the character to `s1`.
7. Print `s1`.

## Time Complexity

O(n²) in the worst case for the given implementation.

The solution uses `erase()` on the string, which can take O(n) because characters may need to be shifted.

## Space Complexity

O(n).

The resulting string `s1` requires space proportional to the input size.

## C++ Solution

The complete implementation is available in `solution.cpp`.

The solution uses lowercase conversion, vowel removal, and string construction to produce the required output.

## Key C++ Concept Used

### `tolower()`

The `tolower()` function converts an uppercase character into its lowercase equivalent.

For example:

```text
A → a
B → b
T → t
```

### Removing Vowels

The solution checks whether a character is one of:

```text
a, e, i, o, u, y
```

If it is a vowel, it is removed from the string.

### Adding Dots

For every remaining consonant, a dot is added before it:

```text
b → .b
c → .c
d → .d
```

For example:

```text
code
```

After removing vowels:

```text
cd
```

After adding dots:

```text
.c.d
```

## Solution

See `solution.cpp`.