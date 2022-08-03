#include <stdio.h>
int main()
{
    int a1, b1, a2, b2, mins, horas;
    scanf("%i %i %i %i", &a1, &b1, &a2, &b2);
    horas = a2 - a1;
    mins =  b2 - b1;
    if (mins==0 && horas==00)
        horas = 24;
    if (horas<0)
        horas +=24;
    if (mins<0)
    {
        mins = 60+(mins);
        horas -=1;
    }
    if (horas<0)
        horas = 24+(horas);
    printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", horas, mins);
    return 0;
}
// converter tudo pra segundos e então calular as horas
