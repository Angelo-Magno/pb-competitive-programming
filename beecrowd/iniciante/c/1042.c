#include <stdio.h>

int main() {
    int sorted_array[3], original_array[3], aux;

    for (int z = 0; z < 3; z++) {
        scanf("%d", &original_array[z]);
        sorted_array[z] = original_array[z]; 
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 2; j > i; j--){
            if (sorted_array[j] < sorted_array[j - 1]) {
                aux = sorted_array[j - 1];
                sorted_array[j - 1] = sorted_array[j];
                sorted_array[j] = aux;
            }
        }
    }

    for (int i = 0; i < 3; i++){
        printf("%d\n", sorted_array[i]);
    } 
    
    printf("\n");

    for (int i = 0; i < 3; i++){
        printf("%d\n", original_array[i]);
    }

    return 0;
}
