#include <stdio.h>
int main()
{
    int key;
    scanf("%i", &key);
    while (key>0)
    {
        float n1, n2, n3, media;
        scanf("%f %f %f", &n1, &n2, &n3);
        media = ((n1*2)+(n2*3)+(n3*5))/10;
        printf("%.1f\n", media);
        key--;
    }
}
