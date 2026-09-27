# 785A - Anton and Polyhedrons

## Codeforces Problem
- **Problem Number:** 785A
- **Problem Name:** Anton and Polyhedrons
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/785/A

## Problem

Anton has `n` polyhedrons. Each polyhedron has a specific number of faces:

- `Tetrahedron` → 4 faces
- `Cube` → 6 faces
- `Octahedron` → 8 faces
- `Dodecahedron` → 12 faces
- `Icosahedron` → 20 faces

The task is to calculate the total number of faces of all the given polyhedrons.

## Approach
1. Read the number of polyhedrons `n`.
2. Read the name of each polyhedron.
3. Check the first character of the name:
   - `T` → add `4`.
   - `C` → add `6`.
   - `O` → add `8`.
   - `D` → add `12`.
   - `I` → add `20`.
4. Add the corresponding number of faces to `cnt`.
5. Print the total number of faces.

## Example
For:
n = 5

Polyhedrons:
Tetrahedron
Cube
Octahedron
Dodecahedron
Icosahedron

Total faces:
4 + 6 + 8 + 12 + 20 = 50

Output:
50

## C++ Concepts Used
- Strings
- `while` loop
- `if-else` conditions
- Character comparison
- Counting

## Complexity
- **Time:** `O(n)`
- **Space:** `O(1)`

## Solution
See `solution.cpp`.