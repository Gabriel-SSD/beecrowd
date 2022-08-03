#include <stdio.h>
int main()
{
    int key, teste;
    int coelhos = 0;
    int ratos = 0;
    int sapos = 0;
    int cobaias = 0;
    int num = 0;
    char c, r, s, x;
    float perc_coelhos, perc_ratos, perc_sapos;
    scanf("%i", &key);
    while (num<key)
    {
        scanf("%i %c", &teste, &x);
        if (x=='C')
        {
            coelhos += teste;
            cobaias += teste;
        }
        else if (x=='R')
        {
            ratos += teste;
            cobaias += teste;
        }
        else if (x=='S')
        {
            sapos += teste;
            cobaias += teste;
        }
        num ++;
    }
    perc_coelhos = ((float)coelhos/cobaias)*100;
    perc_ratos = ((float)ratos/cobaias)*100;
    perc_sapos = ((float)sapos/cobaias)*100;
    printf("Total: %i cobaias\n", cobaias);
    printf("Total de coelhos: %i\n", coelhos);
    printf("Total de ratos: %i\n", ratos);
    printf("Total de sapos: %i\n", sapos);
    printf("Percentual de coelhos: %.2f %%\n", perc_coelhos);
    printf("Percentual de ratos: %.2f %%\n", perc_ratos);
    printf("Percentual de sapos: %.2f %%\n", perc_sapos);
    return 0;
}
