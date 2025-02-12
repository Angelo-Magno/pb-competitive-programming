#include <stdio.h>

int time_to_seconds(int h, int m, int s) {
    int total_seconds = 0;

    total_seconds += h * 60 * 60;
    total_seconds += m * 60;
    total_seconds += s;

    return total_seconds;
}

int main() {
    char _[5];
    const int day_in_seconds = 24 * 60 * 60;
    int day_start, day_end, hours, minutes, seconds, event_start_in_seconds, event_end_in_seconds;
    int duration_event_in_seconds, event_days;

    scanf("%s %d", &_, &day_start);
    scanf("%d : %d : %d", &hours, &minutes, &seconds);

    event_start_in_seconds = time_to_seconds(hours, minutes, seconds);

    scanf("%s %d", &_, &day_end);
    scanf("%d : %d : %d", &hours, &minutes, &seconds);

    event_end_in_seconds = time_to_seconds(hours, minutes, seconds);

    if (event_start_in_seconds > event_end_in_seconds) {
        day_start++;
        duration_event_in_seconds = day_in_seconds - event_start_in_seconds + event_end_in_seconds;
    } else{
        duration_event_in_seconds = event_end_in_seconds - event_start_in_seconds;
    }
    
    event_days = day_end - day_start;

    hours = duration_event_in_seconds / (60 * 60);
    duration_event_in_seconds %= (60 * 60);

    minutes = duration_event_in_seconds / 60;
    duration_event_in_seconds %= 60;

    seconds = duration_event_in_seconds;

    printf("%d dia(s)\n", event_days);
    printf("%d hora(s)\n", hours);
    printf("%d minuto(s)\n", minutes);
    printf("%d segundo(s)\n", seconds);

    return 0;
}
