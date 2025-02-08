#include <stdio.h>

int main(){
    int id1, id2, units1, units2;
    double price1, price2;

    scanf("%d %d %lf", &id1, &units1, &price1);
    scanf("%d %d %lf", &id2, &units2, &price2);

    printf("VALOR A PAGAR: R$ %.2lf\n", units1 * price1 + units2 * price2);

    return 0;
}