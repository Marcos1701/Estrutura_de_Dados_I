#include <iostream>
#include <stdbool.h>
#include "pilha_int_vetor.h"
using namespace std;

int complemento_valor(int valor)
{
    switch (valor)
    {
    case ')':
        return '(';
        break;
    case ']':
        return '[';
        break;
    case '}':
        return '{';
        break;
    case '(':
        return ')';
        break;
    case '[':
        return ']';
        break;
    case '{':
        return '}';
        break;
    case '.':
        return 0;
    default:
        printf("Algum valor invalido foi inserido");
    }
}

bool conferir_expressao(Pilha *p)
{

    int x, y, z;
    bool valor_cont = false;

    for (int k = p->topo; k >= 0; k--)
    {
        y = p->topo;

        if (p->topo % 2 != 0)
        {
            return false;
        }

        y = p->item[k];
        for (x = k; x >= 0; x++)
        {
            z = complemento_valor(y);
            if (p->item[x] == z || y == '.')
            {
                p->item[x] = '.';
                valor_cont = true;
                break;
            }
        }
        if (!valor_cont)
            return false;
        abort();
    }
    return true;
}

main()
{

    int x;
    //  cout << "Digite a qtd de caracteres que a expressao possui: ";
    // cin >> x;

    string expressao;
    cout << "Digite a expressao a seguir (*sem espacos):\n=> ";
    cin >> expressao;
    x = expressao.length();
    Pilha *p = pilha(x);

    for (int i = 0; i < x; i++)
        empilha(expressao[i], p);

    if (conferir_expressao(p))
        cout << "Expressao balanceada";
    else
        cout << "Expressao nao balanceada";
}