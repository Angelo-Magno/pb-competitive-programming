#include <stdio.h>

int main() {
    int n, a, b;

    while (scanf("%d", &n)!=EOF){
        a = 0;
        b = n - 1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j == b) {
                    printf("%d", 2);
                } else if (j == a) {
                    printf("%d", 1);
                } else {
                    printf("%d", 3);
                }
            }
            printf("\n");
            a++;
            b--;
        }
    }

    return 0;
}
