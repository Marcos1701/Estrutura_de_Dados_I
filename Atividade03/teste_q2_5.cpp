#include "pilha_caracter_vetor.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int conferir_expressao(char x[])
{

    int k = strlen(x);
    Pilha *aux = pilha(k);

    for (int i = 0; i <= k; i++)
    {
        char z = x[i];

        if (z != ' ' && z != '\0')
        {
            if (x[i] == '(' || x[i] == '[' || x[i] == '{')
            {
                empilhar(x[i], aux);
                cout << "v : " << x[i] << endl;
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
                cout << "v2 : " << x[i] << endl;
            }
        }
        else
            continue;
        // k++;
    }
    return 1;
}

int main()
{

    char expressao[50];
    cout << "Digite a expressao a seguir (*sem espacos):\n=> ";
    cin >> expressao;

    cout << "=> " << expressao;
    if (conferir_expressao(expressao))
        cout << "Expressao balanceada\n";
    else
        cout << "Expressao nao balanceada\n";

    return 0;
}
