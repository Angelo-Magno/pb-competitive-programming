#include <stdio.h>

int main() {
    int op, alcohol = 0, gasoline = 0, diesel = 0;

    while (1) {
        scanf("%d", &op);

        if (op == 4) break;

        if (op == 1) {
            alcohol++;
        } else if (op == 2) {
            gasoline++;
        } else if (op == 3){
            diesel++;
        } else {
            continue;
        }
        
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcohol);
    printf("Gasolina: %d\n", gasoline);
    printf("Diesel: %d\n", diesel);

    return 0;
}
