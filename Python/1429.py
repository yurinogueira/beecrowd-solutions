def fatorial(a):
    if a - 1 > 2:
        return a * fatorial(a - 1)
    else:
        return a * (a - 1)


n = input()
while int(n) > 0:
    total = 0
    for i in range(len(n)):
        if len(n) - i != 1:
            total += (int(n[i]) * fatorial(len(n) - i))
        else:
            total += (int(n[i]))
    print(total)
    n = input()
