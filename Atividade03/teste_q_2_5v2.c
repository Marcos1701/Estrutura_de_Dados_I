//#include <iostream>
#include <stdbool.h>
#include "pilha_caracter.h"
// using namespace std;

bool conferir_caractere(char x, char y)
{
    switch (x)
    {
    case ')':

        if (y == '(')
            return true;
        else
            return false;
        break;
    case ']':
        if (y == '[')
            return true;
        else
            return false;
        break;
    case '}':
        if (y == '{')
            return true;
        else
            return false;
        break;
    }
    return false;
}

bool conferir_expressao(char *x)
{

    char z;
    int k = 0;
    bool valor_cont = false;
    Pilha *aux = pilha();

    while (x[k] != '\0')
    {

        // if (tam % 2 != 0)
        // {
        //     return false;
        // }

        if (x[k] == '(' || x[k] == '[' || x[k] == '{')
        {
            empilhar(x[k], aux);
            printf("v : %c\n", x[k]);
        }
        else if (x[k] == ')' || x[k] == ']' || x[k] == '{')
        {
            z = desempilha_com_retorno(aux);
            valor_cont = conferir_caractere(x[k], z);
            printf("v2 : %c\n", x[k]);
        }
        else
        {
            valor_cont = true;
        }

        if (!valor_cont)
            return false;
        break;
        k++;
    }
    return true;
}

main()
{

    //  cout << "Digite a qtd de caracteres que a expressao possui: ";
    // cin >> x;

    char expressao[50];
    printf("Digite a expressao a seguir :\n=> ");
    scanf("%s", expressao);
    // getline(cin, expressao);
    //  int tam = expressao.length();

    // cout << "Tamanho: " << tam << endl
    //      << "exp :" << expressao << endl;
    if (conferir_expressao(expressao))
        printf("Expressao balanceada\n");
    else
        printf("Expressao nao balanceada\n");
}
