#include <stdio.h>

int main() {
    int n, ans[3];

    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        ans[0] = i;
        ans[1] = ans[0] * i;
        ans[2] = ans[1] * i;
        
        printf("%d %d %d\n", ans[0], ans[1], ans[2]);
        printf("%d %d %d\n", ans[0], ans[1] + 1, ans[2] + 1);
    }

    return 0;
}
