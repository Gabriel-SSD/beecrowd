#include <stdio.h>
int main() {
    char nome[30];
    double vendas, fixo, total;
    gets(nome);
    fflush(stdin);
    scanf("%lf", &fixo);
    fflush(stdin);
    scanf("%lf", &vendas);
    total = fixo + (0.15 * vendas);
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}
