#include <stdio.h>
#include <math.h>
#ifndef  M_PI
#define  M_PI  3.1415926535897932384626433
#endif

int main(int argc, char *argv[])
{

    double raio;
    double area;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &raio);

    area = M_PI * (raio * raio);

    printf("AREA = %.3lf", area);

    return 0;
}

// Não basta somente adicionar a biblioteca math.h, tem que ver se o compilador ja vem com ela completa ou ir fazendo um if, virificando, setando na mão ou instalando (que eu não seu fazer ainda)
