#include <stdio.h>
int main()
{
    int x,y;
    while (1)
    {
        scanf("%i %i", &x, &y);
        if (x == 0 || y==0)
            break;
        else if (x>0)
        {
            if (y>0)
                printf("primeiro\n");
            else if(y<0)
                printf("quarto\n");
        }
        else if (x<0)
        {
            if (y>0)
                printf("segundo\n");
            else if (y<0)
                printf("terceiro\n");
        }
    }
    return 0;
}
