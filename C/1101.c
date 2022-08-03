#include <stdio.h>
int main()
{
    int maior, menor, num, num1, key;
    key = 1;
    while (key==1)
    {
        int soma = 0;
        scanf("%i %i", &num, &num1);
        if (num<=0 || num1<=0)
            key = 0;
        else if (num>num1)
        {
            maior = num;
            menor = num1;
        }
        else if (num<num1)
        {
            maior = num1;
            menor = num;
        }
        if (key==1)
        {
            int x;
            for(x = menor; x <= maior; x++)
            {
                printf("%i ", x);
                soma+=x;
            }
            printf("Sum=%i\n", soma);
        }
    }
    return 0;
}
