#include <stdio.h>
#include <math.h>
int main()
{
    double x, y, z, a, b, c;
    scanf("%lf %lf %lf", &a,&b,&c);
    // ordernar as entradas em ordem decrescente
    if (c > a) {
        double tmp = a;
        a = c;
        c = tmp;
    }
    if (c > b) {
        double tmp = b;
        b = c;
        c = tmp;
    }
    if (b > a) {
        double tmp = a;
        a = b;
        b = tmp;
    }
    if (a>=(b+c))
        printf("NAO FORMA TRIANGULO\n");
    else if ((a*a)==((b*b)+(c*c)))
        printf("TRIANGULO RETANGULO\n");
    else if ((a*a)>((b*b)+(c*c)))
        printf("TRIANGULO OBTUSANGULO\n");
    else if ((a*a)<((b*b)+(c*c)))
        printf("TRIANGULO ACUTANGULO\n");
    if (a==b && a==c)
        printf("TRIANGULO EQUILATERO\n");
    else if(a==b)
        printf("TRIANGULO ISOSCELES\n");
    else if(a==c)
        printf("TRIANGULO ISOSCELES\n");
    else if(b==c)
        printf("TRIANGULO ISOSCELES\n");
    return 0;
}
