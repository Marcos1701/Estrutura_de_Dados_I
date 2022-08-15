#include <stdio.h>

/* 29. Um programa para gerenciar os saques de um
caixa eletrônico deve possuir algum mecanismo para decidir o
numero de notas de cada valor que deve ser
disponibilizado para o cliente que realizou o saque. Um possível
critério seria o da "distribuição ótima" no
sentido de que as notas de menor valor disponíveis fossem
distribuídas em número mínimo possível.
Por exemplo, se a maquina só dispõe de notas de R$ 50, de R$ 20,
de R$ 10, de R$ 5 e de R$ 2, para uma quantia
solicitada de R$ 87, o programa deveria indicar uma nota de
R$ 50, uma nota de R$20,00, uma nota de R$ 10,
uma nota de R$ 5 e uma nota de R$ 2. Escreva um programa
que receba o valor da quantia solicitada e retorne
a distribuição das notas de acordo com o critério da
distribuição ótima.*/

main()
{
    int qtd_100, qtd_50, qtd_20, qtd_10, qtd_5, qtd_2, valor, resto;

    printf("Digite o valor a seguir: \n=> R$ ");
    scanf("%d", &valor);

    qtd_100 = valor / 100;
    resto = valor % 100;

    qtd_50 = resto / 50;
    resto = resto % 50;

    qtd_20 = resto / 20;
    resto = resto % 20;

    qtd_10 = resto / 10;
    resto = resto % 10;

    qtd_5 = resto / 5;
    resto = resto % 5;

    qtd_2 = resto / 2;

    printf("Retorno igual a: \nNotas de 100: %d", qtd_100);
    printf("\nNotas de 50: %d\nNotas de 20: %d", qtd_50, qtd_20);
    printf("\nNotas de 10: %d\nNotas de 5: %d", qtd_10, qtd_5);
    printf("\nNotas de 2: %d", qtd_2);
}