#include <stdio.h>
int main() {
    double cash;
    int n100, n50, n20, n10, n5, n2, m1, m50c, m25c, m10c, m05c, m01c;
    scanf("%lf", &cash);
    n100 = cash/100;
    cash -= (n100*100);
    n50 = cash/50;
    cash -= (n50*50);
    n20 = cash/20;
    cash -=(n20*20);
    n10 = cash/10;
    cash -= (n10*10);
    n5 = cash/5;
    cash -= (n5*5);
    n2 = cash/2;
    cash -= (n2*2);
    m1 = cash/1;
    cash -= (m1*1);
    cash *= 100;
    m50c = cash/50;
    cash -= (m50c*50);
    m25c = cash/25;
    cash -= (m25c*25);
    m10c = cash/10;
    cash -= (m10c*10);
    m05c = cash/5;
    cash -= (m05c*5);
    m01c = cash/1;
    cash -= (m01c*1);
    printf("NOTAS:\n");
    printf("%i nota(s) de R$ 100.00\n", n100);
    printf("%i nota(s) de R$ 50.00\n", n50);
    printf("%i nota(s) de R$ 20.00\n", n20);
    printf("%i nota(s) de R$ 10.00\n", n10);
    printf("%i nota(s) de R$ 5.00\n", n5);
    printf("%i nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%i moeda(s) de R$ 1.00\n", m1);
    printf("%i moeda(s) de R$ 0.50\n", m50c);
    printf("%i moeda(s) de R$ 0.25\n", m25c);
    printf("%i moeda(s) de R$ 0.10\n", m10c);
    printf("%i moeda(s) de R$ 0.05\n", m05c);
    printf("%i moeda(s) de R$ 0.01\n", m01c);
    return 0;
}