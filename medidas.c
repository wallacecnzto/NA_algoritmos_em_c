#include <stdio.h>

int main(int argc, char *argv[])
{
    double A;
    double B;
    double C;
    double square_area;
    double triangle_area;
    double trapezio_area;

    printf("Digite a medida de A: ");
    scanf("%lf", &A);

    printf("Digite a medida de B: ");
    scanf("%lf", &B);

    printf("Digite a medida de C: ");
    scanf("%lf", &C);

    square_area = A * A;
    triangle_area = (B * A) / 2;
    trapezio_area = ((A + B) * C) / 2;

    printf("AREA DO QUADRADO = %.4lf\n", square_area);
    printf("AREA DO TRIANGULO = %.4lf\n", triangle_area);
    printf("AREA DO TRAPEZIO = %.4lf\n", trapezio_area);

    return 0;
}
