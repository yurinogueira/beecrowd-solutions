try:
    import math
    while True:
        degraus = int(input())
        H, C, L = map(int, input().split())
        print("%.4f" % ((math.hypot(H, C) * L * degraus) / 10000.0))
except EOFError:
    pass
