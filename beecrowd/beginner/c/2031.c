#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char player1[8], player2[8];

    scanf("%d", &n);

    while (n--) {
        scanf("%s", &player1);
        scanf("%s", &player2);

        if (strcmp(player1, player2) == 0) {
            if (strcmp(player1, "ataque") == 0) {
                printf("Aniquilacao mutua\n");

            } else if (strcmp(player1, "pedra") == 0) {
                printf("Sem ganhador\n");

            } else if (strcmp(player1, "papel") == 0) {
                printf("Ambos venceram\n");

            }
        } else if (strcmp(player1, "papel") == 0) {
            printf("Jogador 2 venceu\n");

        } else if (strcmp(player1, "ataque") == 0) {
            printf("Jogador 1 venceu\n");

        } else {
            if (strcmp(player2, "ataque") == 0) {
                printf("Jogador 2 venceu\n");

            } else {
                printf("Jogador 1 venceu\n");
                
            }
        }
    }
    
    return 0;
}
