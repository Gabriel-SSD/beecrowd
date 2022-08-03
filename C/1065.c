#include <stdio.h>
int main()
{
    int key = 1;
    int pares = 0;
    int entrada;
    while (key<=5)
    {
        key ++;
        scanf("%i", &entrada);
        if (entrada%2==0)
            pares ++;
    }
    printf("%i valores pares\n", pares);
    return 0;
}
