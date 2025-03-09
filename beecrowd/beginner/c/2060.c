#include <stdio.h>

int main() {
    int n, l, multiples[] = {2, 3, 4, 5}, counters[] = {0, 0, 0, 0};

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &l);
        for (int j = 0; j < 4; j++) {
            if (l % multiples[j] == 0) counters[j]++;
        }
    }

    for (int j = 0; j < 4; j++) { 
        printf("%d Multiplo(s) de %d\n", counters[j], multiples[j]);
    }
    return 0;
}
