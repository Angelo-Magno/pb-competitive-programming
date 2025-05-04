#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *array, int size) {
    int low = 1, high = size - 1, p = 0;

    while (low <= high) {
        if (array[p] < array[low]) {
            swap(&array[p], &array[low]);
            p = low;
            low++;
        } else {
            swap(&array[low], &array[high]);
            high--;
        }
    }
    return p;  
}

void quicksort(int *array, int size){
    if (size < 2) return;
    int p;
    p = partition(array, size);

    quicksort(&array[0], p + 1);
    quicksort(&array[p + 1], size - p - 1); 
}

int main() {
    int n, m, input;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &m);

        int *array, *array_copy;

        array = (int *)malloc(m * sizeof(int));
        array_copy = (int *)malloc(m * sizeof(int));

        for (int j = 0; j < m; j++) {
            scanf("%d", &input);
            array[j] = input;
            array_copy[j] = input;
        }

        quicksort(array_copy, m);

        int count = m;
        for (int j = 0; j < m; j++) { 
            if (array[j] != array_copy[j]) count--;
        }

        printf("%d\n", count);

    }
    return 0;
}
