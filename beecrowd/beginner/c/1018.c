#include <stdio.h>

int main(){
    int n, banknotes[7] = {100, 50, 20, 10, 5, 2, 1};

    scanf("%d", &n);

    printf("%d\n", n);

    for(int x = 0; x < 7; x++){
        printf("%d nota(s) de R$ %d,00\n", n / banknotes[x], banknotes[x]);
        n %= banknotes[x];
    }

    return 0;
}
