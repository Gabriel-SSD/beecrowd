#include <stdio.h>
int main ()
{
    int entrada;
    int key = 1;
    int par = 0;
    int impar = 0;
    int positivo = 0;
    int negativo = 0;
    while (key<=5)
    {
        key ++;
        scanf("%i", &entrada);
        if (entrada>=0)
            positivo ++;
        else
            negativo ++;
        if (entrada%2==0)
            par ++;
        else
            impar ++;
        if (entrada == 0)
            positivo --;
    }
    printf("%i valor(es) par(es)\n%i valor(es) impar(es)\n%i valor(es) positivo(s)\n%i valor(es) negativo(s)\n", par, impar, positivo, negativo);
    return 0;
}
