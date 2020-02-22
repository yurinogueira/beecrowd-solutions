for _ in range(int(input())):
    string_a, string_b = map(str, input().split())
    maior = 0
    if len(string_a) > len(string_b):
        maior = len(string_a)
    else:
        maior = len(string_b)
    string_c = ''
    i = 0
    while i < maior:
        if i < len(string_a):
            if string_a[i] != '':
                string_c += string_a[i]
        if i < len(string_b):
            if string_b[i] != '':
                string_c += string_b[i]
        i += 1
    print(string_c)
