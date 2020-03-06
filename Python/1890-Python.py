n = int(input())
for _ in range(n):
    a, b = map(int, input().split())
    if a > 0 and b == 0:
        print(pow(26, a))
    elif a == 0 and b > 0:
        print(pow(10, b))
    elif a > 0 and b > 0:
        valor = 1
        for _ in range(a):
            valor *= 26
        for _ in range(b):
            valor *= 10
        print(valor)
    else:
        print(0)
