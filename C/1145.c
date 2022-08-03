#include <stdio.h>
int main()
{
    int x,y;
    scanf("%i %i", &x, &y);
    int aux = 1; int aux1 = 1; int k =1;
    for (aux; aux<=(y/x); aux++)
    {
        while(aux1<=x*k)
        {
            printf("%i", aux1);
            if (aux1!=x*k)
                printf(" ");
            aux1++;
        }
        printf("\n");
        k++;
    }
    return 0;
}
