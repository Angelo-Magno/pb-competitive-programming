#include <stdio.h>

int main() {
    int x, y, temp;

    scanf("%d %d", &x, &y);

    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }

    for (int i = x + 1; i < y; i++) {
        if (i % 5 == 2 || i % 5 == 3) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
