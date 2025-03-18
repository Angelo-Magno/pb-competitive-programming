#include "stack.h"
#include <stdio.h>
#include <string.h>

int main() {
    Stack stack;
    initialize(&stack);

    // Exemplo com inteiros
    int a = 10, b = 20, c = 30;
    push(&stack, &a);
    push(&stack, &b);
    push(&stack, &c);

    printf("Top element: %d\n", *(int*)peek(&stack)); // 30
    printf("Popped element: %d\n", *(int*)pop(&stack)); // 30
    printf("Popped element: %d\n", *(int*)pop(&stack)); // 20
    printf("Top element: %d\n", *(int*)peek(&stack)); // 10

    // Exemplo com strings
    char *str1 = "Hello";
    char *str2 = "World";
    push(&stack, str1);
    push(&stack, str2);

    printf("Top element: %s\n", (char*)peek(&stack)); // World
    printf("Popped element: %s\n", (char*)pop(&stack)); // World
    printf("Top element: %s\n", (char*)peek(&stack)); // Hello

    return 0;
}