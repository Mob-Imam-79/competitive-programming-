# 337A - Puzzles

## Codeforces Problem

- **Problem Number:** 337A
- **Problem Name:** Puzzles
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/337/A

## Problem Description

There are `m` puzzle pieces with different difficulty levels.

The task is to select exactly `n` puzzle pieces such that the difference between the most difficult and the easiest selected puzzle is as small as possible.

The answer is the minimum possible value:

`maximum difficulty - minimum difficulty`

## Example

For:

n = 4

m = 6

puzzles = 10 12 10 7 5 22

After sorting:

5 7 10 10 12 22

The best group of 4 puzzles is:

7 10 10 12

The difference is:

12 - 7 = 5

Therefore, the answer is:

5

## Approach

The solution uses sorting and a sliding window of size `n`.

1. Read `n` and `m`.
2. Store all `m` puzzle difficulty values in a vector.
3. Sort the vector in ascending order.
4. Consider every consecutive group of `n` puzzles.
5. For each group, calculate the difference between the largest and smallest values.
6. Keep track of the minimum difference.
7. Print the minimum difference.

## Algorithm

1. Read `n` and `m`.
2. Store the `m` difficulty values in a vector.
3. Sort the vector using `sort()`.
4. Initialize `mn` with `INT_MAX`.
5. For every possible group of `n` consecutive elements:
   - Calculate `v[i] - v[j]`.
   - Update `mn` with the minimum difference.
6. Print `mn`.

## Time Complexity

O(m log m).

Sorting the `m` puzzle values takes `O(m log m)`, and checking all possible groups takes `O(m)`.

## Space Complexity

O(m).

The vector stores all `m` puzzle difficulty values.

## C++ Solution

The complete implementation is available in `solution.cpp`.

The solution uses a sorted vector and a sliding window to find the minimum difference between the maximum and minimum difficulty levels.

## Key C++ Concept Used

### Sorting

The `sort()` function arranges the puzzle difficulties in ascending order.

For example:

10 5 12 7

After sorting:

5 7 10 12

This allows us to check consecutive groups of `n` puzzles and efficiently find the minimum possible difference.

### Sliding Window

After sorting, the best group of `n` puzzles will always be a consecutive range in the sorted array.

For a window from index `j` to index `i`:

difference = v[i] - v[j]

The minimum difference among all such windows is the answer.

## Solution

See `solution.cpp`.