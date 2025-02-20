#include <stdio.h>

void swap(float *x, float *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);

    if (b > a) {
        swap(&a, &b);
    }

    if (c > a) {
        swap(&a, &c);
    }

    if (c > b) {
        swap(&b, &c);
    }

    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (a * a == b * b + c * c) {
            printf("TRIANGULO RETANGULO\n");
        } else if (a * a > b * b + c * c) {
            printf("TRIANGULO OBTUSANGULO\n");
        } else if (a * a < b * b + c * c) {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if (a == b && b == c) {
            printf("TRIANGULO EQUILATERO\n");
        } else if (a == b || b == c) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
