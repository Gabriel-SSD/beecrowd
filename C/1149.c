#include <stdio.h>
int main()
{
    int x, y, auxx, auxy;
    int soma = 0;
    while (1)
    {
        scanf("%i",&auxx);
        if (auxx>0)
        {
            x = auxx;
            scanf("%i", &auxy);
            if (auxy>0)
            {
                y = auxy;
                break;
            }
        }
    }
    if (x>y)
    {
        for (x;x>=y;x--)
        {
            soma +=x;
            soma++;
        }
    }
    else if (y>x)
    {
        for (y;y>=x;y--)
        {
            soma += y;
            soma++;
        }
    }
    printf("%i\n", soma);
    return 0;
}
