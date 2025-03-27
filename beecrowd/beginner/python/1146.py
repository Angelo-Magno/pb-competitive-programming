while 1:
    x = int(input())

    if x == 0:
        break

    print(" ".join(map(str, range(1, x + 1))))
