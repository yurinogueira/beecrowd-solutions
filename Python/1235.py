for _ in range(int(input())):
    string = input()
    metade = len(string) // 2
    print(''.join(reversed(string[:metade])) + ''.join(reversed(string[metade:])))
