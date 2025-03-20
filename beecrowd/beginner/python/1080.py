pos = 1
highest_value = int(input())

for i in range(2, 101):
    value = int(input())

    if value > highest_value:
        pos = i
        highest_value = value

print(highest_value)
print(pos)
