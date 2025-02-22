#include <stdio.h>
#include <math.h>    

int main() {
    int a, b, q, r;
 
    scanf("%d %d", &a, &b);

    q = (int) floor((double) a / abs(b)); // ensures that 'r > 0' if 'a < 0'

    r = a - (q * abs(b));

    if (b < 0) {
        q *= -1;
    }

    printf("%d %d\n", q, r);

    return 0;
}
