try:
    while True:
        string = input()
        fim = ''
        inicioN = True
        inicioS = True
        for i in range(len(string)):
            if string[i] == '*' and inicioN:
                fim += '<b>'
                inicioN = False
            elif string[i] == '*' and not inicioN:
                fim += '</b>'
                inicioN = True
            elif string[i] == '_' and inicioS:
                fim += '<i>'
                inicioS = False
            elif string[i] == '_' and not inicioS:
                fim += '</i>'
                inicioS = True
            else:
                fim += string[i]
        print(fim)
except EOFError:
    pass
