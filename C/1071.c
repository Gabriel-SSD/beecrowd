#include <stdio.h>
int main()
{
    int soma, x, y;
    scanf("%i", &x);
    fflush(stdin);
    scanf("%i", &y);
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
        for (x;y>x;x++)
         {
             if (x%2!=0)
                 soma+=x;
         }
    }
    printf("%i\n", soma);
    return 0;
}
