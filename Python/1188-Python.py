Matriz = [[0.0]] * 12
acao = input()
for i in range(12):
    Matriz[i] = [0.0] * 12
for a in range(12):
    for b in range(12):
        Matriz[a][b] = float(input())
total = 0.0
c = 5
for a in range(7, 12, 1):
    for b in range(c, a, 1):
        total += Matriz[a][b]
    c -= 1
if acao == "M":
    total = total / 30
print("%.1f" % total)
