#include <stdio.h>
int main()
{
    int x, y;
    int soma = 0;
    scanf("%i", &x);
    scanf("%i", &y);
    if (x>y)
    {
        for (x;x>=y;x--)
        {
            if (x%13!=0)
                soma+=x;
        }
    }
    else if (y>x)
    {
        for (y;y>=x;y--)
        {
            if (y%13!=0)
                soma+=y;
        }
    }
    printf("%i\n", soma);
    return 0;
}
