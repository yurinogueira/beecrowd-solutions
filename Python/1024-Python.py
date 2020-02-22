alfabeto = 'abcdefghijklmnopqrstuvwxyz'
for _ in range(int(input())):
    string = input()
    stringfinal = ""
    tamanho = len(string)
    for i in range(tamanho):
        if string[i].lower() in alfabeto:
            stringfinal += chr(ord(string[i]) + 3)
        else:
            stringfinal += string[i]
    stringfinal = ''.join(reversed(stringfinal))
    stringfinaltrue = ''
    for i in range(0, tamanho // 2):
        stringfinaltrue += stringfinal[i]
    for i in range(tamanho // 2, tamanho, 1):
        stringfinaltrue += chr(ord(stringfinal[i]) - 1)
    print(stringfinaltrue)
