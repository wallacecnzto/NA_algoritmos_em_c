#include <stdio.h>

double a;
double b;
double c;
double bigger;

int main(int argc, char *argv[])
{
    printf("Digite as tres distancias: \n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    // or scanf("%lf %lf %lf", &a, &b, &c);

    if (a > b && a > c) {
        bigger = a;
    } else if (b > a && b > c) {
        bigger = b;
    } else {
        bigger = c;
    }

    printf("MAIOR DISTANCIA = %.2lf\n", bigger);

    return 0;
}
