#include <stdio.h>

int main(int argc, char *argv[])
{
    char name[50];
    float value;
    int workload;
    float wage;

    printf("Name: ");
    scanf("%[^\n]s", name); //Esse [^\n] Faz Ele Ler Tudo Menos O '\n'

    printf("Valor por hora: ");
    scanf(" %f", &value);

    printf("Horas trabalhadas: ");
    scanf(" %d", &workload);

    wage = workload * value;


    printf("O pagamento para %s deve ser %.2f", name, wage);

    return 0;
}
