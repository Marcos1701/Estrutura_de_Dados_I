#include <iostream>
#include "pilha_int_vetor.h"
#include <stdbool.h>
using namespace std;

void organizar_pilha(Pilha *C, Pilha *D)
{
    // int aux;
    bool valor_cont;

    for (int i = 0; i < C->topo; i++)
    {
        valor_cont = false;

        if (C->item[i] < C->item[i + 1])
        {
            // aux = A->item[i];
            empilha(C->item[i], D);
            C->item[i] = C->item[i + 1];
            C->item[i + 1] = desempilha_com_retorno(D);
        }

        if (!valor_cont)
        {
            break;
        }
    }

    imprimir_com_quebra_de_linha(C);
}

main()
{

    int x;

    cout << "Digite a qtd de valores que seram inseridos em A: ";
    cin >> x;
    Pilha *A = pilha(x);
    Pilha *B = pilha(x);

    while (x != 0)
    {
        int z;
        cout << "Digite um valor a seguir\n=> ";
        cin >> z;
        empilha(z, A);
        x--;
    }

    organizar_pilha(A, B);
}
