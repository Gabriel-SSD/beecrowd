#include <stdio.h>
int main()
{
    int num;
    scanf("%i", &num);
    int key = 1;
    while (key<=10)
    {
        printf("%i x %i = %i\n", key, num, (key*num));
        key ++;
    }
    return 0;
}
