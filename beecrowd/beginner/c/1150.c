#include <stdio.h>

int main() {
    int x, y, sum, ans=1;

    scanf("%d", &x);

    sum = x;

    while (1) {
        scanf("%d", &y);

        if (y > x) break;
    }
    
    while (sum < y){
        sum += ++x;
        ans++;
    }
    

    printf("%d\n", ans);

    return 0;
}
