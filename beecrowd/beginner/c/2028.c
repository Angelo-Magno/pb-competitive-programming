#include <stdio.h>

int main() {
    int n, c=1, numbers;

    while (scanf("%d", &n) != EOF) {
        numbers = (n * (1 + n) / 2) + 1;
        
        printf("Caso %d: %d numero%s\n", c, numbers, numbers > 1 ? "s" : "");

        printf("0");
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                printf(" %d", i);
            }
        }
        printf("\n\n");

        c++;
    }
    
    return 0;
}
