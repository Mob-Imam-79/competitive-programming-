t = int(input())

while t:
    t -= 1

    n, k = map(int, input().split())
    arr = list(map(int, input().split()))

    mn = float('inf')

    if k != 4:
        b1 = True

        for x in arr:
            if x % k == 0:
                b1 = False
            else:
                mn = min(mn, k - (x % k))

        if not b1:
            print(0)
        else:
            print(mn)

    else:
        cnt = 0
        b1 = True

        for x in arr:
            if x % 4 == 0:
                b1 = False

            if x % 2 == 0:
                cnt += 1

            mn = min(mn, 4 - (x % 4))

        if not b1:
            print(0)
        elif cnt == 0:
            print(min(2, mn))
        elif cnt == 1:
            if n == 1:
                print(mn)
            else:
                print(1)
        elif cnt >= 2:
            print(0)