x = int(input())
y = int(input())

if x > y:
    x, y = y, x

x = x + 1 if x % 2 == 0 else x + 2

sum = 0
for i in range(x, y, 2):
    sum += i

print(sum)
