#include <stdio.h>

int main(){
    int n, h;
    double x;

    scanf("%d %d %lf", &n, &h, &x);

    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2lf\n", h * x);

    return 0;
}