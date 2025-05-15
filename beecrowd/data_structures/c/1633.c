#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    long long int priority, time, clock;
} Node;

typedef struct priority_queue{
    long long int size;
    long long int capacity;
    Node **array;
} PriorityQueue;

Node* newNode(int priority, int time, int clock) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->priority = priority;
    new_node->clock = clock;
    new_node->time = time;

    return new_node;
}

void priorityQueueInit(PriorityQueue *pq, int capacity) {
    pq->array = (Node **)malloc(capacity * sizeof(Node*));
    pq->capacity = capacity;
    pq->size = 0;
}

void swap(Node **a, Node **b){
    Node *temp = *a;
    *a = *b;
    *b = temp;
}

int leftChild(int i) {
    return i * 2 + 1;
}

int rightChild(int i) {
    return i * 2 + 2;
}

int parent(int i) {
    return (i - 1) / 2;
}

void heapfyUp(PriorityQueue *pq) {
    int child_idx = pq->size - 1;
    int parent_idx = parent(child_idx);

    while (child_idx > 0 && pq->array[child_idx]->priority < pq->array[parent_idx]->priority) {
        swap(&pq->array[child_idx], &pq->array[parent_idx]);
        child_idx = parent_idx;
        parent_idx = parent(child_idx);
    }
}

void heapfyDown(PriorityQueue *pq){
    int parent_idx = 0;
    int left = leftChild(parent_idx);
    int right = rightChild(parent_idx);

    while (left < pq->size) {
        if (right < pq->size && pq->array[right]->priority < pq->array[left]->priority) {
            left = right;
        }

        if (pq->array[left]->priority >= pq->array[parent_idx]->priority) break;

        swap(&pq->array[parent_idx], &pq->array[left]);
        parent_idx = left;
        left = leftChild(parent_idx);
        right = rightChild(parent_idx);
    }
}

void heapPush(PriorityQueue *pq, Node *node){
    if (pq->size >= pq->capacity) {
        printf("Heap full!\n");
        return;
    }
    pq->array[pq->size++] = node;
    heapfyUp(pq);
}

Node* heapPop(PriorityQueue *pq) {
    if (pq->size == 0) {
        printf("Heap empty!\n");
        return NULL;
    }

    swap(&pq->array[0], &pq->array[--pq->size]);
    heapfyDown(pq);

    return pq->array[pq->size];
}

int main() {
    long long int n, time, clock, curr_time, total_wait;
    Node *node;
    PriorityQueue pq, aux_pq;

    while (scanf("%lld", &n) != EOF) {
        priorityQueueInit(&pq, n);
        priorityQueueInit(&aux_pq, n);

        for (int i = 0; i < n; i++) {
            scanf("%lld %lld", &clock, &time);
            heapPush(&pq, newNode(clock, time, clock));
        }
        curr_time = pq.array[0]->priority;

        while (pq.size != 0 || aux_pq.size != 0) {
            while (pq.size != 0 && (curr_time >= pq.array[0]->priority || aux_pq.size == 0)) {
                node = heapPop(&pq);
                node->priority = node->time;
                heapPush(&aux_pq, node);
            }

            node = heapPop(&aux_pq);
            total_wait += (curr_time - node->clock) > 0 ? curr_time - node->clock : 0;
            curr_time += node->time;
            free(node);
        }
        
        printf("%lld\n", total_wait);
        total_wait = 0;
    }

    return 0;
}
