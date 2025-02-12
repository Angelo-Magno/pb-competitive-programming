#include <stdio.h>

int main() {
    int count = 0;
    float n, sum = 0.0;

    for (int i = 0; i < 6; i++) {
        scanf("%f", &n);
        
        if (n > 0) {
            sum += n;
            count++;
        };
    }

    printf("%d valores positivos\n", count);
    printf("%.1f\n", sum / count);

    return 0;
}
