#include <stdio.h>

/* 4. Leia 2 números inteiros, calcule e
escreva o quociente e o resto da divisão do 1o pelo 2o. */

main()
{
    int valor_1, valor_2, resto;

    printf("Digite o primeiro valor: \n=> ");
    scanf("%d", &valor_1);

    printf("Digite o segundo valor: \n=> ");
    scanf("%d", &valor_2);

    float quociente = valor_1 / valor_2;
    resto = valor_1 % valor_2;

    printf("O quociente da divisao e igual a %.2f\n", quociente);
    printf("O resto da divisao e igual a %d\n", resto);
}