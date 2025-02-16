#include <stdio.h>

int main() {
    int n, x, sum;

    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        
        sum = x == 1 ? 0 : 1;
        for (int j = 2; j <= x / 2; j++) {
            if (x % j == 0) sum += j;
        }

        printf("%d %s\n", x, sum == x ? "eh perfeito" : "nao eh perfeito");
    }

    return 0;
}
