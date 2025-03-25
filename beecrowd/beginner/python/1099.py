n = int(input())

for _ in range(n):
    x, y = map(int, input().split())

    if x > y:
        x, y = y, x

    x += (x % 2) + 1
    y -= (y % 2) + 1

    if x <= y:
        terms = (y - x + 2) / 2
        sum_pa = int((x + y) * terms / 2)
        print(f"{sum_pa}")
    else:
        print(0)
