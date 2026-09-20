# 427A - Police Recruits

## Codeforces Problem

- **Problem Number:** 427A
- **Problem Name:** Police Recruits
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/427/A

## Problem Description

There are `n` events involving police officers and crimes.

- A positive number represents the recruitment of that many police officers.
- A negative number represents a crime requiring one police officer.
- A crime can be solved only if at least one officer is available.
- If no officer is available when a crime occurs, the crime remains untreated.

The task is to count the total number of untreated crimes.

## Example

For:

```text
n = 5
Events = 3 -2 -1 -1 2
```

Process the events:

```text
3 officers → 3 available
-2 → 1 available
-1 → 0 available
-1 → no officer available → untreated crime
2 officers → 2 available
```

Therefore, the answer is:

```text
1
```

## Approach

Maintain the number of available police officers using `off`.

1. Read the number of events.
2. For each event:
   - If the value is positive, add the recruited officers to `off`.
   - Limit recruitment to `10` officers for each event.
   - If the value is negative and an officer is available, use one officer.
   - Otherwise, increment the untreated crime counter `cnt`.
3. Print `cnt`.

## Algorithm

1. Initialize `off = 0` and `cnt = 0`.
2. For each event:
   - If `x > 0`:
     - If `x > 10`, set `x = 10`.
     - Add `x` to `off`.
   - Otherwise:
     - If `off > 0`, add `x` to `off`.
     - Else, increment `cnt`.
3. Print `cnt`.

## Time Complexity

O(n).

Each event is processed exactly once.

## Space Complexity

O(1).

Only a constant amount of extra space is used.

## C++ Solution

The complete implementation is available in `solution.cpp`.

The solution keeps track of available police officers and counts crimes that occur when no officer is available.

## Key C++ Concept Used

### Simulation

The problem is solved by simulating each event in chronological order.

The variable `off` represents the number of available police officers, while `cnt` stores the number of untreated crimes.

### Handling Untreated Crimes

When a crime occurs and no officer is available:

```text
if(off > 0)
    off += x;
else
    cnt++;
```

Since `x` is negative, adding it consumes an available officer.

## Solution

See `solution.cpp`.