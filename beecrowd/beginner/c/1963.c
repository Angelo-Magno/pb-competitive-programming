#include <stdio.h>

int main() {
    float a, b, percentage;

    scanf("%f %f", &a, &b);

    percentage = ((b / a) - 1) * 100;

    printf("%.2f%%\n", percentage);

    return 0;
}
