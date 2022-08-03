#include <stdio.h>
int main()
{
    float soma = 0;
    int c = 0; float x = 0;
    for (c; c<2;)
    {
        scanf("%f", &x);
        if (x>10 || x<0)
            printf("nota invalida\n");
        else
        {
            soma+=x;
            c++;
        }
    }
    printf("media = %.2f\n", soma/2);
    return 0;
}
