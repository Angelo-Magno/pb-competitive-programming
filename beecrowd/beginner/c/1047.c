#include <stdio.h>

int main() {
    int start_h, start_m, end_h, end_m, hours, minutes, total, start_total, end_total;
    const int day_in_minutes = 24 * 60;

    scanf("%d %d %d %d", &start_h, &start_m, &end_h, &end_m);
    
    start_total = start_h * 60 + start_m;
    end_total = end_h * 60 + end_m;
    
    if (start_total == end_total) {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        return 0;
    } else if (start_total > end_total) {
        total = day_in_minutes - start_total + end_total; 
    } else {
        total = end_total - start_total;
    }

    hours = total / 60;
    minutes = total % 60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours, minutes);

    return 0;
}
