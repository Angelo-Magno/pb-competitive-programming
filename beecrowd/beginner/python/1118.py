sum = count = 0

while 1:
    n = float(input())

    if 0 <= n <= 10:
        sum += n
        count += 1
    else:
        print("nota invalida")

    if count == 2:
        print(f"media = {sum / 2:.2f}")

        while 1:
            print("novo calculo (1-sim 2-nao)")
            op = int(input())

            if op == 2:
                exit()
            elif op == 1:
                break
        sum = count = 0
