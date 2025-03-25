sum = count = 0

while 1:
    n = float(input())

    if 0 <= n <= 10:
        sum += n
        count += 1
    else:
        print("nota invalida")

    if count == 2:
        break

print(f"media = {sum / 2:.2f}")
