#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct node {
    struct node *prev, *next;
    char name[32];
    int token;
} Node;

typedef struct circular_linked_list {
    Node *head, *tail;
    int size;
} CircularList;

Node* create_node(char *name, int value) {
    Node *new_node = (Node*)malloc(sizeof(Node)); 
    new_node->next = NULL;
    new_node->prev = NULL;
    strncpy(new_node->name, name, sizeof(new_node->name) - 1);
    new_node->name[sizeof(new_node->name) - 1] = '\0';
    new_node->token = value;

    return new_node;
}

CircularList* create_list() {
    CircularList *list = (CircularList*)malloc(sizeof(CircularList));
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;

    return list;
}

void insert(CircularList *list, char *name, int token) {
    Node *new_node = create_node(name, token);

    if (list->head == NULL) {
        list->head = new_node;
        list->tail = new_node;
        list->head->next = new_node;
        list->head->prev = new_node;
    } else {
        list->head->prev = new_node;
        new_node->prev = list->tail;
        new_node->next = list->head;
        list->head = new_node;
        list->tail->next = new_node;
    }

    list->size++;
}

Node* remove_node(CircularList *list, Node *node, int flag) {
    Node *prev_node, *next_node;

    prev_node = node->prev;
    next_node = node->next;
    prev_node->next = next_node;
    next_node->prev = prev_node;
    free(node);
    list->size--;

    if (flag) {
        return next_node;
    }

    return prev_node;
}

Node* counter_clockwise(Node *node, int x, int list_size) {
    int n = x % list_size;

    while (n--) {
        node = node->prev; 
    }

    return node;
}

Node* clockwise(Node *node, int x, int size_list) {
    int n = x % size_list;

    while (n--) {
        node = node->next; 
    }

    return node;
}

int main() {
    int n, token;
    char name[32];
    CircularList *list;
    Node *current;

    while (1) {
        scanf("%d", &n);

        if (n == 0) break;

        list = create_list();

        for (int i = 0; i < n; i++) {
            scanf("%s", name);
            scanf("%d", &token);

            insert(list, name, token);
        }

        current = list->tail;
        token = current->token;
        
        while (list->size > 1) {
            if (token % 2 == 0) {
                current = clockwise(current, token, list->size);
                token = current->token;
                current = remove_node(list, current, token % 2);
            } else {
                current = counter_clockwise(current, token, list->size);
                token = current->token;
                current = remove_node(list, current, token % 2);
            }
        }
        printf("Vencedor(a): %s\n", current->name);
    }
    
    return 0;
}
