#include <stdio.h>

int main(){
    int hours, speed;
    float liters;

    scanf("%d %d", &hours, &speed);

    liters = hours * speed / 12.0;

    printf("%.3f\n", liters);
    
    return 0;
}
