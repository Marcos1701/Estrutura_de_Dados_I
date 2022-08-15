#include <stdio.h>

/*22. Leia um número inteiro de minutos, calcule e
escreva quantos dias, quantas horas e quantos minutos ele
corresponde.*/

main()
{

    int minutos, qtd_dias, qtd_horas, qtd_minutos, resto;

    printf("Digite a qtd de minutos: \n=> ");
    scanf("%d", &minutos);

    qtd_dias = minutos / 1440;
    resto = minutos % 1440;

    qtd_horas = resto / 60;
    qtd_minutos = resto % 60;

    printf("%d minutos equivale a %d dias, %d horas e %d minutos", minutos, qtd_dias, qtd_horas, qtd_minutos);
}