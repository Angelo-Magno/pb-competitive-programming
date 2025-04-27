#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LEN 15

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
    int array[MAX_LEN];

    srand(time(NULL));

    for (int i = 0; i < MAX_LEN; i++) {
        array[i] = rand() % 100;
    }

    for (int i = 0; i < MAX_LEN; i++) {
        printf(" %d", array[i]);
    }
    printf("\n");

    quicksort(array, 0, MAX_LEN - 1);

    for (int i = 0; i < MAX_LEN; i++) {
        printf(" %d", array[i]);
    }
    printf("\n");


    return 0;
}
