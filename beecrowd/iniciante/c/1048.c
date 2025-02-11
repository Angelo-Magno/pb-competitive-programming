#include <stdio.h>
#define INF 3e38

int main() {
    float salary, readjustment, new_salary; 
    const float SALARY_CAP[5] = {400.0, 800.0, 1200.0, 2000.0, INF};
    const float READJUSTMENT_RATE[5] = {0.15, 0.12, 0.10, 0.07, 0.04};

    scanf("%f", &salary);

    for (int i = 0; i < 5; i++){
        if (salary <= SALARY_CAP[i]) {
            readjustment = READJUSTMENT_RATE[i] * salary;
            new_salary = salary + readjustment;
            printf("Novo salario: %.2f\n", new_salary);
            printf("Reajuste ganho: %.2f\n", readjustment);
            printf("Em percentual: %.0f %%\n", READJUSTMENT_RATE[i] * 100);
            break;
        }
    }
    return 0;
    
}
