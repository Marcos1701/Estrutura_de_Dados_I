#include <iostream>
#include "pilha_int_vetor.h"
#include <string.h>
//#include <stdbool.h>
#include <ctype.h>
using namespace std;

int prio(char o)
{

    if (o == '~')
        return 1;
    else if (o == '&')
        return 2;
    else if (o == '|')
        return 3;
    return 0; // operador invalido!
}

int valor(char *valores)
{
    Pilha *p = pilha(strlen(valores));
    char v;
    for (int i = 0; valores[i]; i++)
    {
        v = valores[i];
        if (isdigit(valores[i]))
        {
            empilha(valores[i] - '0', p);
        }
        else
        {
            int x = desempilha(p) == 'V' ? 1 : 0;
            int y = desempilha(p) == 'V' ? 1 : 0;

            if (v == '~')
            {
                if (x)
                {
                    empilha(y, p);
                    empilha('F', p);
                }
                else
                {
                    empilha(y, p);
                    empilha('V', p);
                }
                break;
            }
            else if (v == '&')
            {
                if ((x) && (y) || (!x) && (!y))
                    empilha('V', p);
                else
                    empilha('F', p);
                break;
            }
            else if (v == '|')
            {
                if ((x) || (y))
                {
                    empilha('V', p);
                }
                else
                    empilha('F', p);
                break;
            }
        }
    }
    int z = desempilha(p) == 'V' ? 1 : 0;
    destroi(p);

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
    while (p->topo > -1)
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
    //(sufixa, gerar_sufixa(infixa));

    cout << "\nInfixa digitada: " << infixa << endl;
    cout << "Sufixa resultante: " << sufixa << endl;
    if (valor(sufixa))
        cout << "\nValor resultante: V" << endl;
    else
        cout << "\nValor resultante: F" << endl;

    return 0;
}
