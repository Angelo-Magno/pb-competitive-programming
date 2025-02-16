#include <stdio.h>
#include <math.h>

int is_prime(int x) {
    if (x % 2 == 0 && x > 2) {
        return 0;
    }

    for (int i = 3; i < sqrt(x) + 1; i += 2) {
        if (x % i == 0) {
            return 0;
        }
    }

    return 1;
}


int main() {
    int n, x; 

    scanf("%d", &n);

    for (int i = 0; i < n; i ++) {
        scanf("%d", &x);

        printf("%d %s\n", x, is_prime(x) ? "eh primo" : "nao eh primo");
    }
    return 0;
}
