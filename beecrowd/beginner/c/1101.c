#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int m, n, sum;

    while (1){
        scanf("%d %d", &m, &n);

        if (m <= 0 || n <= 0) break;

        if (m > n) swap(&m, &n);

        sum = 0;
        
        for (int x = m; x <= n; x++) {
            printf("%d ", x);
            sum += x;
        }

        printf("Sum=%d\n", sum);
    }
    
    return 0;
}
