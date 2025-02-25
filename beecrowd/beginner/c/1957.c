#include <stdio.h>

int main() {
    int v, q, r, remainders[9], idx=0;

    scanf("%d", &v);

    do {
        q = v / 16;
        r = v % 16;
        remainders[idx++] = r;
        v = q;
    } while (v > 0);

    
    for (int i = idx - 1; i >= 0; i--) {
        if (remainders[i] > 9) {
            printf("%c", remainders[i] + 55);
        } else {
            printf("%d", remainders[i]);
        }
    }
    printf("\n");
    
    return 0;
}
