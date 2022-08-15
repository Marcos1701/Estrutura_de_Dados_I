#include <stdio.h>

/* 28. Sabendo que latão é constituído de 70% de cobre e
30% de zinco, escreva um programa que calcule a
quantidade de cada um desses componentes para se
obter certa quantidade de latão (em kg), informada pelo
usuário.*/

main()
{

    float qtd_latao, qtd_zinco, qtd_cobre;

    printf("Digite a quantidade de latao desejada (em kg): \n=> ");
    scanf("%f", &qtd_latao);

    qtd_cobre = qtd_latao * 0.70;
    qtd_zinco = qtd_latao * 0.30;

    printf("Seriam necessarios %.2f kg de cobre e %.2f kg de zinco", qtd_cobre, qtd_zinco);
}