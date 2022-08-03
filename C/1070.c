#include <stdio.h>
int main()
{
    int x, key;
    key = 0;
    scanf("%i", &x);
    while (key<6)
    {
        if (x%2!=0)
        {
            printf("%i\n", x);
            key ++;
        }
        x++;
    }
    return 0;
}
