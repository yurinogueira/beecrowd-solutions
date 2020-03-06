N, C = map(int, input().split())
pessoas = 0
passou = False
for _ in range(N):
    S, E = map(int, input().split())
    pessoas -= S
    pessoas += E
    if pessoas > C:
        passou = True
if passou:
    print('S')
else:
    print('N')
