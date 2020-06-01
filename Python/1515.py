import sys

n = int(input())
while not n == 0:
    planeta = ''
    chegou_first = sys.maxsize
    for i in range(n):
        a = input().split()
        if int(a[1]) - int(a[2]) < chegou_first:
            chegou_first = int(a[1]) - int(a[2])
            planeta = a[0]
    print(planeta)
    n = int(input())
