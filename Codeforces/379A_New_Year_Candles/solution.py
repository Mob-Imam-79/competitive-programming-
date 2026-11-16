a, b = map(int, input().split())

hr = 0

while a != 0:
    div = a // b
    remin = a % b

    if div == 0:
        hr += remin
        break

    hr += div * b
    a = div + remin

print(hr)