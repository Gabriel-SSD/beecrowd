#include <stdio.h>
int main() {
    int total_time, seg, min, hour;
    scanf("%i", &total_time);
    hour = total_time/3600;
    total_time -= (hour*3600);
    min = total_time/60;
    total_time -= (min*60);
    seg = total_time;
    printf("%i:%i:%i\n",hour, min, seg);
    return 0;
}
