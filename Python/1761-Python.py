try:
    import math
    while True:
        a, b, c = map(float, input().split())
        print("%.2f" % (5 * ((math.tan(a * (3.141592654 / 180)) * b) + c)))
except:
    pass
