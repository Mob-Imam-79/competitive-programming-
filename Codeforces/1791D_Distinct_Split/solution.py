t = int(input())

for _ in range(t):
    n = int(input())
    s = input()

    pref = [0] * n
    suff = [0] * n

    st = set()

    # Prefix distinct characters
    for i in range(n):
        st.add(s[i])
        pref[i] = len(st)

    st.clear()

    # Suffix distinct characters
    for i in range(n - 1, -1, -1):
        st.add(s[i])
        suff[i] = len(st)

    mx = 1

    for i in range(n - 1):
        mx = max(mx, pref[i] + suff[i + 1])

    print(mx)