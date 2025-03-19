#include <stdio.h>
#define MAX_SIZE 1000

int main() {
    int n, top, idx, count;
    char str[MAX_SIZE];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", str);

        idx = top = -1;
        count = 0;

        while (str[++idx] != '\0') {
            if (str[idx] == '<') {
                top++;
            } else if (str[idx] == '>') {
                if (top > -1) {
                    top--;
                    count++;
                }
            }
        }

        printf("%d\n", count); 
    }
    
    return 0;
}
