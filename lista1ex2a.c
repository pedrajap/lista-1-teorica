#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    printf("Numeros na ordem inversa:\n");
    printf("%d\n", num3);
    printf("%d\n", num2);
    printf("%d\n", num1);

    return 0;
}
