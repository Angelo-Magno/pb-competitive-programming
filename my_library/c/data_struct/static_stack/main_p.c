#include <stdio.h>
#include "pilha.h"

int main() {
    Pilha p;
    inicializarPilha(&p, sizeof(int));  // Criando uma pilha de inteiros

    int a = 10, b = 20, c = 30, d = 40, e = 50, f = 60;
    push(&p, &a);
    push(&p, &b);
    push(&p, &c);
    push(&p, &d);
    push(&p, &e);
    push(&p, &f);  // Deve falhar, pois a pilha está cheia

    displayInt(&p);

    int topo;
    top(&p, &topo);
    printf("Topo da pilha: %d\n", topo);

    int removido;
    pop(&p, &removido);
    printf("Desempilhado: %d\n", removido);

    displayInt(&p);

    return 0;
}
