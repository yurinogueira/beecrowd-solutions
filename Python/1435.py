n = int(input())
while not n == 0:
    for i in range(1, n + 1, 1):
        string = ''
        first_t = True
        if n <= 2:
            string = '%3s' % 1
        for j in range(1, n + 1, 1):
            x = i
            if j < x:
                x = j
            if n - i + 1 < x:
                x = n - i + 1

            if n - j + 1 < x:
                x = n - j + 1
            if not first_t:
                if j < n:
                    string += ("%4s" % str(x))
                elif n == 2:
                    print("%3s" % 1 + "%4s" % 1)
                    first_t = True
                else:
                    string += ("%4s" % str(x))
                    print(string)
                    string = ''
                    first_t = True
            elif first_t and n != 1:
                string += ("%3s" % str(x))
                first_t = False
            else:
                print(string)
                first_t = False
    print()
    n = int(input())
