#include <stdio.h>

/* 14. Leia uma temperatura em °C,
calcule e escreva a equivalente em °F. (t°F = (9 * t°C + 160) / 5)*/

main()
{

    float temp_C, temp_F;

    printf("Digite o valor em graus Celsius: \n=> ");
    scanf("%f", &temp_C);

    temp_F = (9 * temp_C + 160) / 5;

    printf("%.2f graus_C equivale a %.2f graus_F", temp_C, temp_F);
}