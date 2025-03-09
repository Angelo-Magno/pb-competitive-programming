#include <stdio.h>
#include <time.h>

int main() {
    struct tm christmas_date = {0}, current_data = {0};
    time_t time_1, time_2;
    int diff_in_days;

    christmas_date.tm_mday = 25;
    christmas_date.tm_mon = 11;
    christmas_date.tm_year = 2016 - 1900;
    time_1 = mktime(&christmas_date);

    current_data.tm_year = 2016 - 1900;

    while (scanf("%d %d", &current_data.tm_mon, &current_data.tm_mday) != EOF)
    {
        current_data.tm_mon -= 1;
        time_2 = mktime(&current_data);

        diff_in_days = (int)(difftime(time_2, time_1) / (60 * 60 * 24));

        if (diff_in_days < -1) {
            printf("Faltam %d dias para o natal!\n", -diff_in_days);
        } else if (diff_in_days > 0) {
            printf("Ja passou!\n");
        } else if (diff_in_days == -1) {
            printf("E vespera de natal!\n");
        } else if (diff_in_days == 0) {
            printf("E natal!\n");
        }
        
    }
    
    return 0;
}
