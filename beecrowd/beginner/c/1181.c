#include <stdio.h>

int main() {
    int l;
    float m[12][12], sum=0.0;
    char t;

    scanf("%d\n", &l);
    scanf("%c", &t);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &m[i][j]);
        }
    }

    for (int j = 0; j < 12; j++) {
        sum += m[l][j];    
    }

    printf("%.1f", t == 'S'? sum : sum / 12);

    return 0;
}
