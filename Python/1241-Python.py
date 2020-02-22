for _ in range(int(input())):
    a, b = map(str, input().split())
    a = ''.join(reversed(a))
    b = ''.join(reversed(b))
    pode = True
    if len(b) <= len(a):
        for i in range(len(b)):
            if a[i] != b[i]:
                pode = False
    else:
        pode = False
    if pode:
        print('encaixa')
    else:
        print('nao encaixa')
