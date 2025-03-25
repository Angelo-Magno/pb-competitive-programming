while 1:
    x, y = map(int, input().split())

    if x == y:
        break

    print("Decrescente" if x > y else "Crescente")
