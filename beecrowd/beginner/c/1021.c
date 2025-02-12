#include <stdio.h>
#include <math.h>

int main(){
    int notes[6] = {10000, 5000, 2000, 1000, 500, 200};
    int coins[6] = {100, 50, 25, 10, 5, 1};
    float n;
    int aux;

    scanf("%f", &n);

    aux = (int) round(n * 100);

    printf("NOTAS:\n");

    for(int x = 0; x < 6; x++){
        printf("%d nota(s) de R$ %.2f\n", aux / notes[x], notes[x] / 100.0);
        aux %= notes[x];
    }

    printf("MOEDAS:\n");
    
    for(int y = 0; y < 6; y++){
        printf("%d moeda(s) de R$ %.2f\n", aux / coins[y], coins[y] / 100.0);
        aux %= coins[y];
    }

    return 0;
}
