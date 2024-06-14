#include <stdio.h>

int main(){
    const double pi = 3.14159;
    double radius;
    
    scanf("%lf", &radius);

    printf("A=%.4lf\n", pi * radius * radius);

    return 0;
}