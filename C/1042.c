#include <stdio.h>
int main()
{
    int maior, medio, menor, a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    if (a>b && a>c)
    {
        maior = a;
        if (b>c)
        {
            medio = b;
            menor = c;
        }
        else
        {
            medio = c;
            menor = b;
        }
    }
    else if (b>a && b>c)
    {
        maior = b;
        if (a>c)
        {
            medio = a;
            menor = c;
        }
        else
        {
            menor = a;
            medio = c;
        }
    }
    else if (c>a && c>b)
    {
        maior = c;
        if (b>a)
        {
            medio = b;
            menor = a;
        }
        else
        {
            medio = a;
            menor = b;
        }
    }
    printf("%i\n%i\n%i\n\n", menor, medio, maior);
    printf("%i\n%i\n%i\n", a, b, c);
    return 0;
}
