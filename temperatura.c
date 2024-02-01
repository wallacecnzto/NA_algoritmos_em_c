#include <stdio.h>

char s;
double temperature;
double t_celsius;
double t_fahrenheit;

int main(int argc, char *argv[])
{
    printf("Voce vai digitar a temperatura em qual escala (C/F): \n");
    scanf("%c", &s);

    if (s == 'C') {
        printf("Digite a temperatura em Celsius: \n");
        scanf("%lf", &temperature);
        t_fahrenheit = 9.0 * temperature / 5 + 32;
        printf("Temperatura equivalente em Fahrenheit: %.2lf\n", t_fahrenheit);
    } else if (s == 'F') {
        printf("Digite a temperatura em Fahrenheit: \n");
        scanf("%lf", &temperature);
        t_celsius = 5.0 / 9 * (temperature - 32);
        printf("Temperatura equivalente em Celsius: %.2lf\n", t_celsius);
    } else {
        printf("Valor incorreto!\n");
    }

    return 0;
}

