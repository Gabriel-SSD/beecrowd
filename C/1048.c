#include <stdio.h>
int main () {
    double x;
    scanf("%lf", &x);
    if (x<=400){
        printf("Novo salario: %.2lf\n", x*1.15);
        printf("Reajuste ganho: %.2lf\n", (x*1.15)-x);
        printf("Em percentual: 15 %%\n");
    }
    else if (x<=800){
        printf("Novo salario: %.2lf\n", x*1.12);
        printf("Reajuste ganho: %.2lf\n", (x*1.12)-x);
        printf("Em percentual: 12 %%\n");
    }
    else if (x<=1200) {
        printf("Novo salario: %.2lf\n", x*1.10);
        printf("Reajuste ganho: %.2lf\n", (x*1.10)-x);
        printf("Em percentual: 10 %%\n");
    }
    else if (x<=2000) {
        printf("Novo salario: %.2lf\n", x*1.07);
        printf("Reajuste ganho: %.2lf\n", (x*1.07)-x);
        printf("Em percentual: 7 %%\n");
    }
    else {
        printf("Novo salario: %.2lf\n", x*1.04);
        printf("Reajuste ganho: %.2lf\n", (x*1.04)-x);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
