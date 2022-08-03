#include <stdio.h>
int main() {
    int idade, ano, mes, dia;
    scanf("%i", &idade);
    ano = idade/365;
    idade -= (ano*365);
    mes = idade/30;
    idade -= (mes*30);
    dia = idade;
    printf("%i ano(s)\n", ano);
    printf("%i mes(es)\n", mes);
    printf("%i dia(s)\n", dia);
    return 0;
}
