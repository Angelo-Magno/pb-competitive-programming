#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
    struct node* prev;
} Node;

typedef struct queue {
    Node *first;
    Node *last;
    int size;
} Queue;

void create_queue(Queue *q) {
    q->first = NULL;
    q->last = NULL;
    q->size = 0;
}

void enqueue(Queue *q, int value) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = value;
    new_node->prev = NULL;

    if (q->size == 0) {
        q->first = new_node;
        q->last = new_node;
        new_node->next = NULL;
    } else {
        new_node->next = q->last;
        q->last->prev = new_node;
        q->last = new_node;
    }

    q->size++;
}

Node* dequeue(Queue *q) {
    if (q->size == 0) {
        return;
    }

    Node *temp = q->first;
    q->first = q->first->prev;
    q->size--;

    return temp;
}

int main() {
    int n;
    Queue q;
    Node *temp;
    
    create_queue(&q);

    while (1) {
        scanf("%d", &n);

        if (n == 0) break;

        for (int i = 1; i <= n; i++) {
            enqueue(&q, i);
        }

        printf("Discarded cards:");
        while (q.size > 1) {
            temp = dequeue(&q);

            if (q.size >= 2) printf(" %d,", temp->data);
            else printf(" %d", temp->data);
            free(temp);

            temp = dequeue(&q);
            enqueue(&q, temp->data);
            free(temp);
        }

        printf("\n");
        temp = dequeue(&q);
        printf("Remaining card: %d\n", temp->data);
        
        q.first = NULL;
        q.last = NULL;
        free(temp);
    }

    return 0;
}
