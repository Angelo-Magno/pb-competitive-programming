#include <stdio.h>
#define MAX_SIZE 10000

int main() {
    int top, idx, flag;
    char expression[MAX_SIZE];

    while (scanf("%s", expression) != EOF) {
        
        top = idx = -1;
        flag = 1;

        while (expression[++idx] != '\0' && flag) {
            if (expression[idx] == '('){
                top++;
            } else if (expression[idx] == ')') {
                top--;
                if (top < -1) flag = 0;
            }
        }
        
        if (top > -1) flag = 0;
        
        printf("%s\n", flag ? "correct" : "incorrect");
    }
    
    return 0;
}
