#include <stdio.h>

int main() {
    float salary, tax_paid = 0.0;

    scanf("%f", &salary);

    if (salary > 4500.0){
        tax_paid += (salary - 4500.0) * 0.28;
        salary = 4500.0;
    }

    if (salary > 3000.0){
        tax_paid += (salary - 3000.0) * 0.18;
        salary = 3000.0;
    }

    if (salary > 2000.0){
        tax_paid += (salary - 2000.0) * 0.08;
    }

    if (tax_paid == 0.0) {
        printf("Isento\n");
    }
    else{
        printf("R$ %.2f\n", tax_paid);
    }

    return 0;
}
