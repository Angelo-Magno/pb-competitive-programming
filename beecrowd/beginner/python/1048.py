salary = float(input())

if salary <= 400:
    percentage = 0.15

elif salary <= 800:
    percentage = 0.12

elif salary <= 1200:
    percentage = 0.10

elif salary <= 2000:
    percentage = 0.07

else:
    percentage = 0.04


adjustment = salary * percentage
new_salary = salary + adjustment

print(f'Novo salario: {new_salary:.2f}')
print(f'Reajuste ganho: {adjustment:.2f}')
print(f'Em percentual: {percentage * 100:.0f} %')
