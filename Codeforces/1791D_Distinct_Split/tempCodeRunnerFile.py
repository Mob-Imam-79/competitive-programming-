t = int(input())

while(t > 0):

    n = int(input())
    s = input()

    mx = 0
    for i in range(1,n):
        sm = len(set(s[:i])) + len(set(s[i:]))
        mx = max(mx,sm)
    print(mx)

