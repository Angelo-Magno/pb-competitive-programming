#include <stdio.h>

int main() {
    int n, x, y, sum;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        
        if (x % 2 == 0) x++;

        sum = 0;
        for (int j = 0; j < y; j++) {
            sum += x;
            x += 2;
        }

        printf("%d\n", sum);
    }
    return 0;
}
