#include <stdio.h>

int main() {
    int p, id_product, amount, idx;
    float bill=0, product_prices[] = {1.50, 2.50, 3.50, 4.50, 5.50};

    scanf("%d", &p);

    for (int i = 0; i < p; i++) {
        scanf("%d %d", &id_product, &amount);
        idx = id_product - 1001;
        bill += product_prices[idx] * amount;
    }

    printf("%.2f\n", bill);

    return 0;
}
