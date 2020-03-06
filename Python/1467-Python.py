try:
    while True:
        s = input().split()
        if s[0] != s[1] and s[0] != s[2]:
            print('A')
        elif s[1] != s[0] and s[1] != s[2]:
            print('B')
        elif s[2] != s[0] and s[2] != s[1]:
            print('C')
        else:
            print('*')
except EOFError:
    pass
