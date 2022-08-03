#include <stdio.h>
int validacao();
int main()
{
    validacao();
    int codigo;
    while (1)
    {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%i", &codigo);
        if (codigo==1)
            validacao();
        else if (codigo==2)
            break;
    }
    return 0;
}

int validacao()
{
    float soma = 0; int c = 0; float x = 0;
    for (c; c<2;)
    {
        scanf("%f", &x);
        if (x>10 || x<0)
            printf("nota invalida\n");
        else
        {
            soma+=x;
            c++;
        }
    }
    printf("media = %.2f\n", soma/2);
    return 0;
}
