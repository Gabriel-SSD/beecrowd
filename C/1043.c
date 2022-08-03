#include <stdio.h>
int main() {
    double a, b, c;
    int teste = 0;
    scanf("%lf %lf %lf", &a, &b, &c);
    if ((a+b)>c)
        teste++;
    if ((a+c)>b)
        teste++;
    if ((b+c)>a)
        teste++;
    if (teste==3)
        printf("Perimetro = %.1lf\n", (a+b+c));
    else
        printf("Area = %.1lf\n", ((a+b)*c)/2);
    return 0;
}
