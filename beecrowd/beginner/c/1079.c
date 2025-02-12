#include <stdio.h>

int main() {
    int n;
    float x, y, z, weighted_avg;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%f %f %f", &x, &y, &z);

        weighted_avg = (x * 2 + y * 3 + z * 5) / (2 + 3 + 5);

        printf("%.1f\n", weighted_avg);
    }
    return 0;
}
