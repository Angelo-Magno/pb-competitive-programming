#include <stdio.h>

int main() {
    int n, count_neg, count_pos, count_odd, count_even;
    
    count_neg = count_pos = count_odd = count_even = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &n);
        
        if (n % 2 == 0){
            count_even++;
        } else {
            count_odd++; 
        }

        if (n < 0) {
            count_neg++;
        } else if (n != 0){
            count_pos++;
        }
    }

    printf("%d valor(es) par(es)\n", count_even);
    printf("%d valor(es) impar(es)\n", count_odd);
    printf("%d valor(es) positivo(s)\n", count_pos);
    printf("%d valor(es) negativo(s)\n", count_neg);

    return 0;
}
