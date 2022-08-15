#include <stdio.h>

/* 24. Leia a idade de uma pessoa expressa
em anos, meses e dias e escreva-a expressa apenas em dias.*/

main()
{
    int qtd_anos, qtd_meses, qtd_dias, dias;

    printf("Digite a qtd de anos: \n=>");
    scanf("%d", &qtd_anos);

    printf("Certo, Agora insira a qtd de meses: \n=>");
    scanf("%d", &qtd_meses);

    printf("Ok, Agora insira a qtd de dias a seguir: \n=>");
    scanf("%d", &qtd_dias);

    dias = (qtd_anos * 365) + (qtd_meses * 30) + qtd_dias;

    printf("Pronto, voce possui aproximadamente %d dias de vida, parabens...", dias);
}