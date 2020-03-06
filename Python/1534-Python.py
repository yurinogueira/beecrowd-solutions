try:
    while True:
        n = int(input())
        for i in range(n):
            s = ''
            for j in range(n):
                if i + j == n - 1:
                    s += '2'
                elif i == j:
                    s += '1'
                else:
                    s += '3'
            print(s)
except EOFError:
    pass
