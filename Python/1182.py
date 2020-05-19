laco = int(input())
operacao = input()
matriz = [[0.0]] * 12
total = 0.0
for i in range(12):
    linha = [0.0] * 12
    for b in range(12):
        linha[b] = float(input())
        if b == laco:
            total += linha[b]
    matriz[i] = linha
if operacao == 'S':
    print("%.1f" % total)
else:
    print("%.1f" % (total / 12))
