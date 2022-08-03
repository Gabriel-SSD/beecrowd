#include <stdio.h>
#include <string.h>
int main ()
{
    char a[15], b[15], c[15];
    gets(a);
    gets(b);
    gets(c);
    int key0 = strcmp(a, "vertebrado");
    if (key0 == 0)
    {
            int key00 = strcmp(b, "ave");
            if (key00 == 0)
            {
                int key000 = strcmp(c, "carnivoro");
                if (key000 == 0)
                    printf("aguia\n");
                else
                    printf("pomba\n");
            }
            else
            {
                int key001 = strcmp(c, "onivoro");
                if (key001 == 0)
                    printf("homem\n");
                else
                    printf("vaca\n");
            }
    }
    else
    {
        int key11 = strcmp(b, "inseto");
        if (key11 == 0)
        {
            int key111 = strcmp(c, "hematofago");
            if (key111 == 0)
                printf("pulga\n");
            else
                printf("lagarta\n");
        }
        else
        {
            int key1111 = strcmp(c, "hematofago");
            if (key1111 == 0)
                printf("sanguessuga\n");
            else
                printf("minhoca\n");
        }
    }
    return 0;
}
// não sei como comparar strings por caracter
