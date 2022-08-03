#include <stdio.h>
int main()
{
    int x; int aux1 = 1; int aux2 = 2; int aux3 = 3;
    scanf("%i", &x);
    while (x>0)
    {
        x--;
        printf("%i %i %i PUM\n", aux1, aux2, aux3);
        aux1 +=4; aux2 +=4; aux3 +=4;
    }
    return 0;
}
