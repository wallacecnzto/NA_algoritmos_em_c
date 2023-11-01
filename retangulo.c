#include <stdio.h>
#include <math.h>

int main()
{
    float base;
    float altura;
    float area;
    float perimetro;
    float diagonal;

    printf("Base do retangulo: ");
    scanf("%f", &base);

    printf("Altura do retangulo: ");
    scanf("%f", &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);
    // diagonal = sqrtf(((2 * base) + (2 * altura)));
    diagonal = sqrt((pow(base, 2) + pow(altura, 2)));

    printf("AREA = %.4f\n", area);
    printf("PERIMETRO = %.4f\n", perimetro);
    printf("DIAGONAL = %.4f\n", diagonal);

    return 0;
}
