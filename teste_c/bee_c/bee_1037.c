#include <stdio.h>

main()
{

    float valor;
    scanf("%f", &valor);

    if (valor < 0 || valor > 100)
        printf("Fora de intervalo\n");
    else if (valor <= 25)
        printf("Intervalo [0,25]\n");
    else if (valor <= 50)
        printf("Intervalo (25,50]\n");
    else if (valor <= 75)
        printf("Intervalo (50,75]\n");
    else
        printf("Intervalo (75,100]\n");
}