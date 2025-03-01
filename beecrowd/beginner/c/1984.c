#include <stdio.h>

int main() {
    unsigned long long int n, x=10, r;
    int number;

    scanf("%llu", &n);

    do {
        r = n % x;
        n -= r;
        printf("%d", r / (x / 10));
        x *= 10;
    } while (n > 0);

    printf("\n");

    return 0;
}
