#include "doubly_linked_list.h"
#include <stdio.h>

int main() {
    DoublyLinkedList* list = createList();
    
    insertAtHead(list, 10);
    insertAtHead(list, 20);
    insertAtTail(list, 30);
    insertAtPosition(list, 40, 1);
    
    printForward(list);  // Saída: Lista (tamanho 4): 20 40 10 30
    printBackward(list); // Saída: Lista reversa: 30 10 40 20
    
    printf("Posicao do 10: %d\n", search(list, 10)); // Saída: Posição do 10: 2
    
    removeFromHead(list);
    removeFromTail(list);
    printForward(list);
    removeFromPosition(list, 1);
    
    printForward(list);  // Saída: Lista (tamanho 1): 40
    
    freeList(list);
    return 0;
}