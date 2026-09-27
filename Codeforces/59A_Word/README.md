# 59A - Word

## Codeforces Problem

- **Problem Number:** 59A
- **Problem Name:** Word
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/59/A

## Problem Description

Given a word consisting of uppercase and lowercase English letters, determine whether it contains more uppercase or lowercase letters.

- If the number of lowercase letters is greater than or equal to the number of uppercase letters, convert the entire word to lowercase.
- Otherwise, convert the entire word to uppercase.

## Example

For:

```text
s = HoUse
```

Count the letters:

```text
Lowercase = 3
Uppercase = 2
```

Lowercase letters are greater, so the entire word is converted to lowercase.

Therefore, the answer is:

```text
house
```

For:

```text
s = ViP
```

Count the letters:

```text
Lowercase = 1
Uppercase = 2
```

Uppercase letters are greater, so the entire word is converted to uppercase.

Therefore, the answer is:

```text
VIP
```

## Approach

The solution counts the number of lowercase letters and compares it with the number of uppercase letters.

1. Read the string `s`.
2. Count the lowercase letters using `islower()`.
3. Calculate the number of uppercase letters.
4. If lowercase letters are greater than or equal to uppercase letters, convert every character to lowercase.
5. Otherwise, convert every character to uppercase.
6. Print the resulting string.

## Algorithm

1. Read string `s`.
2. Initialize `cl = 0`.
3. Traverse the string:
   - If the character is lowercase, increment `cl`.
4. Calculate:
   `cu = s.size() - cl`.
5. If `cl >= cu`:
   - Convert every character to lowercase.
6. Otherwise:
   - Convert every character to uppercase.
7. Print the resulting string.

## Time Complexity

O(n).

The string is traversed a constant number of times.

## Space Complexity

O(n).

The answer string `ans` stores the resulting word.

## C++ Solution

The complete implementation is available in `solution.cpp`.

The solution uses character classification and case-conversion functions to determine the required form of the word.

## Key C++ Concept Used

### `islower()`

The `islower()` function checks whether a character is lowercase.

For example:

```text
'a' → true
'A' → false
```

### `tolower()` and `toupper()`

The `tolower()` function converts a character to lowercase:

```text
A → a
```

The `toupper()` function converts a character to uppercase:

```text
a → A
```

The solution uses these functions to convert the entire word based on the number of uppercase and lowercase letters.

## Solution

See `solution.cpp`.