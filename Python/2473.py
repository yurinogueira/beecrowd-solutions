a = input().split()
b = input().split()
total = 0
for i in range(6):
    if a[i] in b:
        total += 1
if total == 6:
    print("sena")
elif total == 5:
    print("quina")
elif total == 4:
    print("quadra")
elif total == 3:
    print("terno")
else:
    print("azar")
