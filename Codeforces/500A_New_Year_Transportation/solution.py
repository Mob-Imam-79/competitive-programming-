n , t = map(int,input().split())

v = [0] + list(map(int,input().split())) + [0]
ind = 1
while(ind <= n and ind <= t):
    if ind == t:
        print("YES")
        break
    else:
        ind += v[ind]
else:
    print("NO")