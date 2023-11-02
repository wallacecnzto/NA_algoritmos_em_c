#include <stdio.h>

int main(int argc, char *argv[])
{
    int x;
    int y;
    int sum;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    sum = x + y;

    printf("SOMA: %d", sum);

    return 0;
}
