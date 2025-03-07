a, b, c = map(float, input().split())

if a + b <= c or a + c <= b or b + c <= a:
    print(f'Area = {(a + b) / 2 * c:.1f}')
else:
    print(f'Perimetro = {a + b + c:.1f}')
