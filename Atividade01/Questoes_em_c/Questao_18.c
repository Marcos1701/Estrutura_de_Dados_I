#include <stdio.h>

/* 18. Leia um valor em m, calcule e escreva o equivalente em cm.*/

main()
{

    float valor_m, valor_cm;

    printf("Digite o valor em m: \n=> ");
    scanf("%f", &valor_m);

    valor_cm = valor_m * 100;

    printf("%.2f m equivale a %.2f cm", valor_m, valor_cm);
}