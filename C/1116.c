#include <stdio.h>
int main()
{
    int n, x, y;
    scanf("%i", &n);
    for (n; n>0;n--)
    {
        scanf("%i %i", &x, &y);
        if (y==0)
            printf("divisao impossivel\n");
        else
            printf("%.1f\n", (float)x/y);
    }
    return 0;
}
