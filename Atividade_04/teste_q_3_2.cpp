#include <iostream>
#include <string.h>
#include <ctype.h>
#include "pilha_int_vetor.h"
using namespace std;

int prio(char o)
{

    if (o == '(')
        return 0;
    else if (o == '-' || o == '+')
        return 1;
    else if (o == '*' || o == '/')
        return 2;
    return 0; // operador invalido!
}

char *posfixa_float(char *e)
{
    static char s[256];
    Pilha *P = pilha(250);
    int j = 0;

    for (int i = 0; e[i]; i++)
    {
        if (e[i] == '(')
            empilha('(', P);
        else if (isalnum(e[i]) || e[i] == '.')
            s[j++] = e[i];
        else if (strchr("+-*/", e[i]))
        {
            s[j++] = ' ';

            while ((prio(P->item[P->topo]) >= prio(e[i])) && P->topo > -1)
            {
                s[j++] = desempilha(P);
            }
            empilha(e[i], P);
        }
        else if (e[i] == ')')
        {
            while (P->item[P->topo] != '(' && P->topo > -1)
            {
                s[j++] = desempilha(P);
            }
            desempilha(P);
        }
    }

    while (P->topo > -1)
    {
        s[j++] = desempilha(P);
    }
    s[j] = '\0';
    // destroi(P);
    return s;
}

float valor_fl(char *e)
{
    Pilha *P = pilha(250);
    for (int i = 0; e[i]; i++)
        if (isdigit(e[i]))
        {
            empilha(atof(e + i), P);
            while (isdigit(e[i + 1]) || e[i + 1] == '.')
                i++;
        }
        else if (strchr("+-*/", e[i]))
        {
            float y = desempilha(P);
            float x = desempilha(P);
            switch (e[i])
            {
            case '+':
                empilha(x + y, P);
                break;
            case '-':
                empilha(x - y, P);
                break;
            case '*':
                empilha(x * y, P);
                break;
            case '/':
                empilha(x / y, P);
                break;
            }
        }
    float z = desempilha(P);
    // destroi(P);
    return z;
}

int main()
{

    char infixa[150];

    cout << "Digite a expressao infixa a seguir: " << endl
         << "=> ";
    cin >> infixa;

    // char *posfixa;
    // posfixa = posfixa_float(infixa);

    // float v = valor_fl(posfixa);
    //(posfixa, gerar_sufixa(infixa));

    cout << "\nInfixa digitada: " << infixa << endl;
    cout << "Sufixa resultante: " << posfixa_float(infixa) << endl;
    cout << "Valor resultante: " << valor_fl(posfixa_float(infixa)) << endl;

    return 0;
}
