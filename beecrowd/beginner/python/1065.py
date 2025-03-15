count = 0

for _ in range(5):
    n = int(input())

    if n % 2 == 0:
        count += 1

print(f"{count} valores pares")
