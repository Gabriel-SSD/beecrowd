#include <stdio.h>
int main() {
    int cash, n100, n50, n20, n10, n5, n2, n1;
    scanf("%i", &cash);
    printf("%i\n", cash);
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
    n1 = cash;
    printf("%i nota(s) de R$ 100,00\n", n100);
    printf("%i nota(s) de R$ 50,00\n", n50);
    printf("%i nota(s) de R$ 20,00\n", n20);
    printf("%i nota(s) de R$ 10,00\n", n10);
    printf("%i nota(s) de R$ 5,00\n", n5);
    printf("%i nota(s) de R$ 2,00\n", n2);
    printf("%i nota(s) de R$ 1,00\n", n1);
    return 0;
}
