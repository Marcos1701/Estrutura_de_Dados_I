#include <iostream>
#include <stdbool.h>
#include "pilha_char.h"
using namespace std;

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
}

bool conferir_expressao(string x, int tam)
{

    char y, z;
    int k = tam;
    bool valor_cont = false;
    Pilha *aux = pilha();

    while (k >= 0)
    {

        if (tam % 2 != 0)
        {
            return false;
        }

        if (x[k] == '(' || x[k] == '[' || x[k] == '{')
        {
            empilhar(&x[k], aux);
        }
        else if (x[k] == ')' || x[k] == ']' || x[k] == '}')
        {
            z = desempilha_com_retorno(aux);
            valor_cont = conferir_caractere(x[k], z);
        }

        if (!valor_cont)
            return false;
        break;
        k--;
    }
    return true;
}

main()
{

    //  cout << "Digite a qtd de caracteres que a expressao possui: ";
    // cin >> x;

    string expressao;
    cout << "Digite a expressao a seguir :\n=> ";
    cin >> expressao;
    int tam = expressao.length();

    if (conferir_expressao(expressao, tam))
        cout << "Expressao balanceada\n";
    else
        cout << "Expressao nao balanceada\n";
}
