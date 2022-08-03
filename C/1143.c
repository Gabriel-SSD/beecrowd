#include <stdio.h>
int main()
{
    int x; int aux1 = 1; int aux2 = 1; int aux3= 1;
    scanf("%i", &x);
    while (x>0)
    {
        x--;
        printf("%i %i %i\n", aux1, aux2, aux3);
        ++aux1; aux2 = (aux1*aux1); aux3 = (aux1*aux1*aux1);
    }
    return 0;
}
