#include <stdio.h>
int main() {
    float n1, n2, n3, n4, media;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
    printf("Media: %.1f\n", media);
    if (media<5)
        printf("Aluno reprovado.\n");
    else if (media>=5 && media<=6.9) {
        printf("Aluno em exame.\n");
        float exame, media_e;
        scanf("%f", &exame);
        printf("Nota do exame: %.1f\n", exame);
        media_e = (media+exame)/2;
        if (media_e>=5){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", media_e);
        }
        else {
            printf("Aluno reprovado.\n");
            printf("Media final: %1f\n", media_e);
        }
    }
    else
        printf("Aluno aprovado.\n");
    return 0;
}
