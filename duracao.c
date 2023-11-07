#include <stdio.h>

int main(int argc, char *argv[])
{
    int duration;
    int hours;
    int leftover;
    int minutes;
    int seconds;

    printf("Digite a duração em segundos: ");
    scanf("%d", &duration);

    hours = duration / 3600;
    leftover = duration % 3600;

    minutes = leftover / 60;
    seconds = leftover % 60;

    printf("%d : %d : %d\n", hours, minutes, seconds);

    return 0;
}
