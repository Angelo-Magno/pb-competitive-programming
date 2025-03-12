salary = float(input())

tax_paid = 0

if salary > 4500.0:
    tax_paid += (salary - 4500.0) * 0.28
    salary = 4500.0

if salary > 3000.0:
    tax_paid += (salary - 3000.0) * 0.18
    salary = 3000.0

if salary > 2000.0:
    tax_paid += (salary - 2000.0) * 0.08

ans = 'Isento' if tax_paid == 0 else f'R$ {tax_paid:.2f}'

print(ans)
