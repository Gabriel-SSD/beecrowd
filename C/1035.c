#include <stdio.h>
int main() {
    int a,b,c,d,key;
    scanf("%i %i %i %i",&a,&b,&c,&d);
    if (b>c)
        key++;
    if (d>a)
        key++;
    if ((c+d) > (a+b))
        key++;
    if (c>0 && d>0)
        key++;
    if (a%2==0)
        key++;
    if (key==5)
        printf("Valores aceitos\n");
    if (key!=5)
        printf("Valores nao aceitos\n");
    return 0;
}
