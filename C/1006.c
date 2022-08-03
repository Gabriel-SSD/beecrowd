#include <stdio.h>
int main() {
    double n1, n2, n3, media;
    scanf("%lf", &n1);
    fflush(stdin);
    scanf("%lf", &n2);
    fflush(stdin);
    scanf("%lf", &n3);
    media = ((n1 * 2) + (n2 * 3) + (n3 * 5))/10;
    printf("MEDIA = %.1lf\n", media);
    return 0;
}
