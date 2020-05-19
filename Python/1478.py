n = int(input())
while not n == 0:
    for i in range(1, n + 1):
        x = i
        c = 1
        s = ''
        for j in range(1, n + 1):
            if j >= i:
                s += ("%4s" % str(c))
                c += 1
            else:
                s += ("%4s" % str(x))
                x -= 1
        print(s[1:])
    print()
    n = int(input())
