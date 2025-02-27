#include <stdio.h>
#include <stdlib.h>

int main() {
    int p, n, curr, next, flag=1;

    scanf("%d %d", &p, &n);

    scanf("%d", &curr);

    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &next);
        
        if (abs(curr - next) > p) flag = 0;

        curr = next;
    }

    printf("%s\n", flag ? "YOU WIN": "GAME OVER");

    return 0;
}
