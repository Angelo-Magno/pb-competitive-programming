#include <stdio.h>

int main(){
    int n, hours, minutes, seconds;

    scanf("%d", &n);

    seconds = n % 60;
    n /= 60;
    minutes = n % 60;
    hours = n / 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
