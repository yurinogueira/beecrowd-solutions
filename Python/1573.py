a, b, c = map(int, input().split())
while not (a == b == c == 0):
    va = a * b * c
    print(int(va**(1/3)))
    a, b, c = map(int, input().split())
