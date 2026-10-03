import sys
import math

n = int(input())

fx = 0
fy = 0
fz = 0

while n > 0:
    x , y , z = map(int, input().split())
    fx += x
    fy += y
    fz += z
    n -= 1

if fx == fy == fz == 0:
     print("YES")
else:
     print("NO")
