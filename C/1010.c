#include <stdio.h>
int main() {
    int a, b, a1, b1;
    float c, c1, total;
    scanf("%i %i %f", &a, &b, &c);
    fflush(stdin);
    scanf("%i %i %f", &a1, &b1, &c1);
    total = (b*c) + (b1*c1);
    printf("VALOR A PAGAR: R$ %.2f\n", total);
    return 0;
}
