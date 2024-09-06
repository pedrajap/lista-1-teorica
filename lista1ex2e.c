#include <stdio.h>
#include <math.h>

int main() {
    float largura, altura;
    float area, consumoPorMetro = 0.3;
    float capacidadeLata = 2.0;
    int latasNecessarias;

    printf("Digite a largura da parede em metros: ");
    scanf("%f", &largura);
    printf("Digite a altura da parede em metros: ");
    scanf("%f", &altura);

    area = largura * altura;
    float tintaNecessaria = area * consumoPorMetro;

    latasNecessarias = (int)ceil(tintaNecessaria / capacidadeLata);
    printf("Você precisara de %d lata(s) de tinta para pintar a parede.\n", latasNecessarias);

    return 0;
}
