#include <stdio.h>
int main()
{
    int num, entrada, in, out = 0;
    scanf("%i", &entrada);
    while (entrada>0)
    {
        scanf("%i", &num);
        if (num>=10 && num<=20)
            in ++;
        else
            out ++;
        entrada --;
    }
    printf("%i in\n", in);
    printf("%i out\n", out);
    return 0;
}
