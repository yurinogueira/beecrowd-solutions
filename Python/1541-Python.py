import math
try:
    a, b, c = map(int, input().split())
    while True:
        print(int(math.sqrt((a * b * 100) / c)))
        a, b, c = map(int, input().split())
except ValueError:
    pass
