#include <stdio.h>

int main() {
    int n, x;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);

        if (x == 0) {
            printf("NULL\n");
        } else {
            if (x % 2 == 0) printf("EVEN ");
            else printf("ODD ");

            if (x < 0) printf("NEGATIVE\n");
            else printf("POSITIVE\n");
        }
        
    }
    return 0;
}
