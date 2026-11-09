n = int(input())

s1 = ""
s2 = None
mp = {}
while(n > 0):

    s = input()

    if s1 == "":
        s1 = s
    elif s1 != s and s2 == None:
        s2 = s
    if s not in mp:
        mp[s] = 0
    mp[s] += 1
    n -= 1

if s2 is not None and mp[s1] > mp[s2]:
    print(s1)
elif s2 is None: 
    print(s1)
else:
    print(s2)


    



