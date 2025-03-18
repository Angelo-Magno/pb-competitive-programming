#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

#define MAX_SIZE 100

typedef struct {
    void* data[MAX_SIZE]; // Array de ponteiros genéricos
    int top;              // Índice do topo da pilha
} Stack;

void initialize(Stack *stack);
bool isFull(Stack *stack);
bool isEmpty(Stack *stack);
void push(Stack *stack, void* value);
void* pop(Stack *stack);
void* peek(Stack *stack);

#endif // STACK_H