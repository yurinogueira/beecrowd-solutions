fatorial = [1, 2, 6, 24, 120, 720, 5040, 40320]
c = int(input())
valor = 0
total = 0
while valor < c:
    for i in range(7, -1, -1):
        if fatorial[i] <= (c - valor):
            valor += fatorial[i]
            total += 1
            break
print(total)
