#include <stdio.h>
#include <stdlib.h>

int main() {
    int  x, sum;

    while (1) {
        scanf("%d", &x);

        if (x == 0) break;

        x += abs(x) % 2;

        sum = (x + (x + 8)) * 5 / 2;

        printf("%d\n", sum);
    }
    
    return 0;
}
