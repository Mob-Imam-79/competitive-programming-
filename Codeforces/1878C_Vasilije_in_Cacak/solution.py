import math
import sys
from itertools import permutations

t = int(input())
while t > 0:
    n, k, x = map(int, input().split())

    min_sum = k * (k + 1) // 2
    max_sum = k * (2 * n - k + 1) // 2

    if min_sum <= x <= max_sum:
        print("YES")
    else:
        print("NO")
    t -= 1
    