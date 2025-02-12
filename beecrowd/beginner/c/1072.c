#include <stdio.h>

int main() {
    int n, x, count;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);

        if (x >= 10 && x <= 20) count++;
    }

    printf("%d in\n", count);
    printf("%d out\n", n - count);

    return 0;
}
