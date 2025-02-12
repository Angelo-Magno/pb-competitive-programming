age = int(input())

years = age // 365
age %= 365
months = age // 30
age %= 30
days = age

print(f'{years} ano(s)')
print(f'{months} mes(es)')
print(f'{days} dia(s)')
