#include <stdio.h>

int main()
{
    float price;
    int amount;
    float value;
    float change;

    printf("Preco unitario do produto: ");
    scanf("%f", &price);

    printf("Quantidade comprada: ");
    scanf("%d", &amount);

    printf("Dinheiro recebido: ");
    scanf("%f", &value);

    change = value - (price * amount);

    printf("TROCO = %.2f", change);

    return 0;
}
