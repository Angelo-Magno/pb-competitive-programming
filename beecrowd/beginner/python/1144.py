n = int(input())

for x1 in range(1, n + 1):
    x2 = x1 * x1
    x3 = x2 * x1
    print(f"{x1} {x2} {x3}")
    print(f"{x1} {x2 + 1} {x3 + 1}")
