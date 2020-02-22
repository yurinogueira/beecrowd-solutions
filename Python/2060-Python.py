n = int(input())
lista = list(map(int, input().split()))
mult_2 = 0
mult_3 = 0
mult_4 = 0
mult_5 = 0
for i in range(n):
    if lista[i] % 2 == 0:
        mult_2 += 1
    if lista[i] % 3 == 0:
        mult_3 += 1
    if lista[i] % 4 == 0:
        mult_4 += 1
    if lista[i] % 5 == 0:
        mult_5 += 1
print(mult_2, "Multiplo(s) de 2")
print(mult_3, "Multiplo(s) de 3")
print(mult_4, "Multiplo(s) de 4")
print(mult_5, "Multiplo(s) de 5")
