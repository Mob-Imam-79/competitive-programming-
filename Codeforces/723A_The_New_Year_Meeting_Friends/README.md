# 723A - The New Year: Meeting Friends
## Codeforces Problem
- **Problem Number:** 723A
- **Problem Name:** The New Year: Meeting Friends
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/723/A

## Problem Description
Three friends live at different positions on a straight line.

They want to meet at one position. The task is to find the minimum total distance they need to travel.

The optimal meeting point is the position of the friend who lives in the middle.

## Example
For:
a = 1
b = 2
c = 3

The middle position is:
2

The total distance is:
|1 - 2| + |2 - 2| + |3 - 2| = 2

Therefore, the answer is:
2

## Approach
The solution first determines the middle value among the three positions.

1. If `b` lies between `a` and `c`, then `b` is the middle position.
2. Otherwise, if `a` lies between `b` and `c`, then `a` is the middle position.
3. Otherwise, `c` is the middle position.
4. Calculate the total distance from all three positions to the middle position using the absolute difference.
5. Print the minimum total distance.

## Algorithm
1. Read the three positions `a`, `b`, and `c`.
2. Find the middle value among the three positions.
3. Store the middle value in `mn`.
4. Calculate:
   `|mn - a| + |mn - b| + |mn - c|`
5. Print the total distance.

## Time Complexity
O(1).

Only a constant number of comparisons and arithmetic operations are performed.

## Space Complexity
O(1).

Only a constant amount of extra space is used.

## C++ Solution
The complete implementation is available in `solution.cpp`.

The solution uses conditional statements and the absolute difference to find the minimum total distance.

## Key C++ Concept Used
### Absolute Difference
The `abs()` function is used to calculate the distance between two positions.

For example:

```text
abs(5 - 3) = 2
abs(3 - 5) = 2

This allows the total travel distance to be calculated regardless of which position is larger.

Solution

See solution.cpp.