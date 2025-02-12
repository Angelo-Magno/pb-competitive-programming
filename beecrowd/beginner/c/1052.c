#include <stdio.h>

int main() {
    char months[12][15] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August", "September",
        "October", "November", "December"
    };
    int n;

    scanf("%d", &n);

    printf("%s\n", months[n-1]);

    return 0;
}
