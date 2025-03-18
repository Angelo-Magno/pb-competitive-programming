even = positive = zeros = 0

for _ in range(5):
    n = int(input())

    if n % 2 == 0:
        even += 1
    if n > 0:
        positive += 1
    elif n == 0:
        zeros += 1

print(f'{even} valor(es) par(es)')
print(f'{5 - even} valor(es) impar(es)')
print(f'{positive} valor(es) positivo(s)')
print(f'{5 - zeros - positive} valor(es) negativo(s)')
