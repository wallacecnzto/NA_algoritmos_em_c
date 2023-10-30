#include <stdio.h>

int main(int argc, char *argv[])
{
    float largura = 0;
    float comprimento = 0;
    float metro_quadrado = 0;
    float area = 0;
    float preco = 0;

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
