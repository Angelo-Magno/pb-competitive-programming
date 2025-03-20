n = int(input())

begin = n + 2 if n <= 2 else 2

for i in range(begin, 10000, n):
    print(i)
