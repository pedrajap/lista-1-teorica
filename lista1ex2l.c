#include <stdio.h>

int main() {
    int valorTotal;
    int notas100, notas50, notas10, notas5, notas1;

    printf("Digite o valor total em dinheiro: ");
    scanf("%d", &valorTotal);

    notas100 = valorTotal / 100;
    valorTotal %= 100;

    notas50 = valorTotal / 50;
    valorTotal %= 50;

    notas10 = valorTotal / 10;
    valorTotal %= 10;

    notas5 = valorTotal / 5;
    valorTotal %= 5;

    notas1 = valorTotal;

    printf("Notas de 100 reais: %d\n", notas100);
    printf("Notas de 50 reais: %d\n", notas50);
    printf("Notas de 10 reais: %d\n", notas10);
    printf("Notas de 5 reais: %d\n", notas5);
    printf("Notas de 1 real: %d\n", notas1);

    return 0;
}
