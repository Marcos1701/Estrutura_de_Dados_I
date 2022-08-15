#include <stdio.h>

/*20. Leia um número inteiro de horas, calcule e escreva
quantas semanas, quantos dias e quantas horas ele
corresponde.*/

main()
{

    int horas, qtd_semanas, qtd_dias, qtd_horas, resto;

    printf("Digite a qtd de horas: \n=> ");
    scanf("%d", &horas);

    qtd_semanas = horas / 168;
    resto = horas % 168;

    qtd_dias = resto / 24;
    qtd_horas = resto % 24;

    printf("%d horas equivale a %d semanas, %d dias e %d horas", horas, qtd_semanas, qtd_dias, qtd_horas);
}