sum = count = 0

for _ in range(6):
    n = float(input())

    if n > 0:
        sum += n
        count += 1

print(f"{count} valores positivos")
print(f"{sum / count:.1f}")
