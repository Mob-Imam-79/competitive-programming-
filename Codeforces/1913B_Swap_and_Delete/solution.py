t = int(input())

for _ in range(t):
    s = input().strip()

    zeros = s.count('0')
    ones = s.count('1')

    i = 0

    for i in range(len(s)):
        if s[i] == '0' and ones > 0:
            ones -= 1

        elif s[i] == '1' and zeros > 0:
            zeros -= 1

        else:
            break
    else:
        i = len(s)

    print(len(s) - i)