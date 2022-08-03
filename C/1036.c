#include <stdio.h>
#include <math.h>
int main() {
    double r1, r2, a, b, c, delta;
    scanf("%lf %lf %lf", &a, &b, &c);
    delta = pow(b, 2) - (4*a*c);
    if ((delta>0)&&(a!=0)){
        r1 = (-b + pow(delta, 0.5))/(2*a);
        r2 = (-b - pow(delta, 0.5))/(2*a);
        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);
    }
    else {
        printf("Impossivel calcular\n");
    }
    return 0;
}
