#include <stdio.h>
int main()
{
    int c = 1;
    int positivos = 0;
    float var = 0;
    while (c<=6)
    {
        scanf("%f", &var);
        c++;
        if (var>=0)
            positivos++;
    }
    printf("%i valores positivos\n", positivos);
    return 0;
}
