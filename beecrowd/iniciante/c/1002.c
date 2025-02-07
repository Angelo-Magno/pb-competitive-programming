#include <stdio.h>
#include <math.h>

int main(){
    const double pi = 3.14159;
    double radius;
    
    scanf("%lf", &radius);

    printf("A=%.4lf\n", pi * pow(radius, 2));

    return 0;
}

