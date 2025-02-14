#include <stdio.h>

int main() {
    int a, n, an, ap_sum;

    scanf("%d", &a);

    while (1) {
        scanf("%d", &n);

        if (n > 0) break;
    }
    
    an = a + n - 1;
    ap_sum = (a + an) * n / 2;

    printf("%d\n", ap_sum);

    return 0;
}
