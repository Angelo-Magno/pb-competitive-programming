#include <stdio.h>

int main() {
    int n, x;

    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        x = i;
        printf("%d ", x);
        x *= i;
        printf("%d ", x);
        x *= i;
        printf("%d\n", x);
    }

    return 0;
}
