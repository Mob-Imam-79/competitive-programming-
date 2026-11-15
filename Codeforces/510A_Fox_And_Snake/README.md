```markdown id="4x8n2k"
# 388A - Fox and Box Accumulation

## Codeforces Problem
- **Problem Number:** 263A
- **Problem Name:** Beautiful Matrix
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/263/A

## Problem

Given a matrix of size `r × c`, the task is to print a pattern where:

- Every cell in an even-numbered row contains `#`.
- In odd-numbered rows, all cells contain `.` except one cell containing `#`.
- The position of `#` alternates between the right and left sides of the odd rows.

The pattern continues until all `r` rows are printed.

## Approach
1. Read the number of rows `r` and columns `c`.
2. Initialize two variables:
   - `O1 = 1` for odd rows where `#` is placed at the right.
   - `O2 = 3` for odd rows where `#` is placed at the left.
3. Iterate through every row and column.
4. For even rows, print `#` for every column.
5. For odd rows:
   - If the row matches `O1`, print `#` at the last column.
   - If the row matches `O2`, print `#` at the first column.
   - Print `.` in all other positions.
6. Update `O1` and `O2` by `4` after using their respective rows.
7. Print the complete pattern.

## Example

For:
r = 7
c = 5

Output:
#####
....#
#####
#....
#####
....#
#####

## C++ Concepts Used
- Nested `for` loops
- Conditional statements
- Bitwise AND operator `&`
- Variables
- Pattern printing

## Complexity
- **Time:** `O(r × c)`
- **Space:** `O(1)`

## Solution
See `solution.cpp`.
```
