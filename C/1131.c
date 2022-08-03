#include <stdio.h>
int main()
{
    int key = 0; int empate = 0; int inter = 0; int gremio = 0; int goli = 0; int golg = 0; int grenais = 0;
    while (1)
    {
        scanf("%i %i", &goli, &golg);
        if (goli>golg)
            inter++;
        else if (golg>goli)
            gremio++;
        else
            empate++;
        grenais++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%i", &key);
        if (key == 2)
            break;
    }
    printf("%i grenais\n", grenais);
    printf("Inter:%i\n", inter);
    printf("Gremio:%i\n", gremio);
    printf("Empates:%i\n", empate);
    if (inter>gremio)
        printf("Inter venceu mais\n");
    else if (gremio>inter)
        printf("Gremio venceu mais\n");
    else
        printf("Nao houve vencedor\n");
    return 0;
}
