#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char id[7];
    struct node *next;
    struct node *prev;
} Node;

typedef struct queue {
    Node *first;
    Node *last;
    int size;
} Queue;

Node* create_node(char *id) {
    Node *node = (Node *)malloc(sizeof(Node));
    node->next = NULL;
    node->prev = NULL;
    strcpy(node->id, id);
    
    return node;
}

void create_queue(Queue *q) {
    q->first = NULL;
    q->last = NULL;
    q->size = 0;
}

void enqueue(Queue *q, char *id) {
    Node *new_node = create_node(id);

    if (q->size == 0) {
        q->first = new_node;
        q->last = new_node;
    } else {
        new_node->next = q->last;
        q->last->prev = new_node;
        q->last = new_node;
    }

    q->size++;
}

void dequeue(Queue *q) {
    if (q->size == 0) {
        return;
    }

    Node *temp = q->first;
    q->first = q->first->prev;
    free(temp);
    q->size--;
}

int main() {
    char input[7];
    int p;
    Queue west, north, south, east, ans;

    create_queue(&west);
    create_queue(&north);
    create_queue(&south);
    create_queue(&east);
    create_queue(&ans);

    do {
        scanf("%s", input);

        if (input[0] != 'A') {
            p = atoi(input);
        } else {
            switch (p) {
                case -1:
                    enqueue(&west, input);
                    break;
                case -2:
                    enqueue(&south, input);
                    break;
                case -3:
                    enqueue(&north, input);
                    break;
                case -4:
                    enqueue(&east, input);
                    break;
            }
        }
    } while (p != 0);

    while (west.size > 0 || south.size > 0 || north.size > 0 || east.size > 0) {
        if (west.size > 0) {
            enqueue(&ans, west.first->id);
            dequeue(&west);
        }
        if (north.size > 0) {
            enqueue(&ans, north.first->id);
            dequeue(&north);
        }
        if (south.size > 0) {
            enqueue(&ans, south.first->id);
            dequeue(&south);
        }
        if (east.size > 0) {
            enqueue(&ans, east.first->id);
            dequeue(&east);
        }
    }

    while (ans.size > 1) {
        printf("%s ", ans.first->id);
        dequeue(&ans);
    }

    printf("%s\n", ans.first->id);
    dequeue(&ans);
    
    return 0;
}
