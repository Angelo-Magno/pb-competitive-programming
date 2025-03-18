x = int(input())

x = x + 1 if x % 2 == 0 else x

for i in range(x, x + 12, 2):
    print(i)
