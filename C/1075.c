#include <stdio.h>
int main()
{
    int n, key;
    scanf("%i", &n);
    key = 1;
    while (key<=10000)
    {
        if (key%n==2)
            printf("%i\n",key);
        key ++;
    }
    return 0;
}
