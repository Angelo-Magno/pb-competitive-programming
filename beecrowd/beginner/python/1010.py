id1, units1, price1 = map(float, input().split())
id2, units2, price2 = map(float, input().split())

print(f'VALOR A PAGAR: R$ {units1 * price1 + units2 * price2:.2f}')
