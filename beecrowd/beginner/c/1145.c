#include <stdio.h>

int main() {
    int x, y, count=0;

    scanf("%d %d", &x, &y);

    for (int i = 1; i <= y; i++) {
        if (count == x - 1) {
            printf("%d\n", i);

            count = 0;
        } else {
            printf("%d ", i);

            count++;
        }  
    }
    
    return 0;
}

