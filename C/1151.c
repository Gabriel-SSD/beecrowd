#include <stdio.h>

int main()
{

    int x = 0; int y = 1; int aux; int n; int k;
    scanf("%i", &n);
    for (k = 0; k<n;k++)
    {
        printf("%i", x);
        if (n-1 != k)
            printf(" ");
        aux = y; y = x+y; x = aux;
    }
    printf("\n");
    return 0;
}
