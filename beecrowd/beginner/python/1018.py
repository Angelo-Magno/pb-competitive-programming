n = int(input())

print(n)

banknotes = [100, 50, 20, 10, 5, 2, 1]

for note in banknotes:
    print(f'{n // note} nota(s) de R$ {note},00')
    n %= note
