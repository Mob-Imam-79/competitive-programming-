# 451A - Game With Sticks

## Codeforces Problem

- **Problem Number:** 451A
- **Problem Name:** Game With Sticks
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/451/A

## Problem Description

Akshat and Malvika play a game using an `n × m` grid of sticks.

In each move, a player removes one horizontal and one vertical stick that intersect.

The game continues until no valid move is possible.

The player who makes the last move wins.

## Example

For:

n = 2

m = 3

The number of possible moves is determined by the smaller dimension:

min(2, 3) = 2

There are 2 moves.

Since the number of moves is even, Malvika makes the last move.

Therefore, the answer is:

Malvika

## Approach

The number of moves possible is equal to the smaller of `n` and `m`.

1. Read `n` and `m`.
2. Find the smaller value between `n` and `m`.
3. Check whether the smaller value is odd or even.
4. If it is odd, print `Akshat`.
5. If it is even, print `Malvika`.

## Algorithm

1. Read `n` and `m`.
2. If `n >= m`:
   - Check whether `m` is odd.
   - If `m` is odd, print `Akshat`.
   - Otherwise, print `Malvika`.
3. Otherwise:
   - Check whether `n` is odd.
   - If `n` is odd, print `Akshat`.
   - Otherwise, print `Malvika`.

## Time Complexity

O(1).

Only a constant number of comparisons and arithmetic operations are performed.

## Space Complexity

O(1).

Only a constant amount of extra space is used.

## C++ Solution

The complete implementation is available in `solution.cpp`.

The solution finds the smaller dimension of the grid and uses its parity to determine which player makes the last move.

## Key C++ Concept Used

### Bitwise AND Operator

The expression:

```text
x & 1
```

is used to check whether an integer is odd or even.

For example:

```text
5 & 1 = 1
```

So `5` is odd.

```text
6 & 1 = 0
```

So `6` is even.

### Minimum Dimension

Only the smaller value between `n` and `m` determines the maximum number of moves.

For example:

```text
n = 3
m = 5

minimum = 3
```

Since `3` is odd, Akshat makes the last move.

## Solution

See `solution.cpp`.