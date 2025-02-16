#include <stdio.h>

int main() {
    int n[10];

    scanf("%d", &n[0]);

    for (int i = 1; i < 10; i++) {
        n[i] = n[i - 1] * 2;
    }

    for (int j = 0; j < 10; j++) {
        printf("N[%d] = %d\n", j, n[j]);
    }

    return 0;
}
