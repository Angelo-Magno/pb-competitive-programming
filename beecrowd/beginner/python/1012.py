PI = 3.14159
a, b, c = map(float, input().split())

print("TRIANGULO: %.3f" % ((a * c) / 2))
print("CIRCULO: %.3f" % (PI * c * c))
print("TRAPEZIO: %.3f" % (((a + b) * c) / 2))
print("QUADRADO: %.3f" % (b * b))
print("RETANGULO: %.3f" % (a * b))
