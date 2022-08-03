#include <stdio.h>
int main()
{
    int x; int c;
    while (1)
    {
        scanf("%i",&x);
        if (x==0)
            break;
        for (c=1; c<=x;c++)
        {
            printf("%i",c);
            if (c!=x)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
