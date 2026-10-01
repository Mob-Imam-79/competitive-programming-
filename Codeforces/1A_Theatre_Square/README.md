# 1A - Theatre Square

## Codeforces Problem

- **Problem Number:** 1A
- **Problem Name:** Theatre Square
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/1/A

## Problem Description

Given the dimensions `n × m` of a square theatre and the size `a × a` of a square flagstone, determine the minimum number of flagstones required to cover the entire theatre square.

The flagstones cannot be broken, and they may extend beyond the theatre square.

## Example

For:

```text
n = 6
m = 6
a = 4
```

Flagstones required along the first dimension:

```text
ceil(6 / 4) = 2
```

Flagstones required along the second dimension:

```text
ceil(6 / 4) = 2
```

Therefore:

```text
2 × 2 = 4
```

The answer is:

```text
4
```

## Approach

The number of flagstones required in each dimension is calculated using ceiling division.

For dimension `n`:

```text
(n + a - 1) / a
```

For dimension `m`:

```text
(m + a - 1) / a
```

Multiply both values to get the total number of flagstones.

## Algorithm

1. Read `n`, `m`, and `a`.
2. Calculate the number of flagstones needed for the first dimension:
   ```text
   (n + a - 1) / a
   ```
3. Calculate the number of flagstones needed for the second dimension:
   ```text
   (m + a - 1) / a
   ```
4. Multiply the two values.
5. Print the result.

## Time Complexity

O(1).

Only a constant number of arithmetic operations are performed.

## Space Complexity

O(1).

Only a constant amount of extra space is used.

## Python Solution

The complete implementation is available in `solution.py`.

The solution uses ceiling division to calculate the minimum number of square flagstones required in each dimension.

## Key Python Concept Used

### Ceiling Division

The expression:

```text
(n + a - 1) // a
```

calculates:

```text
ceil(n / a)
```

without using floating-point arithmetic.

For example:

```text
n = 6
a = 4

(6 + 4 - 1) // 4
= 9 // 4
= 2
```

### Multiplying Both Dimensions

The total number of flagstones is:

```text
ceil(n / a) × ceil(m / a)
```

which gives the minimum number needed to cover the entire theatre square.

## Solution

See `solution.py`.