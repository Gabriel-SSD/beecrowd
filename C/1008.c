#include <stdio.h>
int main() {
    int num, horas;
    float rem;
    scanf("%i", &num);
    fflush(stdin);
    scanf("%i", &horas);
    fflush(stdin);
    scanf("%f", &rem);
    printf("NUMBER = %i\n", num);
    printf("SALARY = U$ %.2f\n", horas*rem);
    return 0;
}
