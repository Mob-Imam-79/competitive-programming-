n, t = map(int, input().split())

s1 = input()
s = list(s1)

for j in range(t):
    i = 0
    while i < len(s) - 1:
        if s[i] == 'B' and s[i+1] == 'G':
            s[i], s[i+1] = s[i+1], s[i]
            i += 2  
        else:
            i += 1  

s1 = "".join(s) 
print(s1)
