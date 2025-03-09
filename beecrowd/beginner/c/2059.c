#include <stdio.h>

int main() {
    int p, j1, j2, r, a, sum;

    scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);

    sum = j1 + j2;

    if (r == a) {
        if (r == 1) {
            printf("Jogador 2 ganha!\n");
        } else {
            if (p == !(sum % 2)) {
                printf("Jogador 1 ganha!\n");
            } else {
                printf("Jogador 2 ganha!\n");
            }
        }

    } else {
        printf("Jogador 1 ganha!\n");
    }

    return 0;
}
