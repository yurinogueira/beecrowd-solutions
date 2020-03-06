def ordernar(_i, _j, _p, _matriz):
    if _matriz[_i][_p] > _matriz[_j][_p]:
        _temp = _matriz[_i]
        _matriz[_i] = _matriz[_j]
        _matriz[_j] = _temp
    return _matriz


n = int(input())
matriz = [[]] * n
for i in range(n):
    linha = input().split()
    matriz[i] = [linha[0], int(linha[1]), int(linha[2]), int(linha[3])]

for i in range(n):
    for j in range(n):
        matriz = ordernar(i, j, 1, matriz)
for i in range(n):
    for j in range(n):
        if matriz[i][1] == matriz[j][1]:
            matriz = ordernar(i, j, 2, matriz)
for i in range(n):
    for j in range(n):
        if matriz[i][1] == matriz[j][1] and matriz[i][2] == matriz[j][2]:
            matriz = ordernar(i, j, 3, matriz)

for i in range(n):
    for j in range(n):
        if matriz[i][1] == matriz[j][1] and matriz[i][2] == matriz[j][2] and matriz[i][3] == matriz[j][3]:
            nomes = [matriz[i][0], matriz[j][0]]
            nomes.sort()
            if matriz[i][0] == nomes[0]:
                temp_nome = matriz[i]
                matriz[i] = matriz[j]
                matriz[j] = temp_nome

for i in range(n):
    print(matriz[i][0], matriz[i][1], matriz[i][2], matriz[i][3])
