#include <stdio.h>
#include <string.h>
#define MAX_NODES ((1 << 4) - 1) // 2^4 - 1 
#define OFFSET ((1 << 3) - 1)
#define MAX_SIZE_NAMES 20

int main() {
    int index = 0, left_child, right_child;
    char word[MAX_SIZE_NAMES];
    const char tree[MAX_NODES][MAX_SIZE_NAMES] = {
        "animal", "invertebrado", "vertebrado", "anelideo", "inseto",
        "mamifero", "ave", "onivoro", "hematofago", "herbivoro",
        "hematofago", "herbivoro", "onivoro", "onivoro", "carnivoro"
    };
    const char answers[8][MAX_SIZE_NAMES] = {
        "minhoca", "sanguessuga", "lagarta", "pulga",
        "vaca", "homem", "pomba", "aguia"
    };
    
    for (int i = 0; i < 3; i++) {
        scanf("%s", word);

        left_child = index * 2 + 1;
        right_child = index * 2 + 2;

        if (strcmp(tree[left_child], word) == 0) {
            index = left_child;
        } else {
            index = right_child;
        }
    }

    printf("%s\n", answers[index - OFFSET]);

    return 0;
}

