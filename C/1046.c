#include <stdio.h>
int main() {
    int a, b;
    scanf("%i %i", &a, &b);
    if (a==b)
        printf("O JOGO DUROU 24 HORA(S)\n");
    else if (a > b)
        printf("O JOGO DUROU %i HORA(S)\n",(24-a)+b);
    else if (a < b)
        printf("O JOGO DUROU %i HORA(S)\n", b-a);
    return 0;
}
