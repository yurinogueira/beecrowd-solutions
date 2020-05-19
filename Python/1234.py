try:
    while True:
        string = input()
        resultado = ''
        flip = True
        for i in range(len(string)):
            if flip and string[i] != ' ':
                resultado += string[i].upper()
                flip = False
            elif not flip and string[i] != ' ':
                resultado += string[i].lower()
                flip = True
            else:
                resultado += ' '
        print(resultado)
except EOFError:
    pass
