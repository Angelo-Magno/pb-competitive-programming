n = int(input())

count = 0
for _ in range(n):
    x = int(input())

    if 10 <= x <= 20:
        count += 1

print(f"{count} in")
print(f"{n - count} out")
