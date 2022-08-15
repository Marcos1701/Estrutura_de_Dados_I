#include <stdio.h>

/* 21. Leia um número inteiro de meses, calcule e
escreva quantos anos e quantos meses ele corresponde.*/

main()
{

    int meses;

    printf("Digite a qtd de meses: \n=> ");
    scanf("%d", &meses);

    int qtd_anos = meses / 12;
    int qtd_meses = meses % 12;

    printf("%d meses equivale a %d anos e %d meses", meses, qtd_anos, qtd_meses);
}