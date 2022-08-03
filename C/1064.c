#include <stdio.h>
int main ()
{
    float entrada, media;
    int positivos, key;
    key = 1;
    positivos = 0;
    while (key<=6)
    {
        scanf("%f", &entrada);
        key ++;
        if (entrada>=0)
        {
            positivos ++;
            media += entrada;
        }
    }
    media /= positivos;
    printf("%i valores positivos\n%.1f\n", positivos, media);
    return 0;
}
