# 1899A - Game with Integers
## Codeforces Problem
- **Problem Number:** 1899A
- **Problem Name:** Game with Integers
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/1899/A

## Problem Description
Two players, First and Second, play a game with an integer `n`.

The result depends on whether the given integer is divisible by `3`.

The task is to determine which player wins based on the value of `n`.

## Example
For:
n = 6

Since:
6 % 3 = 0

The winner is:
Second

Therefore, the answer is:
Second

## Approach
The solution checks whether the given integer `x` is divisible by `3`.

1. Read the number of test cases.
2. For each test case, read the integer `x`.
3. If `x % 3 == 0`, print `Second`.
4. Otherwise, print `First`.

## Algorithm
1. Read the number of test cases `n`.
2. For each test case:
   - Read `x`.
   - Check whether `x` is divisible by `3`.
   - If `x % 3 == 0`, print `Second`.
   - Otherwise, print `First`.
3. Repeat until all test cases are processed.

## Time Complexity
O(n), where `n` is the number of test cases.

Each test case is processed in constant time.

## Space Complexity
O(1).

Only a constant amount of extra space is used.

## C++ Solution
The complete implementation is available in `solution.cpp`.

The solution uses the modulo operator `%` to determine whether the given integer is divisible by `3`.

## Key C++ Concept Used
### Modulo Operator
The modulo operator `%` returns the remainder after integer division.

For example:

```text
6 % 3 = 0
7 % 3 = 1
8 % 3 = 2

Therefore, if x % 3 == 0, the number is divisible by 3.

Solution

See solution.cpp.