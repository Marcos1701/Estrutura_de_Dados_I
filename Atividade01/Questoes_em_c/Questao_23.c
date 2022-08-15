#include <stdio.h>

/*23. Leia 3 números, calcule e escreva a média dos números.*/

main()
{
    float valor_1, valor_2, valor_3, media;
    printf("Digite os tres valores a seguir: \n=>");
    scanf("%f", &valor_1);

    printf("=>");
    scanf("%f", &valor_2);

    printf("=>");
    scanf("%f", &valor_3);

    media = (valor_1 + valor_2 + valor_3) / 3;

    printf("A media resultande e: %.2f", media);
}