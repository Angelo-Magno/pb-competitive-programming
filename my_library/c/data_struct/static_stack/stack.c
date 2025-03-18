#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

void initialize(Stack *stack) {
    stack->top = -1; // Inicializa o topo da pilha como -1 (vazia)
}

bool isFull(Stack *stack) {
    return stack->top == MAX_SIZE - 1; // Verifica se a pilha está cheia
}

bool isEmpty(Stack *stack) {
    return stack->top == -1; // Verifica se a pilha está vazia
}

void push(Stack *stack, void* value) {
    if (isFull(stack)) {
        printf("Stack overflow!\n");
        return;
    }
    stack->data[++stack->top] = value; // Adiciona o valor no topo da pilha
}

void* pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow!\n");
        return NULL; // Retorna NULL para indicar erro
    }
    return stack->data[stack->top--]; // Remove e retorna o elemento do topo
}

void* peek(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
        return NULL; // Retorna NULL para indicar erro
    }
    return stack->data[stack->top]; // Retorna o elemento do topo sem removê-lo
}