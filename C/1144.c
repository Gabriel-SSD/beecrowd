#include <stdio.h>
int main()
{
    int x; int aux1 = 1; int aux2 = 1; int aux3= 1; int k = 2;
    scanf("%i", &x);
    while (x*2>0)
    {
        x--;
        printf("%i %i %i\n", aux1, aux2, aux3);
        aux2++; aux3++;
        printf("%i %i %i\n", aux1, aux2, aux3);
        aux1++; aux2= (aux1*k); aux3 = (aux2*k);
        k++;
    }
    return 0;
}
