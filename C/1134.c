#include <stdio.h>
int main()
{
    int x; int gasolina = 0; int diesel = 0; int alcool = 0;
    while (1)
    {
        scanf("%i", &x);
        if (x==1)
            alcool++;
        else if (x==2)
            gasolina++;
        else if (x==3)
            diesel++;
        else if (x==4)
            break;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %i\n", alcool);
    printf("Gasolina: %i\n", gasolina);
    printf("Diesel: %i\n", diesel);
    return 0;
}
