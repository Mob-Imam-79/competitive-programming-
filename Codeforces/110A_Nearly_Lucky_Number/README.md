# 110A - Nearly Lucky Number

## Codeforces Problem

- **Problem Number:** 110A
- **Problem Name:** Nearly Lucky Number
- **Platform:** Codeforces
- **Link:** https://codeforces.com/problemset/problem/110/A

## Problem Description

A lucky number is a number that contains only the digits `4` and `7`.

A number is called nearly lucky if the number of lucky digits (`4` and `7`) in its decimal representation is itself a lucky number.

Given an integer `n`, determine whether it is nearly lucky.

- If the count of lucky digits is `4` or `7`, print `YES`.
- Otherwise, print `NO`.

## Example

**Input:**
```text
40047
```

**Output:**
```text
YES
```

**Explanation:**

The number `40047` contains three lucky digits: `4`, `4`, and `7`. The count is `3`, which is not a lucky number.

Correction: The above input should produce `NO`. A valid `YES` example is:

**Input:**
```text
7744
```

**Output:**
```text
YES
```

The number `7744` contains four lucky digits, and `4` is a lucky number.

## Approach

Count the number of digits in `n` that are either `4` or `7`.

After counting:
- If `cnt == 4` or `cnt == 7`, print `YES`.
- Otherwise, print `NO`.

## Algorithm

1. Read the integer `n`.
2. Initialize `cnt = 0`.
3. While `n` is not zero:
   - Extract the last digit using `n % 10`.
   - If the digit is `4` or `7`, increment `cnt`.
   - Remove the last digit using integer division by `10`.
4. Check whether `cnt` is `4` or `7`.
5. Print `YES` if true; otherwise, print `NO`.

## Time Complexity

- **Time:** `O(d)`, where `d` is the number of digits in `n`.
- **Space:** `O(1)`.

## Python Solution

```python
n = int(input())

cnt = 0

while n != 0:
    remin = n % 10

    if remin == 7 or remin == 4:
        cnt += 1

    n = n // 10

if cnt == 7 or cnt == 4:
    print("YES")
else:
    print("NO")
```

## Key Python Concept Used

### Digit Extraction

- `n % 10` extracts the last digit.
- `n // 10` removes the last digit.
- The loop continues until all digits have been processed.

## Solution

See `solution.py`.