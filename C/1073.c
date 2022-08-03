#include <stdio.h>
int main()
{
    int num, key = 0;
    scanf("%i", &num);
    while (key<num)
    {
        key +=2;
        if (key%2==0)
            printf("%i^2 = %i\n", key, key*key);
    }
}
