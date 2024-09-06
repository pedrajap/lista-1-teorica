#include <stdio.h>

int main() {
    char nome[100];

    printf("Ola eu sou o N 1, como e seu nome?\n");

    scanf(" %[^\n]", nome);

    printf("Bem-vindo ao clube, %s!\n", nome);

    return 0;
}
