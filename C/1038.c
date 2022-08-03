#include <stdio.h>
int main() {
    int entrada, qtd;
    scanf("%i %i", &entrada, &qtd);
    if (entrada==1)
        printf("Total: R$ %.2f\n",(qtd*4.0));
    else if (entrada==2)
        printf("Total: R$ %.2f\n", (qtd*4.5));
    else if (entrada==3)
        printf("Total: R$ %.2f\n", (qtd*5.0));
    else if (entrada==4)
        printf("Total: R$ %.2f\n", (qtd*2.0));
    else if (entrada==5)
        printf("Total: R$ %.2f\n", (qtd*1.5));
    return 0;
}
