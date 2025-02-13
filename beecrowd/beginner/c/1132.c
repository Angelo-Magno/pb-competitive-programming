#include <stdio.h>

int arithmetic_progression(int a, int an, int d){
    int sum_ap, n;

    n = (an - a + d) / d;
    sum_ap = (a + an) * n / 2;

    return sum_ap;
}

int main() {
    int x, y, a, an, temp, ap_sum_d1, ap_sum_d13;

    scanf("%d %d", &x, &y);

    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }

    ap_sum_d1 = arithmetic_progression(x, y, 1);

    a = (x % 13) > 0 ? x - (x % 13) + 13 : x;
    an = (y % 13) > 0 ? y - (y % 13) : y;

    if (a > an){
        ap_sum_d13 = 0;
    } else {
        ap_sum_d13 = arithmetic_progression(a, an, 13);
    }

    printf("%d\n", ap_sum_d1 - ap_sum_d13);
    
    return 0;
}
