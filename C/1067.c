#include <stdio.h>
int main()
{
    int num;
    int x = 1;
    scanf("%i", &num);
    while (x<=num)
    {
        if (x%2!=0)
            printf("%i\n", x);
        x++;
    }
    return 0;
}
