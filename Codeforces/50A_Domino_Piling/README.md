# 50A - Domino Piling

## Codeforces Problem

- **Problem Number:** 50A
- **Problem Name:** Domino Piling
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/50/A

## Problem Description

Given an `M × N` rectangular board, determine the maximum number of `2 × 1` dominoes that can be placed on the board.

Each domino covers exactly two adjacent cells, and dominoes cannot overlap.

## Example

For:

```text
M = 2
N = 4
```

The board contains:

```text
2 × 4 = 8
```

cells.

Each domino covers `2` cells, so the maximum number of dominoes is:

```text
8 / 2 = 4
```

Therefore, the answer is:

```text
4
```

## Approach

The total number of cells in the board is `M × N`.

Since each domino covers exactly `2` cells, the maximum number of dominoes is:

```text
(M × N) / 2
```

Integer division automatically handles the case when the number of cells is odd.

## Algorithm

1. Read `M` and `N`.
2. Calculate `(M * N) / 2`.
3. Print the result.

## Time Complexity

O(1).

Only a constant number of arithmetic operations are performed.

## Space Complexity

O(1).

Only a constant amount of extra space is used.

## C++ Solution

The complete implementation is available in `solution.cpp`.

The solution calculates the total number of cells and divides it by `2` because each domino covers two cells.

## Key C++ Concept Used

### Integer Division

The expression:

```text
(M * N) / 2
```

uses integer division to calculate the maximum number of complete dominoes that can fit on the board.

For example:

```text
M = 3
N = 3

(3 × 3) / 2 = 4
```

The remaining one cell cannot be covered by another domino.

## Solution

See `solution.cpp`.