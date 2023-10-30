#include <stdio.h>

int main(int argc, char *argv[])
{
    float largura;
    float comprimento;
    float metro_quadrado;
    float area;
    float preco;

    printf("Digite a largura do terreno: ");
    scanf("%f", &largura);

    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comprimento);

    printf("Digite o valor do metro quadrado: ");
    scanf("%f", &metro_quadrado);

    area = largura * comprimento;
    preco = metro_quadrado * area;

    printf("Area do terreno = %.2f\n", area);
    printf("Preco do terreno = %.2f\n", preco);

    return 0;
}
