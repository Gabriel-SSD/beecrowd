#include <stdio.h>
int main() {
    int a, b;
    scanf("%i", &a);
    fflush(stdin);
    scanf("%i", &b);
    int soma = a + b;
    printf("SOMA = %i\n", soma);
    return 0;
}
