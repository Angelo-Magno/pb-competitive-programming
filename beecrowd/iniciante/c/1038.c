#include <stdio.h>

int main() {
    float items[5] = {4.0, 4.5, 5.0, 2.0, 1.5};
    int code, amount;

    scanf("%d %d", &code, &amount);

    printf("Total: R$ %.2f\n", items[code - 1] * amount);

    return 0;
}
