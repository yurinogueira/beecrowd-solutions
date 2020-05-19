operacao = input()
matriz = [[0.0]] * 12
total = 0.0
for i in range(12):
    linha = [0.0] * 12
    for j in range(12):
        linha[j] = float(input())
    matriz[i] = linha
for i in range(0, 5):
    for j in range(i + 1, 11 - i):
        total += matriz[i][j]
if operacao == 'S':
    print("%.1f" % total)
else:
    print("%.1f" % (total / 30))
