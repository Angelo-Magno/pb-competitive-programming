#include <stdio.h>

int main() {
    int s, t, f, ans;

    scanf("%d %d %d", &s, &t, &f);

    ans = (s + t + f) % 24;

    printf("%d\n", ans < 0 ? 24 + ans: ans);

    return 0;
}
