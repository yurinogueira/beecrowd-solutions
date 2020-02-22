operacao = input()
matriz = [[0.0]] * 12
total = 0.0
for i in range(12):
    linha = [0.0] * 12
    for j in range(12):
        linha[j] = float(input())
    matriz[i] = linha
for i in range(1, 12):
    for j in range(0, i):
        total += matriz[j][i]
if operacao == 'S':
    print("%.1f" % total)
else:
    print("%.1f" % (total / 66))
