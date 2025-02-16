#include <stdio.h>
#include <math.h>

int main() {
    int t, pa, pb, count, flag;
    double g1, g2;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);

        flag = count = 0;
        g1 /= 100;
        g2 /= 100;

        while(pa <= pb) {
            pa += floor(pa * g1);
            pb += floor(pb * g2);
            count++;

            if (count > 100) {
                flag = 1;
                break;
            }  
        }

        if (flag) printf("Mais de 1 seculo.\n");
        else printf("%d anos.\n", count);  
    }

    return 0;
}
