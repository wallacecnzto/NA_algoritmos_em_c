#include <stdio.h>

int code;
int amount;
double total;

int main(int argc, char *argv[])
{
    printf("Codigo do produto comprado: \n");
    scanf("%d", &code);

    printf("Quantidade comprada: \n");
    scanf("%d", &amount);

    if (code == 1) {
        total = amount * 5.00;
        printf("Valor a pagar: R$ %.2lf\n", total);
    } else if (code == 2) {
        total = amount * 3.50;
        printf("Valor a pagar: R$ %.2lf\n", total);
    } else if (code == 3) {
        total = amount * 4.80;
        printf("Valor a pagar: R$ %.2lf\n", total);
    } else if (code == 4) {
        total = amount * 8.90;
        printf("Valor a pagar: R$ %.2lf\n", total);
    } else {
        total = amount * 7.32;
        printf("Valor a pagar: R$ %.2lf\n", total);
    }

    return 0;
}
