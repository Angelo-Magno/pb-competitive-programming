#include <stdio.h>
#include <stdlib.h>


typedef struct node {
    struct node *prev, *next;
    int value;
} Node;

typedef struct circular_linked_list {
    Node *head, *tail;
    int size;
} CircularList;

Node* create_node(int value) {
    Node *new_node = (Node*)malloc(sizeof(Node)); 
    new_node->next = NULL;
    new_node->prev = NULL;
    new_node->value = value;

    return new_node;
}

CircularList* create_list() {
    CircularList *list = (CircularList*)malloc(sizeof(CircularList));
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;

    return list;
}

void insert(CircularList *list, int value) {
    Node *new_node = create_node(value);

    if (list->head == NULL) {
        list->head = new_node;
        list->tail = new_node;
        list->head->next = new_node;
        list->head->prev = new_node;
    } else {
        list->tail->next = new_node;
        new_node->prev = list->tail;
        new_node->next = list->head;
        list->tail = new_node;
        list->head->prev = new_node;
    }

    list->size++;
}

int remove_node(CircularList *list, Node *node) {
    Node *prev_node, *next_node;
    int value;

    if (list->size == 0) {
        printf("A lista está vazia!");
        return 0;
    }

    if (node == list->head) list->head = list->head->next;
    if (node == list->tail) list->tail = list->tail->prev;

    if (list->size == 2) {
        prev_node = node->prev;
        prev_node->prev = prev_node;
        prev_node->next = prev_node;
    } else {
        prev_node = node->prev;
        next_node = node->next;
        prev_node->next = next_node;
        next_node->prev = prev_node;
    }
    
    value = node->value;
    free(node);
    list->size--;

    return value;
}

Node* counter_clockwise(Node *node, int x, int size_list) {
    int n = (x - 1) % size_list;

    while (n--) {
        node = node->prev; 
    }

    return node;
}

Node* clockwise(Node *node, int x, int size_list) {
    int n = (x - 1) % size_list;

    while (n--) {
        node = node->next; 
    }

    return node;
}

int main() {
    int n, k, m, v, v1, v2;
    Node *aux1, *aux2;

    while (1) {
        scanf("%d %d %d", &n, &k, &m);

        if (n == 0 && k == 0 && m == 0) break;
      
        CircularList *circular_list = create_list();

        for (int i = 1; i <= n; i++) {
            insert(circular_list, i);
        }

        while (circular_list->size != 0) {
            circular_list->head = clockwise(circular_list->head, k, circular_list->size);
            circular_list->tail = counter_clockwise(circular_list->tail, m, circular_list->size);

            if (circular_list->head == circular_list->tail) {
                v = remove_node(circular_list, circular_list->head);
                printf("%3d", v);

            } else {
                v1 = remove_node(circular_list, circular_list->head);
                v2 = remove_node(circular_list, circular_list->tail);
                printf("%3d%3d", v1, v2);
            }
            
            if (circular_list->size != 0) printf(",");
        }
        
        printf("\n");
    }
    
    return 0;
}
