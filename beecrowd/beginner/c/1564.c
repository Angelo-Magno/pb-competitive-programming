#include <stdio.h>

int main() {
    int n;

    while (scanf("%d", &n)!=EOF){
        printf("vai ter %s!\n", n > 0 ? "duas" : "copa");
    }
    
    return 0;
}
