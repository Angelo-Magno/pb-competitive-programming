#include <stdio.h>

int main() {
    int a, b, c, x, y;

    scanf("%d %d %d", &a, &b, &c);

    x = a - b;
    y = b - c;

    if (a > b) {
        if (b == c || c > b || x > y){
            printf(":)\n");
        } else {
            printf(":(\n");
        }
    } else if (a < b) {
        if (y >= 0 || x < y) {
            printf(":(\n");
        } else {
            printf(":)\n");
        }
    } else if (a == b) {
        if (y < 0) {
            printf(":)\n");
        } else {
            printf(":(\n"); 
        }
    }
    
    return 0;
}
