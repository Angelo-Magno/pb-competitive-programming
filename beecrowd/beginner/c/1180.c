#include <stdio.h>
#include <stdlib.h>

int main() {
    int *x, n, lowest=1e8, pos=0;

    scanf("%d", &n);

    x = (int*) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
        
        if (x[i] < lowest) {
            lowest = x[i];
            pos = i;
        }
    }

    printf("Menor valor: %d\n", lowest);
    printf("Posicao: %d\n", pos);
  
    return 0;
}
