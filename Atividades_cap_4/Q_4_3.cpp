// palindroma.c - verifica se uma cadeia e palindroma
#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include "pilha.h" // pilha de char
#include "fila.h"  // fila de char

using namespace std;

int main(void)
{
    char s[250];
    Fila *F = new Fila();
    Pilha *P = new Pilha();
    cout << "\nFrase ? ";
    gets(s);
    for (int i = 0; s[i]; i++)
    {
        if (isalpha(s[i]))
        {
            F->push(toupper(s[i]));
            P->push(toupper(s[i]));
        }
    }

    while (!F->isEmpty() && F->pop() == P->pop())
        ;

    if (F->isEmpty())
        cout << " A frase e palindroma " << endl;
    else
        cout << " A frase nao e palindroma " << endl;
    return 0;
}
