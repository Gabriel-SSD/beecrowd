#include <stdio.h>
int main()
{
    int x = 0; int y=1;
    while (x!=y)
        {
        scanf("%i %i", &x, &y);
        if (x<y)
            printf("Crescente\n");
        else if(x>y)
            printf("Decrescente\n");
        }
    return 0;
}
