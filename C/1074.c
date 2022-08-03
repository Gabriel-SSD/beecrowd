#include <stdio.h>
int main()
{
    int key, num;
    scanf("%i", &key);
    while (key>0)
    {
        key--;
        scanf("%i", &num);
        if (num==0)
            printf("NULL\n");
        else if (num%2==0)
        {
            if (num>0)
                printf("EVEN POSITIVE\n");
            else
                printf("EVEN NEGATIVE\n");
        }
        else
        {
            if (num>0)
                printf("ODD POSITIVE\n");
            else
                printf("ODD NEGATIVE\n");
        }
    }
    return 0;
}
