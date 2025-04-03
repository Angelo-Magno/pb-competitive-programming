#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

// Estrutura do nó da lista
typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

// Estrutura da lista
typedef struct {
    Node* head;
    Node* tail;
    int size;
} DoublyLinkedList;

// Protótipos das funções
DoublyLinkedList* createList();
Node* createNode(int data);
void insertAtHead(DoublyLinkedList* list, int data);
void insertAtTail(DoublyLinkedList* list, int data);
void insertAtPosition(DoublyLinkedList* list, int data, int position);
void removeFromHead(DoublyLinkedList* list);
void removeFromTail(DoublyLinkedList* list);
void removeFromPosition(DoublyLinkedList* list, int position);
int search(DoublyLinkedList* list, int data);
void printForward(DoublyLinkedList* list);
void printBackward(DoublyLinkedList* list);
void freeList(DoublyLinkedList* list);

#endif