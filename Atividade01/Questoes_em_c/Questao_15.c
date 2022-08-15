#include <stdio.h>

/* 15. Leia uma temperatura em °F, calcule e escreva a
equivalente em °C. (t°C = (5 * t°F - 160) / 9).*/

main()
{

    float temp_C, temp_F;

    printf("Digite o valor em graus Fahrenheit: \n=> ");
    scanf("%f", &temp_F);

    temp_C = (5 * temp_F - 160) / 9;

    printf("%.2f graus_F equivale a %.2f graus_C", temp_F, temp_C);
}