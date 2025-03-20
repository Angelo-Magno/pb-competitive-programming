n = int(input())

rabbits = rats = frogs = total = 0

for _ in range(n):
    amount, animal_type = input().split()
    amount = int(amount)

    match animal_type:
        case "C":
            rabbits += amount
        case "R":
            rats += amount
        case "S":
            frogs += amount

    total += amount

print(f"Total: {total} cobaias")
print(f"Total de coelhos: {rabbits}")
print(f"Total de ratos: {rats}")
print(f"Total de sapos: {frogs}")
print(f"Percentual de coelhos: {rabbits / total * 100:.2f} %")
print(f"Percentual de ratos: {rats / total * 100:.2f} %")
print(f"Percentual de sapos: {frogs / total * 100:.2f} %")
