#include <stdio.h>

int main() {
    int flag=1;
    long long int n, x, farms=0, sheeps=0, sum=0, empty_farm=0;
    
    scanf("%lld", &n);

    for (int i = 0; i < n; i++) {
        scanf("%lld", &x);
        
        sum += x;
        if (x % 2 == 1 && flag) {
            farms++;
            sheeps++;
            if (x == 1) empty_farm = i + 1;

        } else if (flag) {
            flag = 0;
            farms++;
            if (x > 0) sheeps++;
            sheeps += i - empty_farm;
        }
    }

    printf("%lld %lld\n", farms, sum - sheeps);

    return 0;
}
