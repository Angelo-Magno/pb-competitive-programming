#include <stdio.h>
#include <math.h>

int main(){
    const double pi = 3.14159;
    double radius;

    scanf("%lf", &radius);

    printf("VOLUME = %.3lf\n", 4/3.0 * pi * pow(radius, 3));

    return 0;
}