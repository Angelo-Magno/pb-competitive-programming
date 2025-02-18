#include <stdio.h>

int main() {
    double m[12][12], sum=0.0;
    int count = 0;
    char o;

    scanf("%c", &o);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &m[i][j]);

            if (j > i && j < 11 - i){
                sum += m[i][j];
                count++;
            } 
        }
    }

    printf("%.1lf\n", o == 'S' ? sum : sum / count);

    return 0;
}
