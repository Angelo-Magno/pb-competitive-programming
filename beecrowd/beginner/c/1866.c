#include <stdio.h>

int main() {
    int c, n;

    scanf("%d", &c);

    for (int i = 0; i < c; i++) {
        scanf("%d", &n);

        printf("%d\n", n % 2);
    }
    return 0;
}
