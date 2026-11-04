Pstr , n = map(int, input().split())

l = []

for i in range(n):
    l1 = list(map(int,input().split()))
    l.append(l1)

l.sort()

for i in range(n):
    if l[i][0] < Pstr:
        Pstr += l[i][1]
    else:
        print("NO")
        break
else:
    print("YES")