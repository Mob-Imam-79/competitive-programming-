n = int(input())

cnt = 0
while(n != 0):
    remin = n % 10
    if(remin == 7 or remin == 4):
        cnt += 1
    n = n // 10

if cnt == 7 or cnt == 4:
    print("YES")
else:
    print("NO")


