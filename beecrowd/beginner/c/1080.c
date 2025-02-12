#include <stdio.h>

int main() {
    int x, pos, largest;

    pos = largest = 0;

    for (int i = 1; i < 101; i++) {
        scanf("%d", &x);

        if (x > largest) {
            largest = x;
            pos = i;
        }
    }

    printf("%d\n", largest);
    printf("%d\n", pos);
    
    return 0;
}

