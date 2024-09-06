#include <stdlib.h>
#include <stdio.h>

int main()
{
    float c, f;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);

    c = (5.0 / 9.0) * (f - 32);

    printf("Temperatura em Celsus: %.2f", c);

    return 0;
}
