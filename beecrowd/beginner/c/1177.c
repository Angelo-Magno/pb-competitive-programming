#include <stdio.h>

int main() {
    int n[1000], t, aux;

    scanf("%d", &t);

    aux = t;
    for (int i = 0; i < 1000; i++) {
        if (aux == t) aux = 0;
        
        n[i] = aux++;

        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}
