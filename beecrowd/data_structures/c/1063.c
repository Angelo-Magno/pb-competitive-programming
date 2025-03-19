#include <stdio.h>
#include <stdlib.h>

typedef struct stack {
    int top, MAX_SIZE;
    char *array;
} Stack;

void init_stack(Stack *stack, int size) {
    stack->top = -1;
    stack->MAX_SIZE = size;
    stack->array = (char *) malloc(size * sizeof(char)); // array de chars
}

int is_full(Stack *stack){
    return stack->top == stack->MAX_SIZE - 1;
}

int is_empty(Stack *stack) {
    return stack->top == -1;
}

void push(Stack *stack, char value) {
    if (is_full(stack)) {       
        printf("\nStack overflow!\n");
        return;
    }
    stack->array[++stack->top] = value;
}

char pop(Stack *stack) {
    if (is_empty(stack)) {
        printf("\nStack underflow!\n");
        return '\0';
    }
    return stack->array[stack->top--];
}

char peek(Stack *stack) {
    if (is_empty(stack)) {
        printf("\nStack is empty!\n");
        return '\0';
    }
    return stack->array[stack->top];
}

void get_input(char *str, int n){
    for (int i = 0; i < n; i++) {
        scanf(" %c", &str[i]);
    }   
}

int main() {
    int n, idx;
    char *sequence, *input;
    Stack stack;

    while (scanf("%d", &n) != EOF){
        if (!n) break;
       
        input = (char *) malloc(n * sizeof(char));
        sequence = (char *) malloc(n * sizeof(char));

        get_input(input, n);
        get_input(sequence, n);

        init_stack(&stack, n);
        
        idx = 0;
        for (int i = 0; i < n; i++) {
            push(&stack, input[i]);
            printf("I");
            
            while (!is_empty(&stack) && peek(&stack) == sequence[idx]) {
                pop(&stack);
                printf("R");
                idx++;
            }
        }

        printf("%s\n", is_empty(&stack) ? "" : " Impossible");

        free(stack.array);
        free(input);
        free(sequence);
    }
    
    return 0;
}

