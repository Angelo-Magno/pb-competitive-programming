n1, n2, n3, n4 = map(float, input().split())

average = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / (2 + 3 + 4 + 1)

print(f"Media: {average:.1f}")

if average >= 7.0:
    print("Aluno aprovado.")
elif average < 5.0:
    print("Aluno reprovado.")
else:
    print("Aluno em exame.")

    nf = float(input())

    print(f"Nota do exame: {nf:.1f}")

    average = (average + nf) / 2.0

    if average >= 5.0:
        print("Aluno aprovado.")
    else:
        print("Aluno reprovado.")

    print(f"Media final: {average:.1f}")
