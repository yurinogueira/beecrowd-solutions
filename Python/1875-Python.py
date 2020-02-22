for _ in range(int(input())):
    R = 0
    G = 0
    B = 0
    for _ in range(int(input())):
        a, b = input().split()
        if a == 'R':
            if b == 'G':
                R += 2
            else:
                R += 1
        elif a == 'G':
            if b == 'B':
                G += 2
            else:
                G += 1
        elif a == 'B':
            if b == 'R':
                B += 2
            else:
                B += 1
    mx = max(R, G, B)
    if R == G == B:
        print('trempate')
    elif (mx == R and mx == G) or (mx == G and mx == B) or (mx == B and mx == R):
        print('empate')
    else:
        if mx == R:
            print('red')
        elif mx == G:
            print('green')
        else:
            print('blue')
