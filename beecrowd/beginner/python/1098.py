def frange(start, stop, step):
    while start < stop:
        yield round(start, 10)
        start += step


i = 0
j = 1
for i in frange(0, 2, 0.2):
    for j in range(1, 4):
        print(f"I={i:.2g} J={j + i:.2g}")
