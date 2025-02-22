#include <stdio.h>
#include <math.h>

int main() {
    char input[8];
    int count=0, sum=0, num, x;

    do {
        fgets(input, 8, stdin);

        if (input[0] == 'c') {
            printf("%d\n", sum);

            count++;
            sum = 0;
        } else {
            x = 2;
            num = 0;

            for (int i = 0; i < 3; i++) {
                num += input[i] == '*' ? pow(2, x) : 0;
                --x;
            }

            sum += num;
        }
    } while (count < 3);

    return 0;
}
