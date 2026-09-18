# 1703A - YES or YES?

## Codeforces Problem

- **Problem Number:** 1703A
- **Problem Name:** YES or YES?
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/1703/A

## Problem Description

Given a string `s`, determine whether it represents the word **"yes"**, ignoring the case of its letters.

If the string is equal to `"yes"` regardless of uppercase or lowercase letters, print `YES`.

Otherwise, print `NO`.

## Example

For:

```text
s = YeS
```

Convert all characters to lowercase:

```text
yes
```

The string matches `"yes"`, so the answer is:

```text
YES
```

For:

```text
s = yEs
```

After converting to lowercase:

```text
yes
```

Therefore, the answer is:

```text
YES
```

For:

```text
s = no
```

It does not match `"yes"`, so the answer is:

```text
NO
```

## Approach

The solution converts every character of the input string to lowercase and then compares it with `"yes"`.

1. Read the number of test cases.
2. For each test case, read the string `s`.
3. Convert every character of `s` to lowercase using `tolower()`.
4. Compare `s` with `"yes"`.
5. If they are equal, print `YES`.
6. Otherwise, print `NO`.

## Algorithm

1. Read the number of test cases `t`.
2. Repeat `t` times:
   - Read string `s`.
   - Convert every character of `s` to lowercase.
   - If `s == "yes"`, print `YES`.
   - Otherwise, print `NO`.

## Time Complexity

O(n) per test case.

Each character of the string is processed once.

## Space Complexity

O(1) auxiliary space.

Only the input string is stored.

## C++ Solution

The complete implementation is available in `solution.cpp`.

The solution uses `tolower()` to make the comparison case-insensitive.

## Key C++ Concept Used

### `tolower()`

The `tolower()` function converts an uppercase character to its lowercase equivalent.

```text
Y → y
E → e
S → s
```

For example:

```text
YeS → yes
```

### Range-Based For Loop

The loop:

```text
for (char &c : s)
```

iterates through every character of the string.

The reference `char &c` allows the original characters in the string to be modified.

## Solution

See `solution.cpp`.