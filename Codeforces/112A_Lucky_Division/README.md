````markdown
# 122A - Lucky Division

## Codeforces Problem

- **Problem Name:** Lucky Division
- **Problem Number:** 122A
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/122/A

## Problem Description

A number is called *lucky* if its decimal representation contains only the digits `4` and `7`.

A number is called *nearly lucky* if it is divisible by at least one lucky number.

Given an integer `n`, determine whether it is nearly lucky.

Print `YES` if it is nearly lucky; otherwise, print `NO`.

## Example

**Input**
```text
47
```

**Output**
```text
YES
```

**Explanation:**

The number `47` is itself a lucky number. Since `47` is divisible by `47`, it is nearly lucky.

## Approach

### Python Approach

- Store all lucky numbers up to three digits in a list.
- Iterate through the list.
- If `n` is divisible by any lucky number, print `YES` and terminate.
- If no lucky number divides `n`, print `NO`.

### C++ Approach

- First, check whether `n` is divisible by any lucky number from the predefined list.
- If none of them divide `n`, examine each digit of `n`.
- If every digit is either `4` or `7`, print `YES`.
- If any digit is neither `4` nor `7`, print `NO`.

## Algorithm

1. Read the integer `n`.
2. Check divisibility by the lucky numbers:
   `4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777`.
3. If divisible by any of them, print `YES`.
4. Otherwise, check whether all digits of `n` are `4` or `7`.
5. Print `YES` if all digits are lucky; otherwise, print `NO`.

## Time Complexity

- **Python:** `O(1)` — the list contains a fixed number of lucky numbers.
- **C++:** `O(1)` — the divisibility checks and digit traversal are bounded by the input's fixed integer size.

## Space Complexity

- **Python:** `O(1)` — a fixed-size list of lucky numbers is used.
- **C++:** `O(1)` — only a constant amount of extra memory is required.

## Python Solution

```python
n = int(input())

lucky_numbers = [4, 7, 44, 47, 74, 77,
                 444, 447, 474, 477,
                 744, 747, 774, 777]

for lucky in lucky_numbers:
    if n % lucky == 0:
        print("YES")
        exit()

print("NO")
```

## C++ Solution

```cpp
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 4 == 0 || n % 7 == 0 ||
        n % 44 == 0 || n % 47 == 0 ||
        n % 74 == 0 || n % 77 == 0 ||
        n % 444 == 0 || n % 447 == 0 ||
        n % 474 == 0 || n % 477 == 0 ||
        n % 744 == 0 || n % 747 == 0 ||
        n % 774 == 0 || n % 777 == 0)
    {
        cout << "YES";
        return 0;
    }

    while (n != 0)
    {
        int remin = n % 10;

        if (remin != 4 && remin != 7)
        {
            cout << "NO";
            return 0;
        }

        n = n / 10;
    }

    if (n == 0)
    {
        cout << "YES";
        return 0;
    }

    return 0;
}
```

## Key Concept Used

- **Lucky Numbers:** Numbers containing only the digits `4` and `7`.
- **Divisibility:** Checking whether a number is divisible by a lucky number.
- **Digit Extraction:** Using `% 10` to extract the last digit and `/ 10` to remove it.
- **Conditional Statements:** Determining whether the number satisfies the required condition.

## Solution

The problem can be solved by checking divisibility against a predefined list of lucky numbers. The Python solution directly checks these divisors, while the C++ solution also includes a digit-based check to determine whether the input itself is a lucky number.
````