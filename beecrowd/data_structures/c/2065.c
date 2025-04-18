#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int priority;
    int data;
} Node;

typedef struct priority_queue {
    Node *nodes;
    int size;
    int capacity;
} PriorityQueue;

void create_queue(PriorityQueue *pq, int capacity) {
    pq->nodes = (Node *)malloc(capacity * sizeof(Node));
    pq->size = 0;
    pq->capacity = capacity;
}

int lef_child(int i) {
    return 2 * i + 1;
}

int right_child(int i) {
    return 2 * i + 2;
}

int parent(int i) {
    return (i - 1) / 2;
}

void swap(Node *a, Node *b) {
    Node temp = *a;
    *a = *b;
    *b = temp;
}

void heapfy_up(PriorityQueue *pq) {
    int i = pq->size - 1;
    int parent_index = parent(i);

    while (i > 0 && pq->nodes[i].priority < pq->nodes[parent_index].priority) {
        swap(&pq->nodes[i], &pq->nodes[parent_index]);
        i = parent_index;
        parent_index = parent(i);
    }
}

void heapfy_down(PriorityQueue *pq) {
    int i = 0;
    while (lef_child(i) < pq->size) {
        int left = lef_child(i);
        int right = right_child(i);
        int smallest = left;

        if (right < pq->size && pq->nodes[right].priority < pq->nodes[left].priority) {
            smallest = right;
        }
        if (pq->nodes[i].priority <= pq->nodes[smallest].priority) {
            break;
        }
        swap(&pq->nodes[i], &pq->nodes[smallest]);  
        i = smallest;
    }
}

void insert(PriorityQueue *pq, int priority, int value) {
    if (pq->size == pq->capacity) {
        return;
    }
    pq->nodes[pq->size].priority = priority;
    pq->nodes[pq->size].data = value;
    pq->size++;
    heapfy_up(pq);
}

Node remove_min(PriorityQueue *pq) {
    if (pq->size == 0) {
        return;
    }
    Node min_node = pq->nodes[0];
    pq->nodes[0] = pq->nodes[pq->size - 1];
    pq->size--;
    heapfy_down(pq);
    return min_node;
}


int main() {
    int n, m, time, priority, total_time=0, time_cashier, amount, *cashiers;
    PriorityQueue pq, free_cashiers;

    scanf("%d %d", &n, &m);

    create_queue(&pq, m);
    create_queue(&free_cashiers, n);

    cashiers = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &cashiers[i]);
        insert(&free_cashiers, i, 0);
    }

    for (int i = 0; i < m; i++) {
        scanf("%d", &amount);
        
        if (free_cashiers.size == 0) {
            Node cashier = remove_min(&pq);
            time = cashier.priority;
            priority = cashier.data;
            insert(&free_cashiers, priority, time);

            while (pq.size > 0 && time == pq.nodes[0].priority) {
                cashier = remove_min(&pq);
                priority = cashier.data;
                insert(&free_cashiers, priority, time);
            }
        }

        Node cashier = remove_min(&free_cashiers);
        time = cashiers[cashier.priority] * amount + cashier.data;
        insert(&pq, time, cashier.priority);
    }

    int last_time = 0;
    for (int i = 0; i < pq.size; i++) {
        if (pq.nodes[i].priority > last_time) {
            last_time = pq.nodes[i].priority;
        }
    }

    printf("%d\n", last_time);
    
    return 0;
}
