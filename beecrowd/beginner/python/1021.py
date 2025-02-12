n = int(input().replace('.', ''))

notes = [10000, 5000, 2000, 1000, 500, 200]
coins = [100, 50, 25, 10, 5, 1]

print('NOTAS:')

for note in notes:
    print(f'{n // note} nota(s) de R$ {note/100:.2f}')
    n %= note

print('MOEDAS:')

for coin in coins:
    print(f'{n // coin} moeda(s) de R$ {coin/100:.2f}')
    n %= coin
