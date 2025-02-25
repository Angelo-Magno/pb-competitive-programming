#include <stdio.h>

int main() {
    int sticks[4], temp;

    for (int i = 0; i < 4; i++) {
        scanf("%d", &sticks[i]);
    }

    for (int i = 1; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (sticks[j] > sticks[j + 1]) {
                temp = sticks[j]; 
                sticks[j] = sticks[j + 1];
                sticks[j + 1] = temp;
            }
        }
    }

    if (sticks[0] + sticks[1] > sticks[2] || sticks[1] + sticks[2] > sticks[3]) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}
