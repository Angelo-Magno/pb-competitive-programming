#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

typedef struct node {
    char *data;
    struct node* prev;
    struct node* next;
} Node;


Node* create_node(char *word) {
    Node *new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }
    new_node->data = strdup(word);
    new_node->prev = NULL;
    new_node->next = NULL;
    return new_node;
}


void insert_end(Node **tail, char *word) {
    Node *new_node = create_node(word);
    if (*tail == NULL) {
        *tail = new_node;
        return;
    }

    (*tail)->next = new_node;
    new_node->prev = *tail;
    *tail = new_node;
}


Node* doubly_list(Node **head, const char delimiter) {
    char word[MAX_LENGTH];
    int c, pos = 0;

    Node* tail = *head;
    while (1) {
        c = getchar();
        if (c == EOF) break;

        word[pos++] = c;

        if (c == delimiter || c == '\n') {
            word[pos-1] = '\0';
            pos = 0;

            insert_end(&tail, word);

            if (*head == NULL) {
                *head = tail;
            }
        }
        
        if (c == '\n') break;
    }

    return tail;
}


void print_list(Node* head) {
    if (head == NULL) {
        printf("Lista vazia.\n");
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        printf("%s ", temp->data);
        temp = temp->next;
    }
    printf("%s\n", temp->data);
}


int main() {
    Node *current_list=NULL, *new_list=NULL;
    Node *tail_l1=NULL, *tail_l2=NULL;
    char friend[MAX_LENGTH];

    tail_l1 = doubly_list(&current_list, ' ');
    tail_l2 = doubly_list(&new_list, ' ');

    scanf("%s", friend);

    if (strcmp(friend, "nao") == 0) {
        tail_l1->next = new_list;
        print_list(current_list);
 

    } else {
        Node* temp = current_list;
        while (temp != NULL && strcmp(temp->data, friend) != 0) {
            temp = temp->next;
        }

        if (temp == NULL) {
            printf("Não encontrado!\n");
        } else {
            if (temp->prev != NULL) {
                temp->prev->next = new_list;
                if (tail_l2 != NULL) {
                    tail_l2->next = temp;
                }
                print_list(current_list);

            } else {
                tail_l2->next = current_list;
                print_list(new_list);

            }
        }
    }

    return 0;
}