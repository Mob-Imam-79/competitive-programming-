# 1374C - Move Brackets

## Codeforces Problem

- **Problem Number:** 1374C
- **Problem Name:** Move Brackets
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/1374/C

## Problem Description

Given a bracket sequence of even length, determine the minimum number of brackets that need to be moved to make the sequence balanced.

A bracket sequence is balanced when every opening bracket `(` has a corresponding closing bracket `)` in the correct order.

## Example

For:

```text
s = ))((
```

There are unmatched closing brackets at the beginning.

By moving brackets, the sequence can be balanced:

```text
()()
```

Therefore, the minimum number of moves is:

```text
2
```

## Approach

The solution uses a stack to keep track of unmatched opening brackets.

1. Read the number of test cases.
2. For each test case, read the length `s`.
3. Process each bracket:
   - If the bracket is `(`, push it into the stack.
   - If the bracket is `)` and the stack is not empty, remove one opening bracket.
   - Otherwise, the closing bracket remains unmatched.
4. After processing the complete sequence, the remaining brackets in the stack represent unmatched opening brackets.
5. Print the number of unmatched brackets.

## Algorithm

1. Read the number of test cases `n`.
2. For each test case:
   - Read the length of the bracket sequence.
   - Initialize an empty stack.
   - For every bracket:
     - If it is `(`, push it into the stack.
     - If it is `)` and the stack is not empty, pop the stack.
   - Print the size of the stack.

## Time Complexity

O(n) per test case.

Each bracket is processed once.

## Space Complexity

O(n).

The stack can contain up to `n` opening brackets.

## C++ Solution

The complete implementation is available in `solution.cpp`.

The solution uses a stack to match opening and closing brackets and counts the remaining unmatched opening brackets.

## Key C++ Concept Used

### Stack

A stack follows the **Last In, First Out (LIFO)** principle.

When an opening bracket is encountered:

```text
(
```

it is pushed into the stack.

When a matching closing bracket is encountered:

```text
)
```

the top opening bracket is removed.

### Matching Brackets

For example:

```text
(())
```

Processing the sequence:

```text
( → push
( → push
) → pop
) → pop
```

The stack becomes empty, meaning all brackets are matched.

## Solution

See `solution.cpp`.