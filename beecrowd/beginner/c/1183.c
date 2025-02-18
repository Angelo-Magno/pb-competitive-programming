#include <stdio.h>

int main() {
    float m[12][12], sum=0.0;
    int count = 0;
    char o;

    scanf("%c", &o);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &m[i][j]);

            if (j > i){
                sum += m[i][j];
                count++;
            } 
        }
    }

    printf("%.1f\n", o == 'S' ? sum : sum / count);

    return 0;
}
