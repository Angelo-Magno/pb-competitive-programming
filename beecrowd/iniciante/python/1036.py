from math import sqrt

a, b, c = map(float, input().split())

delta = b**2 - 4 * a * c

if a == 0 or delta < 0:
    print("Impossivel calcular")
else:
    root1 = (-b + sqrt(delta)) / (2 * a)
    root2 = (-b - sqrt(delta)) / (2 * a)
    print(f"R1 = {root1:.5f}")
    print(f"R2 = {root2:.5f}")
