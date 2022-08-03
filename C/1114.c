#include <stdio.h>
int main()
{
    int senha;
    while (1)
    {
        scanf("%i", &senha);
        if (senha!=2002)
            printf("Senha Invalida\n");
        if (senha==2002)
        {
           printf("Acesso Permitido\n");
           break;
        }
    }
    return 0;
}
