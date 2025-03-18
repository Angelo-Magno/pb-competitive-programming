#ifndef PILHA_H
#define PILHA_H

#include <stddef.h> // Para size_t

#define MAX 5  // Tamanho máximo da pilha

// Estrutura da pilha com alocação estática de memória
typedef struct {
    int topo;                   // Índice do topo da pilha
    size_t tamanho_elemento;    // Tamanho do tipo de dado armazenado
    void *buffer[MAX];          // Array fixo de ponteiros para os elementos
} Pilha;

// Funções da pilha
void inicializarPilha(Pilha *p, size_t tamanho_elemento);
int isEmpty(Pilha *p);
int isFull(Pilha *p);
void push(Pilha *p, void *valor);
void pop(Pilha *p, void *destino);
void top(Pilha *p, void *destino);
void displayInt(Pilha *p);  // Exibir pilha para inteiros

#endif
