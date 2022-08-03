#include <stdio.h>
int main() {
    int a;
    int b;
    scanf("%i", &a);
    fflush(stdin);
    scanf("%i", &b);
    printf("X = %i\n", a+b);
    return 0;
}
