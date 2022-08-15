#include <stdio.h>

/* 19. Leia um número inteiro de metros, calcule e
escreva quantos Km e quantos metros ele corresponde.*/

main()
{

    int valor_m;

    printf("Digite a distancia em m: \n=> ");
    scanf("%d", &valor_m);

    int valor_km = valor_m / 1000;
    int metros = valor_m % 1000;

    printf("%d m equivale a %d km e %d metros", valor_m, valor_km, metros);
}