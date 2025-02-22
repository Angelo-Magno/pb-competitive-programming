#include <stdio.h>
#include <string.h>

int main() {
    int t, choice;
    char sheldon[10], raj[10];
    char win[5][10] = {"tesoura", "papel", "pedra", "lagarto", "Spock"};
    char lose[5][2][10] = {{"papel", "lagarto"}, {"pedra", "Spock"}, {"lagarto", "tesoura"},
                           {"Spock", "papel"}, {"tesoura", "pedra"}};

    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        scanf("%s %s", &sheldon, &raj);

        if (strcmp(sheldon, raj) == 0) {
            printf("Caso #%d: De novo!\n", i);
        } else {
            choice = 0;
            
            while (strcmp(sheldon, win[choice]) != 0){
                choice++;
            }

            if (strcmp(lose[choice][0], raj) == 0 || strcmp(lose[choice][1], raj) == 0) {
                printf("Caso #%d: Bazinga!\n", i);
            } else {
                printf("Caso #%d: Raj trapaceou!\n", i);
            }
            
        }
    }

    return 0;
}
