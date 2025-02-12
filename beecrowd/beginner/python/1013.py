def greatest(a, b):
    return (a + b + abs(a - b)) // 2

a, b, c = map(int, input().split())

a = greatest(a, b)
b = greatest(a, c)

print(f'{b} eh o maior')
