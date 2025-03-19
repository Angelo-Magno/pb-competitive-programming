#include <stdio.h>
#define MAX 1000

int main() {
    int n, x, coaches[MAX], stack[MAX], top, flag, aux;

    while (scanf("%d", &n) != EOF) {
        if (n == 0) break;

        while (scanf("%d", &x)) {
            if (x == 0) {
                printf("\n");
                break;
            }

            coaches[0] = x;

            for (int i = 1; i < n; i++) {
                scanf("%d", &coaches[i]);
            }

            aux = n;
            top = -1;
            flag = 1;
            
            for (int i = n - 1; i >= 0; i--) {
                while (flag && (top != -1) && (coaches[i] < stack[top])) {
                    if (stack[top] != aux) {
                        flag = 0;
                        goto ans;
                    }
                    aux--;
                    top--;
                } 

                stack[++top] = coaches[i];
            }

            ans:
            printf("%s\n", flag ? "Yes" : "No");
        }
    }
    
    return 0;
}
