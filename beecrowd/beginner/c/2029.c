#include <stdio.h>
#define PI 3.14

int main() {
    float v, d, r, area, height;

    while (scanf("%f %f", &v, &d) != EOF) {
        r = d / 2;
        area = PI * r * r;
        height = v / area;

        printf("ALTURA = %.2f\n", height);
        printf("AREA = %.2f\n", area);
    }

    return 0;
}
