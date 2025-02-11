#include <stdio.h>

int main() {
    float a, b, c, trapezoid_area;

    scanf("%f %f %f", &a, &b, &c);

    if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
        trapezoid_area = (a + b) * c / 2;
        
        printf("Area = %.1f\n", trapezoid_area);
    } else {
        printf("Perimetro = %.1f\n", a + b + c);
    }
    return 0;
}
