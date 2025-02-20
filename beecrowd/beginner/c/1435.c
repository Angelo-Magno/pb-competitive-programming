#include <stdio.h>

int main() {
    int n, i;

    while (1){
        scanf("%d", &n);

        if (n == 0) break;

        int mat[n][n];
        i = 0;
      
        while (i <= n - (i + 1)){
            for (int b = i; b <= n - (i + 1); b++) {
                mat[i][b] = (i + 1);
                mat[b][i] = (i + 1);
                mat[n - (i + 1)][b] = (i + 1);
                mat[b][n - (i + 1)] = (i + 1);
            }
           i++;
        }
        
        for (int i = 0; i < n; i++){
            printf("%3d", mat[i][0]);
            for (int j = 1; j < n; j++) {
                printf("%4d", mat[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}
