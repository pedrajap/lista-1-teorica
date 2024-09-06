#include <stdlib.h>
#include <stdio.h>

int main() {

    int a, b, c;
    int delta;
    float x1, x2;

    printf("Digite o primeiro coeficiente da parabola: ");
    scanf("%d", &a);
    printf("Digite o segundo coeficiente da parabola: ");
    scanf("%d", &b);
    printf("Digite o terceiro coeficiente da parabola: ");
    scanf("%d", &c);

    delta = pow(b, 2) - (4 * a * c);
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    printf("\nRaiz X1 = %.2f", x1);
    printf("\nRaiz X2 = %.2f", x2);

    return 0;
}
