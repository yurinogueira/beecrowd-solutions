lista_1 = list(map(int, input().split()))
lista_2 = list(map(int, input().split()))
pode = True
for i in range(5):
    lista_1[i] += lista_2[i]
    if lista_1[i] != 1:
        pode = False
if pode:
    print("Y")
else:
    print("N")
