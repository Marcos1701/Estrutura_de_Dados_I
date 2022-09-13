#include <iostream>
#include <stdbool.h>
#include "pilha_int_vetor.h"
using namespace std;

bool conferir_caractere(int x,int y)
{
    switch (x)
    {
    case ')':
      
        if(y == '(')
          return true;
        else
          return false;
        break;
    case ']':
        if(y == '[')
          return true;
        else
          return false;
        break;
    case '}':
        if(y == '{')
          return true;
        else
          return false;
        break;
    case '.':
        return true;
    default:
        printf("Algum valor invalido foi inserido");
    }
}

bool conferir_expressao(string x)
{

    int y, z, k;
    bool valor_cont = false;
    Pilha *aux = pilha(x.length());

    for ((k = x.length() - 1); k >= 0; k--)
    {

        if (x.length() % 2 != 0)
        {
            return false;
        }

        if(x[k] == ')' || x[k] == ']' || x[k] == '}'){
             empilha(x[k], aux);
        }else{
            z = desempilha_com_retorno(aux);
            valor_cont = conferir_caractere(x[k], z);
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
    //x = expressao.length();

    if (conferir_expressao(expressao))
        cout << "Expressao balanceada";
    else
        cout << "Expressao nao balanceada";
}
