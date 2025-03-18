#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

// Inicializa a pilha com um tamanho de elemento específico
void inicializarPilha(Pilha *p, size_t tamanho_elemento) {
    p->topo = -1;  // Pilha vazia
    p->tamanho_elemento = tamanho_elemento;
}

// Verifica se a pilha está vazia
int isEmpty(Pilha *p) {
    return (p->topo == -1);
}

// Verifica se a pilha está cheia
int isFull(Pilha *p) {
    return (p->topo == MAX - 1);
}

// Empilha um elemento
void push(Pilha *p, void *valor) {
    if (isFull(p)) {
        printf("Erro: Pilha cheia!\n");
        return;
    }
    p->topo++;
    // Aloca espaço para o novo elemento na pilha
    p->buffer[p->topo] = malloc(p->tamanho_elemento);
    if (p->buffer[p->topo] == NULL) {
        printf("Erro na alocação de memória!\n");
        return;
    }
    // Copia os dados para a memória alocada
    memcpy(p->buffer[p->topo], valor, p->tamanho_elemento);
}

// Desempilha um elemento
void pop(Pilha *p, void *destino) {
    if (isEmpty(p)) {
        printf("Erro: Pilha vazia!\n");
        return;
    }
    // Copia o valor do topo para o destino
    memcpy(destino, p->buffer[p->topo], p->tamanho_elemento);
    // Libera a memória alocada para esse elemento
    free(p->buffer[p->topo]);
    p->topo--;
}

// Retorna o elemento do topo sem removê-lo
void top(Pilha *p, void *destino) {
    if (isEmpty(p)) {
        printf("Erro: Pilha vazia!\n");
        return;
    }
    memcpy(destino, p->buffer[p->topo], p->tamanho_elemento);
}

// Exibe os elementos da pilha (somente para inteiros)
void displayInt(Pilha *p) {
    if (isEmpty(p)) {
        printf("Pilha vazia!\n");
        return;
    }
    printf("Pilha: ");
    for (int i = 0; i <= p->topo; i++) {
        int valor;
        memcpy(&valor, p->buffer[i], sizeof(int));
        printf("%d ", valor);
    }
    printf("\n");
}
