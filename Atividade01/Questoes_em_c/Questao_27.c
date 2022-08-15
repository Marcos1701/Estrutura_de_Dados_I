#include <stdio.h>

/* 27. O custo ao consumidor de um carro novo é a
soma do custo de fábrica com a percentagem do distribuidor e
dos impostos (aplicados ao custo de fábrica). Supondo que
a percentagem do distribuidor seja de 28% e os
impostos de 45%, escreva um programa que leia o custo de
fábrica de um carro e escreva o custo ao
consumidor.*/

main()
{

    float valor_distribuidor, valor_impostos,
        valor_montagem_carro, custo_total;

    printf("Digite o custo de fabrica do carro: \n=> R$ ");
    scanf("%f", &custo_total);

    valor_distribuidor = custo_total * 0.28;
    valor_impostos = custo_total * 0.45;
    valor_montagem_carro = custo_total - (custo_total * 0.73);

    printf("O custo resultante e: ");
    printf("\nValor recebido pelo distribuidor: R$ %.2f", valor_distribuidor);
    printf("\nImpostos : R$ %.2f", valor_impostos);
    printf("\nValor do carro em si: R$ %.2f", valor_montagem_carro);
}