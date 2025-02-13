#include <stdio.h>

int main() {
    float score, total_score = 0;
    int x = 0, count = 0;

    while (1) {
        scanf("%f", &score);

        if (score >= 0 && score <= 10) {
            total_score += score;
            count += 1;

            if (count == 2) {
                printf("media = %.2f\n", total_score / 2);
            }
        } else {
            printf("nota invalida\n");
            continue;
        }

        while (count == 2 && (x > 2 || x < 1)) {
            scanf("%d", &x);
            printf("novo calculo (1-sim 2-nao)\n");
        }

        if (x == 2) break;
        if (x == 1) total_score = count = x = 0;      
        
    }

    
    return 0;
}
