#include <stdio.h>

/* 26. Calcule a quantidade de dinheiro gasta por um fumante.
 Dados de entrada: o número de anos que ele fuma, o
no de cigarros fumados por dia e
o preço de uma carteira (1 carteira tem 20 cigarros).*/

main()
{

    int anos, qtd_cigarros_p_dia, preco_cartela;

    printf("A quantos anos voce fuma? \n=>");
    scanf("%d", &anos);

    printf("Quantos cigarros voce fuma por dia? \n=>");
    scanf("%d", &qtd_cigarros_p_dia);

    printf("Digite o preco da carteira de cigarros que voce fuma: \n=>");
    scanf("%d", &preco_cartela);

    float preco_cigarro_ind = preco_cartela / 20;
    float valor_total = (qtd_cigarros_p_dia * preco_cigarro_ind) * 365;
    valor_total = valor_total * anos;

    printf("Eita, voce ja gastou aproximadamente R$ %2.f em cigarros", valor_total);
}