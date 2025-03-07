a, b = map(int, input().split())

if a > b:
    a, b = b, a

print(f'{"Sao Multiplos" if b % a == 0 else "Nao sao Multiplos"}')
