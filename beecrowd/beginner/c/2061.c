#include <stdio.h>
#include <string.h>

int main() {
    int n, m;
    char c[7];

    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++) {
        scanf("%s", &c);

        if (strcmp(c, "fechou") == 0) n++;
        else n--;
    }

    printf("%d\n", n);

    return 0;
}
