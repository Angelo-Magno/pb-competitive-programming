#include <stdio.h>

int main() {
    float n1, n2, n3, n4, nf, average;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    average = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / (2 + 3 + 4 + 1);

    printf("Media: %.1f\n", average);

    if (average >= 7.0) {
        printf("Aluno aprovado.\n");

    } else if (average < 5.0) {
        printf("Aluno reprovado.\n");

    } else {
        printf("Aluno em exame.\n");
        
        scanf("%f", &nf);
        
        average = (average + nf) / 2.0;

        printf("Nota do exame: %.1f\n", nf);

        if (average >= 5) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", average);
    }

    return 0;
}
