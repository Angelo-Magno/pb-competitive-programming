#include <stdio.h>

int main() {
    int t, xi, count=0;

    scanf("%d", &t);

    for (int i = 0; i < 5; i++) {
        scanf("%d", &xi);
        if (xi == t) count++;
    }

    printf("%d\n", count);
    
    return 0;
}
