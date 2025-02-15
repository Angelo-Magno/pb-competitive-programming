#include <stdio.h>

int main() {
    double s=1.0, d=2;
    
    for (double i = 3.0; i <= 39; i += 2) {
        s += (i / d);
        d *= 2;
    }

    printf("%.2lf\n", s);
    return 0;
}
