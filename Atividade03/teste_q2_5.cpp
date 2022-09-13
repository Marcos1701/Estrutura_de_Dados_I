#include <iostream>
#include <stdbool.h>
#include "pilha_int_vetor.h"
using namespace std;

bool conferir_caractere(int x,int y)
{
    switch (x)
    {
    case '(':
      
        if(y == ')')
          return true;
        else
          return false;
        break;
    case '[':
        if(y == ']')
          return true;
        else
          return false;
        break;
    case '{':
        if(y == '}')
          return true;
        else
          return false;
        break;
    }
}

bool conferir_expressao(string x)
{

    int y, z;
    int k = x.length();
    bool valor_cont = false;
    Pilha *aux = pilha(x.length());

    while(k >= 0)
    {

        if (x.length() % 2 != 0)
        {
            return false;
        }

        if(x[k] == '(' || x[k] == '[' || x[k] == '{'){
             empilha(x[k], aux);
        }else if(x[k] == ')' || x[k] == ']' || x[k] == '}'){
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

    int x;
    //  cout << "Digite a qtd de caracteres que a expressao possui: ";
    // cin >> x;

    string expressao;
    cout << "Digite a expressao a seguir (*sem espacos):\n=> ";
    cin >> expressao;
    //x = expressao.length();

    if (conferir_expressao(expressao))
        cout << "Expressao balanceada\n";
    else
        cout << "Expressao nao balanceada\n";
}
