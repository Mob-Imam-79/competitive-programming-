t = int(input())

while t > 0:
    n, ch = input().split()
    n = int(n)

    s = input()
    s1 = s + s

    if ch == 'g':
        print(0)
        t -= 1
        continue

    mx = 0
    pos = -1

    for i in range(len(s1) - 1, -1, -1):
        if s1[i] == 'g':
            pos = i
        elif s1[i] == ch and pos != -1:
            mx = max(mx, pos - i)

    print(mx)

    t -= 1