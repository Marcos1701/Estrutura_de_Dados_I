#include <stdio.h>

/*7. Leia um valor em real (R$), calcule e
escreva 70% deste valor.*/

main()
{
    int valor, valor_retorno;

    printf("Digite o valor a seguir: \nR$ ");
    scanf("%d", &valor);

    valor_retorno = valor * 0.75;
    printf("valor resultante : R$ %d", valor_retorno);
}
