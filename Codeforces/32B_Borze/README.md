# 32B - Borze

## Codeforces Problem

- **Problem Number:** 32B
- **Problem Name:** Borze
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/32/B

## Problem Description

Borze code is a simple encoding system where:

- `.` represents `0`
- `-.` represents `1`
- `--` represents `2`

Given a string encoded in Borze code, decode it into the corresponding sequence of digits.

## Example

For:

```text
s = .--.
```

Decode the string from left to right:

```text
.   → 0
--  → 2
.   → 0
```

Therefore, the decoded result is:

```text
020
```

For:

```text
s = -.-.
```

Decode:

```text
-.  → 1
-.  → 1
```

Therefore:

```text
11
```

## Approach

The solution scans the encoded string from left to right and stores the current Borze code in `s1`.

1. Read the encoded string `s`.
2. Traverse every character of `s`.
3. If the current code is:
   - `.` → append `0`.
   - `-.` → append `1`.
   - `--` → append `2`.
4. Reset `s1` after decoding each symbol.
5. Process the remaining code after the loop.
6. Print the decoded string.

## Algorithm

1. Read string `s`.
2. Initialize empty strings `s1` and `ans`.
3. For every character `ch` in `s`:
   - If `s1 == "."`, append `0` to `ans`.
   - Else if `s1 == "-."`, append `1` to `ans`.
   - Else if `s1 == "--"`, append `2` to `ans`.
   - Reset `s1` and add the current character when a symbol is completed.
4. After the loop, decode the remaining value of `s1`.
5. Print `ans`.

## Time Complexity

O(n).

Each character of the encoded string is processed once.

## Space Complexity

O(n).

The decoded answer and temporary string require space proportional to the input size.

## C++ Solution

The complete implementation is available in `solution.cpp`.

The solution uses a temporary string to identify each Borze symbol and converts it into the corresponding digit.

## Key C++ Concept Used

### String Processing

The encoded symbols are stored temporarily in `s1`:

```text
.   → 0
-.  → 1
--  → 2
```

### Sequential Decoding

The string is processed from left to right, and each complete Borze symbol is immediately converted into its corresponding digit.

## Solution

See `solution.cpp`.