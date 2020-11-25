n = int(input())
for i in range(n):
    inicial = True
    lista = list(map(str, input().split()))
    lista.sort()
    lista2 = []
    string = ""

    for item in lista:
        if item not in lista2:
            if inicial:
                string += item
                inicial = False
            else:
                string += " " + item
            lista2.append(item)

    print(string)