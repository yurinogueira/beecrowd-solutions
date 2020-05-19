import math
n = int(input())
for _ in range(n):
    x, y = map(int, input().split())
    x = math.ceil((x - 2) / 3)
    y = math.ceil((y - 2) / 3)
    print(x*y)
