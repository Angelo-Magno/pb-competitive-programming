#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, length;

    while (1){
        scanf("%d", &a);
        if (a == 0) break;

        scanf("%d %d", &b, &c);

        length = sqrt((a * b) / (c / 100.0));

        printf("%d\n", length);
    }
    
    return 0;
}
