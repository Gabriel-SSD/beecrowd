#include <stdio.h>
int main()
{
    int x, y;
    scanf("%i", &x);
    scanf("%i", &y);
    if (x>y)
    {
        y++;
        for (y;y<x;y++)
            {
                if (y%5==2 || y%5==3)
                    printf("%i\n", y);
            }
    }
    else if (y>x)
    {
        x++;
        for (x;x<y;x++)
            {
                if (x%5==2 || x%5==3)
                    printf("%i\n", x);
            }
    }
    return 0;
}
