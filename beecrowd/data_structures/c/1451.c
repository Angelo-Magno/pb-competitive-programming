#include <stdio.h>
#include <stdlib.h>


typedef struct node {
    struct node *next;
    char c;
} Node;

typedef struct linked_list {
    Node *head, *tail;
    int size;
} LinkedList;

Node* create_node(char c) {
    Node *node = (Node *)malloc(sizeof(Node));
    node->next = NULL;
    node->c = c;

    return node;
}

LinkedList *create_list() {
    LinkedList *list = (LinkedList *)malloc(sizeof(LinkedList));
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;

    return list;
}

Node* insert_head(LinkedList *list, char c) {
    Node *new_node = create_node(c);

    if (list->size == 0) {
        list->head = new_node;
        list->tail = new_node;
    } else {
        new_node->next = list->head;
        list->head = new_node;
    }

    list->size++;
    return new_node;
}

Node* insert_tail(LinkedList *list, char c) {
    Node *new_node = create_node(c);

    if (list->size == 0) {
        list->head = new_node;
        list->tail = new_node;
    } else {
        list->tail->next = new_node;
        list->tail = new_node;
    }

    list->size++;
    return new_node;
}

Node* insert_cursor(LinkedList *list, Node *cursor, char c) {
    Node *new_node = create_node(c);

    if (list->size == 0) {
        list->head = new_node;
        list->tail = new_node;
    } else {
        if (cursor == list->tail) list->tail = new_node; 
        new_node->next = cursor->next;
        cursor->next = new_node;
    }

    list->size++;
    return new_node;
}

void print_list(LinkedList *list) {
    Node *current = list->head;
    Node *aux;

    for (int i = 0; i < list->size; i++) {
        printf("%c", current->c);
        aux = current;
        current = current->next;
        free(aux);
    }
    printf("\n");

    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
}

int main() {
    char c;
    int flag = 0;
    Node *cursor;
    LinkedList *list = create_list();

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            print_list(list);
            continue;
        }

        if (c == '[') {
            flag = 1;
            continue;
        } else if (c == ']') {
            flag = 2;
            continue;
        }

        if (flag == 1) {
            cursor = insert_head(list, c);
            flag = 0;
        } else if (flag == 2) {
            cursor = insert_tail(list, c);
            flag = 0;
        } else {
            cursor = insert_cursor(list, cursor, c);
        }
    }
    
    return 0;
}
