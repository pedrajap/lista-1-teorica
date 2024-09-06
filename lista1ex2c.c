#include <stdio.h>

int main() {
    char nome[100];
    int idade;
    int diasDeVida;

    printf("Qual e o seu nome?\n");
    scanf("%[^\n]", nome);

    printf("Qual e a sua idade?\n");
    scanf("%d", &idade);

    diasDeVida = idade * 365;

    printf("%s, voce tem aproximadamente %d dias de vida.\n", nome, diasDeVida);

    return 0;
}
