a, b = map(str, input().split())
while not a == b == '0':
    result = ''
    for i in range(len(b)):
        if b[i] != a:
            result += b[i]
    for i in range(len(result)):
        if result[i] != '0':
            result = result[i:]
            break
    v = False
    for i in range(len(result)):
        if result[i] != '0':
            v = True
    if result == '':
        result = '0'
    if not v:
        print(0)
    else:
        print(result)
    a, b = map(str, input().split())
