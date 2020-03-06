n = int(input())
while n != 0:
    dx, dy = map(int, input().split())
    for _ in range(n):
        x, y = map(int, input().split())
        if x > dx and y > dy:
            print('NE')
        elif x < dx and y > dy:
            print('NO')
        elif x > dx and y < dy:
            print('SE')
        elif x < dx and y < dy:
            print('SO')
        else:
            print('divisa')
    n = int(input())
