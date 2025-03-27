x = int(input())

while (z := int(input())) <= x:
    pass

count = 1
min_sum = x

while min_sum <= z:
    count += 1
    x += 1
    min_sum += x

print(count)
