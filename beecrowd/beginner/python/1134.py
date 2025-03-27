alcohol = gasoline = diesel = 0

while 1:
    op = int(input())

    if op == 4:
        break

    if op < 1 or op > 3:
        continue

    match op:
        case 1:
            alcohol += 1
        case 2:
            gasoline += 1
        case 3:
            diesel += 1

print("MUITO OBRIGADO")
print(f"Alcool: {alcohol}")
print(f"Gasolina: {gasoline}")
print(f"Diesel: {diesel}")
