#include <stdio.h>
#include "./lstord.h"
#include <iostream>
using namespace std;

void adt(float c, int e, Poli *P)
{

    if (*P == NULL || (*P)->expo < e)
    {
        *P = termo(c, e, *P);
    }
    else if ((*P)->expo == e)
    {
        (*P)->coef += c;
        if ((*P)->coef == 0)
        {
            Poli aux = *P;
            *P = aux->prox;
            free(aux);
        }
    }
    else
        adt(c, e, &(*P)->prox);
}

Poli soma(Poli P, Poli Q)
{
    Poli retorno = NULL;
    Poli aux = P;

    while (aux)
    {
        retorno = termo(aux->coef, aux->expo, retorno);
        aux = aux->prox;
    }
    aux = Q;
    while (aux)
    {
        adt(aux->coef, aux->expo, &retorno);
        aux = aux->prox;
    }
    return retorno;
}

int main()
{

    Poli p = NULL;
    Poli q = NULL;
    adt(+1, 0, &p);
    adt(-6, 2, &p);
    adt(+3, 5, &p);

    adt(+1, 0, &q);
    adt(-6, 2, &q);
    adt(+3, 5, &q);
    cout << "----- Poli P -----" << endl;
    exibeop(p);
    puts("\n");
    cout << "----- Poli Q -----" << endl;

    exibeop(q);
    puts("\n");

    cout << "----- Soma P e Q -----" << endl;

    exibeop(soma(p, q));
    puts("\n");
    // exibeop(p);
}
