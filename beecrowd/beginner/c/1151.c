#include <stdio.h>

int main() {
    int n, a=0, b=1, temp;

    scanf("%d", &n);

    if (n == 1) {
        printf("0");
    } else {
        printf("0 1");
        
        for (int i = 0; i < n - 2; i++) {
            temp = a;
            a = b;
            b = temp + b;
            printf(" %d", b);
        }
        printf("\n");
    }
    
    return 0;
}
