#include <stdio.h>
int main() {
    int a, b, c, d, dif;
    scanf("%i", &a);
    fflush(stdin);
    scanf("%i", &b);
    fflush(stdin);
    scanf("%i", &c);
    fflush(stdin);
    scanf("%i", &d);
    dif = (a * b - c * d);
    printf("DIFERENCA = %i\n", dif);
    return 0;
}
