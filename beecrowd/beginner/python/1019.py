n = int(input())

seconds = n % 60
n //= 60
minutes = n % 60
hours = n // 60

print(f'{hours}:{minutes}:{seconds}')
