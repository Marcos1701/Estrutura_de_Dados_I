#include "pilha_caracter.h"
#include <stdio.h>
#include <string.h>

int conferir_expressao(char x[])
{

    int k = strlen(x);
    Pilha *aux = pilha();

    for (int i = 0; i <= k; i++)
    {
        char z = x[i];

        if (x[i] == '(' || x[i] == '[' || x[i] == '{')
        {
            empilhar(x[i], aux);
            printf("v : %c\n", x[i]);
        }
        else if (x[i] == ')' || x[i] == ']' || x[i] == '{')
        {
            if (vaziap(aux))
            {
                destroi(aux);
                return 0;
            }
            z = desempilha_com_retorno(aux);

            if ((x[i] == ')' && z != '(') || (x[i] == ']' && z != '[') || (x[i] == '{' && z != '}'))
            {
                return 0;
            }
            printf("v2 : %c\n", x[i]);
        }
        // k++;
    }
    return 1;
}

int main()
{

    char expressao[50];
    printf("Digite a expressao a seguir :\n=> ");
    scanf("%s", expressao);

    if (conferir_expressao(expressao))
        printf("Expressao balanceada\n");
    else
        printf("Expressao nao balanceada\n");

    return 0;
}
