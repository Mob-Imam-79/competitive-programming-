t = int(input())

for _ in range(t):
    n, k, q = map(int, input().split())
    arr = list(map(int, input().split()))

    total = 0
    length = 0
    for x in arr:
        if x <= q:
            length += 1
        else:
            if length >= k:
                total += (length - k + 1) * (length - k + 2) // 2
            length = 0
    if length >= k:
        total += (length - k + 1) * (length - k + 2) // 2
    print(total)