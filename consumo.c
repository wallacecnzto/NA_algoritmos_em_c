#include <stdio.h>

int main(int argc, char *argv[])
{
    int distance;
    float fuel;
    float average;

    printf("Distancia percorrida: ");
    scanf("%d", &distance);

    printf("Combustivel gasto: ");
    scanf("%f", &fuel);

    average = distance / fuel;

    printf("Consumo medio = %.3f", average);

    return 0;
}
