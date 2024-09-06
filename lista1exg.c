#include <stdlib.h>
#include <stdio.h>

int main()
{
    float p, v, t, m;

    printf("Digite a pressao do pneu: ");
    scanf("%f", &p);
    printf("Digite o volume do pneu: ");
    scanf("%f", &v);
    printf("Digite a temeperatura do pneu: ");
    scanf("%f", &t);

    m = (p * v) / (0.37 * (t + 460));

    printf("Massa de ar do pneu: %.2f", m);

    return 0;
}
