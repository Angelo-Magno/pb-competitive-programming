array = list(map(int, input().split()))
aux = array.copy()

aux.sort()

for v in aux:
    print(v)

print()

for v in array:
    print(v)
