#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *array, int low, int high) {
    int pivot = array[low];  
    int i = low + 1;
    int j = high;

    while (i <= j) {
        while (i <= high && array[i] <= pivot) i++;
        while (array[j] > pivot) j--;

        if (i < j) {
            swap(&array[i], &array[j]);
        }
    }

    swap(&array[low], &array[j]);
    return j;
}

void quicksort(int *array, int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high);

        quicksort(array, low, pi - 1);
        quicksort(array, pi + 1, high);
    }
}

int main() {
    int n, x, j=0, k=0;
    int *odd, *even;
    scanf("%d", &n);

    odd = (int *)malloc(n * sizeof(int));
    even = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);

        if (x % 2 == 0) {
            even[j++] = x; 
        } else {
            odd[k++] = x;
        }
    }

    quicksort(even, 0, j - 1);
    quicksort(odd, 0, k - 1);

    for (int i = 0; i < j; i++) {
        printf("%d\n", even[i]);
    }

    for (int i = k - 1; i >= 0; i--) {
        printf("%d\n", odd[i]);
    }

    return 0;
}
