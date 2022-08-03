#include <stdio.h>
int main() {
    int a, b;
    scanf("%i", &a);
    fflush(stdin);
    scanf("%i", &b);
    int produto = a * b;
    printf("PROD = %i\n", produto);
    return 0;
}
