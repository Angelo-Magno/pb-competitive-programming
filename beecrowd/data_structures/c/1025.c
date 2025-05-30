#include <stdio.h>

#define MAX_VALUE 10000

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

int binary_search(int *array, int n, int value){
    int begin = 0, mid;
    int end = n - 1;

    while (begin <= end) {
        mid = (begin + end) / 2;

        if (array[mid] == value) {
            do {
                mid--;
            } while (mid >= 0 && array[mid] == value);
            return mid + 1;
        } else if (array[mid] > value) {
            end = mid - 1;
        } else {
            begin = mid + 1;
        }
    }
    return -1;
}

int main() {
    int n, q, marbles[MAX_VALUE], value, idx, c = 0;

    while (1) {
        scanf("%d %d", &n, &q);

        if (n == 0 && q == 0) break;

        c++;
        printf("CASE# %d:\n", c);

        for (int i = 0; i < n; i++) {
            scanf("%d", &marbles[i]);
        }

        quicksort(marbles, 0, n - 1);

        for (int j = 0; j < q; j++) {
            scanf("%d", &value);

            idx = binary_search(marbles, n, value);
            if (idx == -1) printf("%d not found\n", value);
            else printf("%d found at %d\n", value, idx + 1);
        }

    }
    return 0;
}
