def recursao(c):
    if c - 1 > 0:
        return recursao(c - 1) + (c ** 2)
    else:
        return c ** 2


n = int(input())
while n > 0:
    print(recursao(n))
    n = int(input())
