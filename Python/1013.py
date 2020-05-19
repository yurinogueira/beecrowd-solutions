a, b, c = map(int, input().split())
maior_inicial = (a + b + abs(a - b)) / 2
print(int((maior_inicial + c + abs(maior_inicial - c)) / 2), "eh o maior")
