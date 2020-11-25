try:
    while True:
        c = int(input())
        if c == 0:
            break
        x = [None]*c
        y = [None]*c
        no_fun = False
        rep = False
        for i in range(c):
            X, Y = map(str, input().split(" -> "))
            if X in x:
                no_fun = True
            if Y in y:
                rep = True
            x[i] = X
            y[i] = Y
        if no_fun:
            print("Not a function.")
        elif rep:
            print("Not invertible.")
        else:
            print("Invertible.")
except EOFError:
    exit