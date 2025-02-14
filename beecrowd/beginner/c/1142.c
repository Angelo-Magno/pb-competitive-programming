#include <stdio.h>

int main() {
    int n, count=1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = count; j < count + 3; j++){
            printf("%d ", j);
        }

        printf("PUM\n");
        count += 4;
    }
    return 0;
}
