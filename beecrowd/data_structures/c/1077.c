#include <stdio.h>
#define MAX_SIZE 1000

int main() {
    int n, top, idx;
    char infix[MAX_SIZE], stack[MAX_SIZE], aux;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", infix);

        idx = top = -1;

        while (infix[++idx] != '\0') {
            aux = infix[idx];
           
            if (aux == '(') {
                stack[++top] = aux;
                
            } else if (aux == ')') {
                while (stack[top] != '(') {
                    printf("%c", stack[top--]);
                }
                top--;

            } else if (aux == '^') {
                while (top != -1 && stack[top] == '^') {
                    printf("%c", stack[top--]);
                }
                stack[++top] = aux;

            } else if (aux == '*' || aux == '/' ) {
                while (top!= -1 && (stack[top] == '*' || stack[top] == '/' || stack[top] == '^')) {
                    printf("%c", stack[top--]);
                }
                stack[++top] = aux;

            } else if (aux == '+' || aux == '-') {
                while (top != -1 && stack[top] != '(') {
                    printf("%c", stack[top--]);
                }
                stack[++top] = aux;
            }
            else {
                printf("%c", infix[idx]);
            }
        }

        while (top != -1) {
            printf("%c", stack[top--]);
        }

        printf("\n");
    }

    return 0;
}
