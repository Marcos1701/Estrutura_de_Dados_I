#include <stdio.h>

/* 17. Leia um valor em kg (quilograma),
calcule e escreva o equivalente em g(grama).*/

main()
{

    float valor_kg, valor_g;

    printf("Digite o valor em Kg: \n=> ");
    scanf("%f", &valor_kg);

    valor_g = valor_kg * 1000;

    printf("%.2f kg equivale a %.2f g", valor_kg, valor_g);
}