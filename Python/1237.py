sa, sb, maxi, mini = '', '', '', ''
tamin = 0
mas = 0
f = True
while True:
    try:
        sa = input()
        sb = input()
        if len(sa) >= len(sb):
            maxi = sa
            mini = sb
        else:
            maxi = sb
            mini = sa
        tamin = len(mini)
        mas = tamin
        f = True
        while mas > 0 and f:
            diff = tamin - mas
            for i in range(diff + 1):
                if mini[i:i + mas] in maxi:
                    f = False
                    mas += 1
                    break
            mas -= 1
        print(mas)
    except EOFError:
        break
