#include <stdio.h>

int main() {
    int n, t, lowest, ans=1;

    scanf("%d", &n);
    scanf("%d", &lowest);

    for (int i = 1; i < n; i++) {
        scanf("%d", &t);

        if (t < lowest) {
            lowest = t;
            ans = i + 1;
        }
    }

    printf("%d\n", ans);

    return 0;
}
