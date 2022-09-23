#include <iostream>
#include "pilha_int_vetor.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
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

int valor(char *Values)
{
    Pilha *p = pilha(strlen(Values));
    char v;
    for (int i = 0; Values[i]; i++)
    {
        v = Values[i];
        if (isalnum(v))
        {
            empilha(v - '0', p);
        }
        else
        {
            int x = desempilha(p);
            int y = desempilha(p);

            if (v == '+')
            {
                empilha(x + y, p);
            }
            else if (v == '-')
            {
                empilha(x - y, p);
            }
            else if (v == '*')
            {
                empilha(x * y, p);
            }
            else if (v == '/')
            {
                empilha(x / y, p);
            }
        }
    }
    static int z = desempilha(p);
    destroi(p);
    cout << "\nres : " << z << endl;
    return z;
}

char *gerar_sufixa(char *inf)
{
    static char s[250];
    char *x;
    int k = 0;
    x = inf;

    Pilha *p = pilha(strlen(inf));

    for (int i = 0; *x != '\0'; i++)
    {
        if (isalnum(*x))
        {
            cout << "valor emp: " << *x << endl;
            s[k++] = *x;
        }
        else if (*x == '(')
        {
            empilha(*x, p);
        }
        else if (*x == ')')
        {
            while (p->item[p->topo] != '(')
            {
                s[k++] = desempilha(p);
            }
            desempilha(p);
        }
        else
        {
            while (prio(p->item[p->topo]) >= prio(*x))
            {
                s[k++] = desempilha(p);
            }
            empilha(*x, p);
            cout << "valor emp: " << *x << endl;
        }
        x++;
    }
    while (p->topo != -1)
    {
        s[k++] = desempilha(p);
    }
    s[k++] = '\0';
    cout << "s: " << s << endl;
    destroi(p);
    return s;
}

int main()
{

    char infixa[150];

    cout << "Digite a expressao infixa a seguir: " << endl
         << "=> ";
    cin >> infixa;

    char *sufixa;
    sufixa = gerar_sufixa(infixa);

    int v = valor(sufixa);
    //(sufixa, gerar_sufixa(infixa));

    cout << "\nInfixa digitada: " << infixa << endl;
    cout << "Sufixa resultante: " << sufixa << endl;
    cout << "Valor resultante: " << v << endl;

    return 0;
}
