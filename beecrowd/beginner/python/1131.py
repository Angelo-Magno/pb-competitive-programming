gremio_victories = inter_victories = count_matches = draws = flag = 0

while 1:
    inter, gremio = map(int, input().split())

    count_matches += 1

    if gremio > inter:
        gremio_victories += 1
    elif inter > gremio:
        inter_victories += 1
    else:
        draws += 1

    while 1:
        print("Novo grenal (1-sim 2-nao)")

        op = int(input())

        if op == 2:
            flag = 1
            break
        elif op == 1:
            break
    
    if flag:
        break

print(f"{count_matches} grenais")
print(f"Inter:{inter_victories}")
print(f"Gremio:{gremio_victories}")
print(f"Empates:{draws}")

if inter_victories == gremio_victories:
    print("Não houve vencedor")
else:
    print(
        "Inter venceu mais"
        if inter_victories > gremio_victories
        else "Gremio venceu mais"
    )
