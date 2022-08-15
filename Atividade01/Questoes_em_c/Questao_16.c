#include <stdio.h>

/* 16. Leia um valor em km, calcule e escreva o equivalente em m..*/

main()
{

    float valor_km, valor_m;

    printf("Digite a distancia em Km: \n=> ");
    scanf("%f", &valor_km);

    valor_m = valor_km * 1000;

    printf("%.2f km equivale a %.2f m", valor_km, valor_m);
}