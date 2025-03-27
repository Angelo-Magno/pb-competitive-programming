x, y = map(int, input().split())

start = 1
end = start + x

while 1:
    cod = end < y + 1
    print(" ".join(map(str, range(start, end if cod else y + 1))))

    if not cod:
        break

    start = end
    end = start + x
