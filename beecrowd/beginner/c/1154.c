#include <stdio.h>

int main() {
    int count=0, age;
    float sum_age=0, avg;

    while (1){
        scanf("%d", &age);

        if (age < 0) break;

        sum_age += age;
        count++;
    }

    avg = sum_age / count;
    printf("%.2f\n", avg);
    return 0;
}
