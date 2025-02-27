#include <stdio.h>

void insert_char(char *array, const char *str, int *idx, int n, int i) {
    for (int y = 0; y < n; y++) {
        array[(*idx)++] = str[i];
    }
}

int main() {

    int n, i=0, idx=0, div=10, r; 
    const int arabic[] = {1, 5, 10, 50, 100, 500, 1000};
    const char roman[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    char ans[12];

    scanf("%d", &n);

    do {
        r = n % div;
        
        if (r == arabic[i]){
            insert_char(ans, roman, &idx, 1, i);

        } else if (r == 2 * arabic[i]) {
            insert_char(ans, roman, &idx, 2, i);

        } else if (r == 3 * arabic[i]) {
            insert_char(ans, roman, &idx, 3, i);

        } else if (r == arabic[i + 1] - arabic[i]) {
            insert_char(ans, roman, &idx, 1, i + 1);
            insert_char(ans, roman, &idx, 1, i);
            
        } else if (r == arabic[i + 1]) {
            insert_char(ans, roman, &idx, 1, i + 1);

        } else if (r == arabic[i] + arabic[i + 1]) {
            insert_char(ans, roman, &idx, 1, i);
            insert_char(ans, roman, &idx, 1, i + 1);
            
        } else if (r == 2 * arabic[i] + arabic[i + 1]) {
            insert_char(ans, roman, &idx, 2, i);
            insert_char(ans, roman, &idx, 1, i + 1);
            
        } else if (r == 3 * arabic[i] + arabic[i + 1]) {
            insert_char(ans, roman, &idx, 3, i);
            insert_char(ans, roman, &idx, 1, i + 1);

        } else if (r == arabic[i + 2] - arabic[i]) {
            insert_char(ans, roman, &idx, 1, i + 2);
            insert_char(ans, roman, &idx, 1, i); 
        } 

        i += 2;
        div *= 10;
        n -= r;
        
    } while (n > 0);

    for (int x = idx - 1; x >= 0; x--){
        printf("%c", ans[x]);
    }
    printf("\n");

    return 0;
}
