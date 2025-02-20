#include <stdio.h>

int main() {
    int n, ones, center, limit;

    while (scanf("%d", &n)!=EOF) {
        center = n / 2;
        ones = n / 3;
        limit = n - ones;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                if (i == center && j == center){
                    printf("4");
                } else if (i >= ones && i < limit && j >= ones && j < limit) {
                    printf("1");
                } else if (i == j){
                    printf("2");
                } else if (j == n - i - 1) {
                    printf("3");
                } else {
                    printf("0");
                }
                
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}
