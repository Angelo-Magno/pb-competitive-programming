#include <stdio.h>

int main() {
    int n, n_frogs, n_rats, n_rabbits, amount_animals, amount;
    char type;

    n_frogs = n_rats = n_rabbits = amount_animals = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %c", &amount, &type);

        if (type == 'C') n_rabbits += amount;
        else if (type == 'R') n_rats += amount;
        else if (type == 'S') n_frogs += amount;

        amount_animals += amount;
    }

    printf("Total: %d cobaias\n", amount_animals);
    printf("Total de coelhos: %d\n", n_rabbits);
    printf("Total de ratos: %d\n", n_rats);
    printf("Total de sapos: %d\n", n_frogs);
    printf("Percentual de coelhos: %.2f %%\n", (n_rabbits * 100.0) / amount_animals);
    printf("Percentual de ratos: %.2f %%\n", (n_rats * 100.0) / amount_animals);
    printf("Percentual de sapos: %.2f %%\n", (n_frogs * 100.0) / amount_animals);

    return 0;
}
