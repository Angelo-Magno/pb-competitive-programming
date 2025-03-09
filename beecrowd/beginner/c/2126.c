#include <stdio.h>
#include <string.h>

int main() {

    char n1[11], n2[33];
    int cases = 0;

    while (scanf("%s", &n1)!= EOF)
    {
        scanf("%s", &n2);

        size_t len_n1 = strlen(n1);
        int count = 0, pos = 0;
        char *tmp = n2;

        while((tmp = strstr(tmp, n1)) != NULL) {
            count++;
            pos = tmp - n2;
            tmp += len_n1;
        }

        printf("Caso #%d:\n", ++cases);

        if (count > 0) {
            printf("Qtd.Subsequencias: %d\n", count);
            printf("Pos: %d\n\n", pos + 1);
        } else {
            printf("Nao existe subsequencia\n\n");
        }
        
    }
    
    
    return 0;
}
