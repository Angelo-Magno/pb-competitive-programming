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
    int n, k, m, v;
    Node *aux1, *aux2;

    while (1) {
        scanf("%d %d %d", &n, &k, &m);

        if (n == 0 && k == 0 && m == 0) {
            break;
        }
      
        CircularList *circular_list = create_list();

        for (int i = 1; i <= n; i++) {
            insert(circular_list, i);
        }

        Node *first, *last;
        
        first = circular_list->head;
        last = circular_list->tail;
    
        while (circular_list->size != 0) {
            first = clockwise(first, k, circular_list->size);
            last = counter_clockwise(last, m, circular_list->size);

            if (first == last) {
                aux1 = first->next;
                aux2 = last->prev;
                v = remove_node(circular_list, first);
                first = aux1;
                last = aux2;
                printf("%3d", v);

            } else {
                aux1 = first->next;
                if (aux1 == last) aux1 = aux1->next;
                aux2 = last->prev;
                if (aux2 == first) aux2 = aux2->prev;

                int v1 = remove_node(circular_list, first);
                first = aux1;
                int v2 = remove_node(circular_list, last);
                last = aux2;
                printf("%3d%3d", v1, v2);
            }
            
            if (circular_list->size != 0) printf(",");
        }
        
        printf("\n");
    }
    
    return 0;
}
