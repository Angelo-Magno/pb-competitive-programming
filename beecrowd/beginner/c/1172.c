#include <stdio.h>

int main() {
    int x[10], n;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        if (n > 0) {
            x[i] = n;
        } else {
            x[i] = 1;
        }
    }

    for (int j = 0; j < 10; j++) {
        printf("X[%d] = %d\n", j, x[j]);
    }
    return 0;
}
