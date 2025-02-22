#include <stdio.h>

int main() {
    char phrase[] = "LIFE IS NOT A PROBLEM TO BE SOLVE";
    int n;

    scanf("%d", &n);

    printf("%.*s\n", n, phrase);

    return 0;
}
