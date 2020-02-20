km, pd = map(int, input().split())
custo, peda = map(int, input().split())
total = km * custo
pdori = pd
while pd <= km:
    total += peda
    pd += pdori
print(total)
