# 750A - New Year and Hurry

## Codeforces Problem

- **Problem Number:** 750A
- **Problem Name:** New Year and Hurry
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/750/A

## Problem Description

Limak has `n` problems to solve before a contest ends.

He has `240` minutes in total. Before starting to solve problems, he spends `t` minutes travelling.

The `i-th` problem takes `5 * i` minutes to solve.

The task is to find the maximum number of problems Limak can solve within the remaining contest time.

## Example

For:

```text
n = 3
t = 222
```

Available solving time:

```text
240 - 222 = 18
```

Problem solving times are:

```text
5 10 15
```

He can solve the first two problems:

```text
5 + 10 = 15
```

But solving all three requires:

```text
5 + 10 + 15 = 30
```

Therefore, the answer is:

```text
2
```

## Approach

The solution first calculates the cumulative time required to solve the first `i` problems.

1. Read `n` and `t`.
2. Calculate the cumulative solving time for every number of problems.
3. Add the travel time `t` to the total time needed to solve all `n` problems.
4. If the total time is at most `240`, print `n`.
5. Otherwise, calculate the time available for solving problems:
   `240 - t`.
6. Use binary search to find the maximum number of problems whose cumulative solving time fits within the available time.
7. Print the answer.

## Algorithm

1. Read `n` and `t`.
2. Initialize `qt = 0`.
3. For every `i` from `1` to `n`:
   - Add `5 * i` to `qt`.
   - Store the cumulative time in vector `v`.
4. If `qt + t <= 240`, print `n`.
5. Otherwise:
   - Set `tar = 240 - t`.
   - Apply binary search on `v`.
   - Find the first cumulative time greater than `tar`.
   - Print its corresponding number of problems.

## Time Complexity

O(n + log n).

Calculating the cumulative times takes `O(n)`, and the binary search takes `O(log n)`.

## Space Complexity

O(n).

The vector stores the cumulative solving time for each problem count.

## C++ Solution

The complete implementation is available in `solution.cpp`.

The solution uses prefix sums to calculate cumulative solving times and binary search to efficiently find the maximum number of solvable problems.

## Key C++ Concept Used

### Prefix Sum

The cumulative solving time is calculated as:

```text
5, 5 + 10, 5 + 10 + 15, ...
```

For example:

```text
Problems:       1   2   3
Cumulative:     5  15  30
```

This allows us to quickly determine how much time is required to solve the first `k` problems.

### Binary Search

The cumulative times are sorted because each additional problem increases the total time.

Binary search is used to find the largest cumulative time that does not exceed:

```text
240 - t
```

For example:

```text
Available time = 18

Cumulative times:
5 15 30
```

The largest value not exceeding `18` is `15`, so `2` problems can be solved.

## Solution

See `solution.cpp`.