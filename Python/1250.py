for _ in range(int(input())):
    tiros = int(input())
    alturas = list(map(int, input().split()))
    pulos = input()
    atingido = 0
    for i in range(tiros):
        if pulos[i] == "S" and alturas[i] <= 2 or pulos[i] == "J" and alturas[i] >= 3:
            atingido += 1
    print(atingido)
