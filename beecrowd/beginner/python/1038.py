items = [4.0, 4.5, 5.0, 2.0, 1.5]

code, amount = map(int, input().split())

print(f'Total: R$ {items[code - 1] * amount:.2f}')
