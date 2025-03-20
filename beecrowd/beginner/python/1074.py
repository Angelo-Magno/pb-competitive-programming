n = int(input())

for _ in range(n):
    x = int(input())

    if x == 0:
        print("NULL")
    else:
        if x % 2 == 0:
            print("EVEN", end=" ")
        else:
            print("ODD", end=" ")

        if x > 0:
            print("POSITIVE")
        else:
            print("NEGATIVE")
