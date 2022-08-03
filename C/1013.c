#include <stdio.h>
int main() {
    int a, b ,c, maior_ab;
    scanf("%i %i %i", &a, &b, &c);
    maior_ab = (a+b+abs(a-b))/2;
    printf("%i eh o maior\n", maior_ab>c?maior_ab:c);
    return 0;
}
