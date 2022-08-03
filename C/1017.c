#include <stdio.h>
int main() {
    const int consumo = 12;
    int tempo, speed;
    scanf("%i", &tempo);
    scanf("%i", &speed);
    printf("%.3f\n", (tempo * speed)/(float)12);
    return 0;
}
