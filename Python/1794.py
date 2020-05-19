n = int(input())
la, lb = map(int, input().split())
sa, sb = map(int, input().split())
if sa <= n >= la and sb >= n <= lb:
    print("possivel")
else:
    print("impossivel")
