#include <stdio.h>

int main() {
    int game_start, game_end;

    scanf("%d %d", &game_start, &game_end);

    if (game_start == game_end) {
        printf("O JOGO DUROU 24 HORA(S)\n");
    } else if (game_start > game_end) {
        printf("O JOGO DUROU %d HORA(S)\n", 24 - game_start + game_end); 
    } else {
        printf("O JOGO DUROU %d HORA(S)\n", game_end - game_start);
    }
    return 0;
}
