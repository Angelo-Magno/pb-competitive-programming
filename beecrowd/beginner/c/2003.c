#include <stdio.h>

int main() {
    int delay, h, m;
    const int set_time = 8 * 60;

    while (scanf("%d:%d", &h, &m) != EOF) {
        delay = h * 60 + m + 60 - set_time;

        printf("Atraso maximo: %d\n", delay > 0 ? delay : 0);
    }
    

    return 0;
}
