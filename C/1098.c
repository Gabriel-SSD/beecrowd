#include <stdio.h>
int main()
{
    int x, y, k;
    float i, j;
    i = 0; j=0;
    for (x=0;x<3;x++)
        printf("I=%.0f J=%.0f\n", i, ++j);
    for (k = 0; k<4;k++)
    {
        j -= 3;
        i+=0.2; j+=0.2;
        for (x=0;x<3;x++)
            printf("I=%.1f J=%.1f\n", i, ++j);
    }
    i = 1; j=1;
    for (x=0;x<3;x++)
        printf("I=%.0f J=%.0f\n", i, ++j);
    for (k = 0; k<4;k++)
    {
        j -= 3;
        i+=0.2; j+=0.2;
        for (x=0;x<3;x++)
            printf("I=%.1f J=%.1f\n", i, ++j);
    }
    i = 2; j=2;
    for (x=0;x<3;x++)
        printf("I=%.0f J=%.0f\n", i, ++j);
    return 0;
}
