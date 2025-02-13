#include <stdio.h>

int main() {
    float score, total_score = 0;
    int count = 0;

    while (1) {
        scanf("%f", &score);

        if (score >= 0 && score <= 10) {
            total_score += score;
            count += 1;
        } else {
            printf("nota invalida\n");
        }

        if (count == 2) break;
    }

    printf("media = %.2f\n", total_score / 2);
    
    return 0;
}
