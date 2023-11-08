#include <stdio.h>

int main(int argc, char *argv[])
{
    float note1;
    float note2;
    float final_note;

    printf("Digite a primeira nota: ");
    scanf("%f", &note1);

    printf("Digite a segunda nota: ");
    scanf("%f", &note2);

    final_note = note1 + note2;

    if (final_note < 60.00) {
        printf("NOTA FINAL = %.1f\n", final_note);
        printf("REPROVADO");
    } else {
        printf("NOTA FINAL = %.1f\n", final_note);
    }


    return 0;
}
