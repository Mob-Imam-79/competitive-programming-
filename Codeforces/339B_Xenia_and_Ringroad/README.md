# 339B - Xenia and Ringroad

## Codeforces Problem

- **Problem Number:** 339B
- **Problem Name:** Xenia and Ringroad
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/339/B

## Problem Description

Xenia lives in a city with `n` houses arranged in a circle and numbered from `1` to `n`.

She starts at house `1` and needs to visit `m` houses in the given order.

Moving from one house to the next takes one unit of time.

If she reaches house `n`, the next house is house `1`.

The task is to calculate the total time needed to visit all required houses.

## Example

For:

```text
n = 4
m = 3
Houses = 2 3 4
```

Xenia starts at house `1`.

The movement is:

```text
1 → 2 → 3 → 4
```

Therefore, the total time is:

```text
3
```

For:

```text
n = 4
m = 3
Houses = 3 2 4
```

The movement is:

```text
1 → 3 → 4 → 2 → 3 → 4
```

The total time is:

```text
6
```

## Approach

The solution keeps track of the current position using `prev`.

1. Start from house `1`.
2. Read each required house `x`.
3. If `x` is greater than or equal to `prev`, move directly forward:
   `x - prev`.
4. If `x` is smaller than `prev`, Xenia must complete the remaining part of the circle and then reach `x`:
   `n + x - prev`.
5. Add the movement to `time`.
6. Update `prev` to `x`.
7. Print the total time.

## Algorithm

1. Read `n` and `m`.
2. Initialize `time = 0` and `prev = 1`.
3. Repeat `m` times:
   - Read `x`.
   - If `prev <= x`, add `x - prev` to `time`.
   - Otherwise, add `n + x - prev` to `time`.
   - Set `prev = x`.
4. Print `time`.

## Time Complexity

O(m).

Each required house is processed exactly once.

## Space Complexity

O(1).

Only a constant amount of extra space is used.

## C++ Solution

The complete implementation is available in `solution.cpp`.

The solution simulates movement around the circular road and adds the required distance between consecutive houses.

## Key C++ Concept Used

### Circular Movement

When the destination is ahead of the current position:

```text
time += x - prev;
```

When the destination is behind the current position, Xenia must wrap around the circle:

```text
time += n + x - prev;
```

For example, with `n = 5`:

```text
4 → 2
```

The movement is:

```text
4 → 5 → 1 → 2
```

So the distance is:

```text
5 + 2 - 4 = 3
```

### Tracking the Current Position

The variable `prev` stores Xenia's current house.

After reaching the destination:

```text
prev = x;
```

This allows the next movement to be calculated correctly.

## Solution

See `solution.cpp`.