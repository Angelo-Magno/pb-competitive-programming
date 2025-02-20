#include <stdio.h>

int main() {
    int l, v, best;

    while (scanf("%d", &l)!=EOF){
        best = 0;

        for (int i = 0; i < l; i++){
            scanf("%d", &v);

            if (v > best){
                best = v;
            }
        }

        if (best <= 10) {
            printf("1\n");
        } else if (best < 20) {
            printf("2\n");
        }else {
            printf("3\n");
        }
    }
    
    return 0;
}
