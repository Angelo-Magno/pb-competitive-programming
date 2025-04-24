#include <stdio.h>
#include <stdlib.h>

#define MAX_VALUE 100001

typedef struct node {
    double priority;
    int train_days;
    int fine;
    int arrival_day;
} Node;

typedef struct priority_queue {
    Node *array;
    int size;
    int capacity;
} PriorityQueue;

Node create_node(double priority, int days, int fine, int arrival_day) {
    Node new_node;
    new_node.priority = priority;
    new_node.train_days = days;
    new_node.fine = fine;
    new_node.arrival_day = arrival_day;

    return new_node;
}

void create_queue(PriorityQueue *pq) {
    pq->array = (Node *)malloc(MAX_VALUE * sizeof(Node));
    pq->size = 0;
    pq->capacity = MAX_VALUE;
}

int left_child(int idx) {
    return idx * 2 + 1;
}

int right_child(int idx) {
    return idx * 2 + 2;
}

int parent(int idx) {
    return (idx - 1) / 2;
}

void swap(Node *a, Node *b) {
    Node temp = *a;
    *a = *b;
    *b = temp; 
}

void heapfy_up(PriorityQueue *pq) {
    int idx_child = pq->size - 1;
    int i = parent(idx_child);
    
    while (idx_child != 0 && pq->array[i].priority < pq->array[idx_child].priority) {
        swap(&pq->array[i], &pq->array[idx_child]);
        idx_child = i;
        i = parent(idx_child);
    }
}

void heapfy_down(PriorityQueue *pq) {
    int i = 0;
    int left = left_child(i);
    int right = right_child(i);

    while (left < pq->size) {
        if (right < pq->size && pq->array[right].priority > pq->array[left].priority) {
            left = right;
        }

        if (pq->array[left].priority <= pq->array[i].priority) break;

        swap(&pq->array[i], &pq->array[left]);
        i = left;
        left = left_child(i);
        right = right_child(i);
    }
}

void heap_push(PriorityQueue *pq, Node *node){
    pq->array[pq->size++] = *node;
    heapfy_up(pq);
}

Node heap_pop(PriorityQueue *pq) {
    Node temp = pq->array[0];
    swap(&pq->array[0], &pq->array[pq->size - 1]);
    pq->size--;
    heapfy_down(pq);
    return temp;
}

int main() {
    PriorityQueue pq;
    Node node;
    int curr_day=0, remaining_days=0, train_days, fine;
    long long int total_fine=0;

    create_queue(&pq);

    while (scanf("%d %d", &train_days, &fine) != EOF) {
        node = create_node((double) fine / train_days, train_days, fine, curr_day);
        heap_push(&pq, &node);

        if (remaining_days == 0) {
            if (pq.size > 0) {
                node = heap_pop(&pq);
                remaining_days = node.train_days;
                total_fine += (long long int)(curr_day - node.arrival_day) * node.fine;
            }
        }

        remaining_days--;
        curr_day++;
    }

    curr_day += remaining_days;

    while (pq.size > 0) {
        node = heap_pop(&pq);
        total_fine += (long long int)(curr_day - node.arrival_day) * node.fine;
        curr_day += node.train_days;
    }

    printf("%lld\n", total_fine);
    free(pq.array);
    return 0;
}
