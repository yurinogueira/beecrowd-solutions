a = int(input())
lista = list(map(int, input().split()))
minimo = lista[0]
posicao = 0
for i in range(1, a):
    if minimo > lista[i]:
        minimo = lista[i]
        posicao = i
print("Menor valor:", minimo)
print("Posicao:", posicao)
