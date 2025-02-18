#include <stdio.h>

int main() {
    float m[12][12], sum=0.0;
    int c;
    char t;

    scanf("%d\n %c", &c, &t);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &m[i][j]);
        }
    }

    for (int i = 0; i < 12; i++) {
        sum += m[i][c];
    }

    printf("%.1f\n", t == 'S' ? sum : sum / 12);

    return 0;
}
