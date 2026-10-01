import math
import sys


def Theatre_Square(n : int, m : int , a : int)->int:

    print(((n+a-1)//a) * ((m+a-1)//a)) 


n, m, a = map(int, input().split())
Theatre_Square(n,m,a)