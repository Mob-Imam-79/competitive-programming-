s = input()

s1 = "hello"

i = 0
j = 0

while(i < len(s) and j < len(s1)):
    if s[i] == s1[j]:
        i += 1
        j += 1
    else:
        i += 1

if j == len(s1):
    print("YES")
else:
    print("NO")


