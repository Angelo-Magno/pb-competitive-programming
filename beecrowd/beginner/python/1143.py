n = int(input())

for i in range(1, n + 1):
    print(i, end="")
    for x in range(2, 4):
        print(f" {i ** x}", end="")
    print()
