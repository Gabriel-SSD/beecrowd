#include <stdio.h>
int main()
{
    int i, j;
    i = 1; j = 7;
    while (i<=9)
    {
        printf("I=%i J=%i\n",i,j);
        printf("I=%i J=%i\n",i,j-1);
        printf("I=%i J=%i\n",i,j-2);
        i+=2; j+=2;
    }
    return 0;
}
