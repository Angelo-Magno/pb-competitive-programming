n = int(input())

for _ in range(n):
    a, b, c = map(float, input().split())

    w_average = (a * 2 + b * 3 + c * 5) / (2 + 3 + 5)

    print(f"{w_average:.1f}")
