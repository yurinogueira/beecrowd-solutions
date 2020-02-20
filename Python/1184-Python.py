Matriz = [0.0] * 12
acao = input()
for i in range(12):
    Matriz[i] = [0.0] * 12
for a in range(12):
    for b in range(12):
        Matriz[a][b] = float(input())
total = 0.0
if acao == "S":
    for a in range(1, 12, 1):
        for b in range(0, a, 1):
            total += Matriz[a][b]
else:
    for a in range(1, 12, 1):
        for b in range(0, a, 1):
            total += Matriz[a][b]
    total = total / 66
print("%.1f" % total)
