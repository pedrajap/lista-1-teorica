#include <stdio.h>

int main() {
    int primeiroTermo, razao, n;
    int nEsimoTermo;

    printf("Digite o primeiro termo da PA: ");
    scanf("%d", &primeiroTermo);

    printf("Digite a razao da PA: ");
    scanf("%d", &razao);

    printf("Digite o número N para encontrar o N-esimo termo: ");
    scanf("%d", &n);

    nEsimoTermo = primeiroTermo + (n - 1) * razao;

    printf("O %d-esimo termo da PA e: %d\n", n, nEsimoTermo);

    return 0;
}
