#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int n, x, y, terms;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);

        if (x == y) {
            printf("0\n");
            continue;
        }

        if (x > y) swap(&x, &y);

        x += (x % 2) + 1;
        y -= (y % 2) + 1;

        if (x > y) {
            printf("0\n");
        } else {
            terms = (y - x + 2 ) / 2;
            printf("%d\n", terms * (x + y) / 2);
        }

    }
    return 0;
}


