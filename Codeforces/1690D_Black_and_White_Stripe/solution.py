t = int(input())

for _ in range(t):
    n, k = map(int, input().split())

    pref = [0] * (n + 1)
    s = input()
    for i in range(1, n + 1):
        if s[i - 1] == 'B':
            pref[i] = pref[i - 1] + 1
        else:
            pref[i] = pref[i - 1]
    mx = 0
    for i in range(n - k + 1):
        mx = max(mx, pref[i + k] - pref[i])
    print(k - mx)