import math
try:
    while True:
        r1, x1, y1, r2, x2, y2 = map(int, input().split())
        d = math.sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2))
        if r1 >= r2 + d:
            print('RICO')
        else:
            print('MORTO')
except EOFError:
    pass
