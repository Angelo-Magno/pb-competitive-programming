#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    while (1){
        scanf("%d", &n);

        if (n == 0) break;

        for (int i = 0; i < n; i++){
            printf("%3d", i + 1);
            
            for (int j = 1; j < n; j++) {
                printf("%4d", abs(i - j) + 1);
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}
