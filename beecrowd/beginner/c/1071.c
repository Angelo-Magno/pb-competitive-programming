#include <stdio.h>

int main() {
    int x, y, temp, sum_ap, n;

    scanf("%d %d", &x, &y);

    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    };

    x++;
    y--;

    if (x % 2 == 0) x++;
    if (y % 2 == 0) y--;

    n =  (-x + 2 + y) / 2;

    sum_ap = (n * (x + y)) / 2;
    
    printf("%d\n", sum_ap);

    return 0;
}
