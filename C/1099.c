#include <stdio.h>

int soma_impares_consecutivos();

int main()
{
    int c;
    scanf("%i", &c);
    while (c>0)
    {
        soma_impares_consecutivos();
        c--;
    }
    return 0;
}

int soma_impares_consecutivos()
{
    int x, y;
    int soma = 0;
    scanf("%i %i", &x, &y);
    if (x>y)
    {
        if (x%2!=0)
            soma -= x;
        for (x;y<x;x--)
        {
            if (x%2!=0)
                soma+=x;
        }
    }
    else if (x<y)
    {
        if (x%2!=0)
            soma -= x;
        for (x;x<y;x++)
         {
             if (x%2!=0)
                 soma+=x;
         }
    }
    printf("%i\n", soma);
    return 0;
}
