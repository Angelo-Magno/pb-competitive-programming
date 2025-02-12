#include <stdio.h>

int main(){
    double salary, sales;
    char _[50];

    scanf("%s %lf %lf", &_, &salary, &sales);

    printf("TOTAL = R$ %.2lf\n", salary + 0.15 * sales);

    return 0;
}
