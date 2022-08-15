#include <stdio.h>

/* 30. Uma loja vende seus produtos no sistema entrada mais duas
prestações, sendo a entrada maior ou igual a cada
uma das duas prestações; estas devem ser iguais, inteiras
e as maiores possíveis. Por exemplo, se o valor da
mercadoria for R$ 270,00, a entrada e as duas
prestações são iguais a R$ 90,00; se o valor da mercadoria for
R$ 302,00, a entrada é de R$ 102,00 e as duas prestações
são iguais a R$ 100,00. Escreva um programa que
receba o valor da mercadoria e escreva o valor da
entrada e das duas prestações, conforme as regras acima.*/

main()
{
    int valor_prestacoes, valor_produto;

    printf("Digite o valor do produto: \n=> R$ ");
    scanf("%d", &valor_produto);

    valor_prestacoes = valor_produto / 3;

    printf("O valor da entrada e igual a R$ %d", valor_prestacoes);
    printf("\nValor das parcelas: R$ %d", valor_prestacoes);
}