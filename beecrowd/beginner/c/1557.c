#include <stdio.h>
#include <math.h>

int len(int n) {
    return (int)log10(n) + 1; 
}

int main() {
    int n, t, x;

    while (1) {
        scanf("%d", &n);

        if (n == 0) break;

        t = len(pow(2, (n - 1) * 2));
        
        for (int i = 0; i < n; i++) {
            x = pow(2, i);
            printf("%*d", t, x);

            for (int j = 1; j < n; j++) {
                x *= 2;
                printf("%*d", t + 1, x);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
