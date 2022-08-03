#include <stdio.h>
int main()
{
    int dia = 0; int hora = 0; int mins = 0; int seg = 0;
    int d0 = 0; int d1 = 0; int h1 = 0; int h0 = 0; int m1 = 0; int m0 = 0; int s0 = 0; int s1 = 0;
    scanf("Dia %i", &d0);
    scanf("%i%i%i", &h0, &m0, &s0);
    printf("%i %i %i %i", d0, h0, m0, s0);
    /*scanf("Dia %i", &d1);
    scanf("%2.i : %2.i : %2.i", &h1, &m1, &s1);
    dia = d1 - d0; hora = h1 - h0; mins = m1 - m0; seg = s1 - s0;
    if (seg<0)
    {
        seg+=60;
        mins +=1;
    }
    if (mins<0)
    {
        mins+=60;
        hora +=1;
    }
    if (hora<0)
    {
        hora+=24;
        dia+=1;
    }
    printf("%i dia(s)\n%i hora(s)\n%i minuto(s)\n%i segundo(s)\n", dia, hora, mins, seg);
    */
    return 0;
}
