#include "doubly_linked_list.h"
#include <stdio.h>
#include <stdlib.h>

// Cria uma nova lista vazia
DoublyLinkedList* createList() {
    DoublyLinkedList* list = (DoublyLinkedList*)malloc(sizeof(DoublyLinkedList));
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
    return list;
}

// Cria um novo nó
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Insere no início da lista
void insertAtHead(DoublyLinkedList* list, int data) {
    Node* newNode = createNode(data);
    
    if (list->head == NULL) {
        list->head = newNode;
        list->tail = newNode;
    } else {
        newNode->next = list->head;
        list->head->prev = newNode;
        list->head = newNode;
    }
    list->size++;
}

// Insere no final da lista
void insertAtTail(DoublyLinkedList* list, int data) {
    Node* newNode = createNode(data);
    
    if (list->tail == NULL) {
        list->head = newNode;
        list->tail = newNode;
    } else {
        newNode->prev = list->tail;
        list->tail->next = newNode;
        list->tail = newNode;
    }
    list->size++;
}

// Insere em uma posição específica
void insertAtPosition(DoublyLinkedList* list, int data, int position) {
    if (position < 0 || position > list->size) {
        printf("Posição inválida\n");
        return;
    }
    
    if (position == 0) {
        insertAtHead(list, data);
    } else if (position == list->size) {
        insertAtTail(list, data);
    } else {
        Node* newNode = createNode(data);
        Node* current = list->head;
        
        for (int i = 0; i < position - 1; i++) {
            current = current->next;
        }
        
        newNode->next = current->next;
        newNode->prev = current;
        current->next->prev = newNode;
        current->next = newNode;
        
        list->size++;
    }
}

// Remove do início da lista
void removeFromHead(DoublyLinkedList* list) {
    if (list->head == NULL) {
        printf("Lista vazia\n");
        return;
    }
    
    Node* temp = list->head;
    list->head = list->head->next;
    
    if (list->head != NULL) {
        list->head->prev = NULL;
    } else {
        list->tail = NULL;
    }
    
    free(temp);
    list->size--;
}

// Remove do final da lista
void removeFromTail(DoublyLinkedList* list) {
    if (list->tail == NULL) {
        printf("Lista vazia\n");
        return;
    }
    
    Node* temp = list->tail;
    list->tail = list->tail->prev;
    
    if (list->tail != NULL) {
        list->tail->next = NULL;
    } else {
        list->head = NULL;
    }
    
    free(temp);
    list->size--;
}

// Remove de uma posição específica
void removeFromPosition(DoublyLinkedList* list, int position) {
    if (position < 0 || position >= list->size) {
        printf("Posição inválida\n");
        return;
    }
    
    if (position == 0) {
        removeFromHead(list);
    } else if (position == list->size - 1) {
        removeFromTail(list);
    } else {
        Node* current = list->head;
        
        for (int i = 0; i < position; i++) {
            current = current->next;
        }
        
        current->prev->next = current->next;
        current->next->prev = current->prev;
        free(current);
        list->size--;
    }
}

// Busca um elemento na lista
int search(DoublyLinkedList* list, int data) {
    Node* current = list->head;
    int position = 0;
    
    while (current != NULL) {
        if (current->data == data) {
            return position;
        }
        current = current->next;
        position++;
    }
    
    return -1; // Não encontrado
}

// Imprime a lista do início ao fim
void printForward(DoublyLinkedList* list) {
    Node* current = list->head;
    printf("Lista (tamanho %d): ", list->size);
    
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Imprime a lista do fim ao início
void printBackward(DoublyLinkedList* list) {
    Node* current = list->tail;
    printf("Lista reversa: ");
    
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->prev;
    }
    printf("\n");
}

// Libera a memória da lista
void freeList(DoublyLinkedList* list) {
    Node* current = list->head;
    Node* next;
    
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    
    free(list);
}