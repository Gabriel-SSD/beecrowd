#include <stdio.h>
int main() {
    double pi = 3.14159;
    double r;
    double volume;
    scanf("%lf", &r);
    volume = ((double) 4/3) * pi * (r*r*r);
    printf("VOLUME = %.3lf\n", volume);
    return 0;
}
