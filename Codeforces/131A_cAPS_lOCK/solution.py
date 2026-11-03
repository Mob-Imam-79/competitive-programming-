s = input()

if s.isupper():
    print(s.lower())
elif s[:1].islower() and (len(s) == 1 or s[1:].isupper()):
    print(s.swapcase())
else:
    print(s)
