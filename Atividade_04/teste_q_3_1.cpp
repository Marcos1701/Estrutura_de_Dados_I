#include <iostream>
#include "pilha_int_vetor.h"
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
using namespace std;

char *gerar_sufixa(char *inf)
{
    char s[250];
    int k = 0;

    Pilha *p = pilha(strlen(inf));

    for (int i = 0; inf[i]; i++)
    {
        if (inf[i] == '(')
        {
            empilha(inf[i], p);
        }
        else if (isdigit(inf[i]))
        {
            cout << "valor emp: " << inf[i] << endl;
            s[k++] = inf[i];
        }
        else if (inf[i] == '*' || inf[i] == '+' || inf[i] == '/' || inf[i] == '-')
        {
            cout << "valor emp: " << inf[i] << endl;            
            empilha(inf[i], p);
        }
        else if (inf[i] == ')')
        {
            s[k++] = desempilha(p);
        }
        s[k++] = '\0';
        destroi(p);
        return s;
    }

    return "E";
}

int main()
{

    char infixa[150];

    cout << "Digite a expressao infixa a seguir: " << endl
         << "=> ";
    cin >> infixa;

    char *sufixa = gerar_sufixa(infixa);

    cout << "Infixa digitada: " << infixa << endl;

    if (sufixa == "E")
    {
        cout << "Erro!!" << endl;
        abort();
    }

    cout << "Sufixa resultante: " << sufixa << endl;

    return 0;
}