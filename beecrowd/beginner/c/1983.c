#include <stdio.h>

int main() {
    int n, rg_number, rg_number_best;
    float note, best=0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %f", &rg_number, &note);
        
        if (note > best){
            best = note;
            rg_number_best = rg_number;
        }
    }

    if (best >= 8) {
        printf("%d\n", rg_number_best);
    } else {
        printf("Minimum note not reached\n");
    }
    return 0;
}
