#include <stdio.h>

/* 24. Leia a idade de uma pessoa expressa
em anos, meses e dias e escreva-a expressa apenas em dias.*/

main()
{
    int qtd_anos, qtd_meses, qtd_dias, dias, resto;

    printf("Digite a qtd de dias: \n=>");
    scanf("%d", &dias);

    qtd_anos = dias / 365;
    resto = dias % 365;

    qtd_meses = resto / 30;
    resto = resto % 30;

    qtd_dias = resto;

    printf("Certo, voce possui aproximadamente %d anos, %d meses e %d dias de vida", qtd_anos, qtd_meses, qtd_dias);
}