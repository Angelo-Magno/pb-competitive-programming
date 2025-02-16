#include <stdio.h>

void output(char *name, int *array, int limit) {
    for (int i = 0; i < limit; i++) {
        printf("%s[%d] = %d\n", name, i, array[i]);
    }
}

int main() {
    int x, even[5], odd[5], i=0, j=0, n=15;

    while (n--) {
        scanf("%d", &x);

        if(x % 2 == 0){
            even[i++] = x;
        } else {
            odd[j++] = x;
        }

        if (i == 5) {
            output("par", even, i);
            i = 0;
        }

        if (j == 5) {
            output("impar", odd, j);
            j = 0;
        }
    }

    if (j > 0) output("impar", odd, j);
    if (i > 0) output("par", even, i);

    return 0;
}
