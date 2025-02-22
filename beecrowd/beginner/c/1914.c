#include <stdio.h>
#include <string.h>

int main() {
    int qt, n, m, sum;
    char player1[12], player2[12], c1[6], c2[6];

    scanf("%d", &qt);

    for (int i = 0; i < qt; i++) {
        scanf("%s %s %s %s", &player1, &c1, &player2, &c2);
        scanf("%d %d", &n, &m);

        sum = n + m;

        if ((sum % 2 == 0 && strcmp(c1, "PAR") == 0) || (sum % 2 == 1 && strcmp(c1, "IMPAR") == 0)) {
            printf("%s\n", player1);
        } else {
            printf("%s\n", player2);
        }
    }
    return 0;
}
