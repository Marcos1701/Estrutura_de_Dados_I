#include <iostream>
#include "pilha_int_vetor.h"
#include <stdbool.h>
using namespace std;

void organizar_pilha(int valor, Pilha *C, Pilha *D)
{
    int k = C->tamanho - 1, aux, x = 0;
    cout << "k: " << k << endl;
    if (k == -1)
    {
        empilha(valor, C);
        return;
    }

    for (int i = k; i >= 0; i--)
    {
        aux = desempilha_com_retorno(C);
        while (aux < valor)
        {
            empilha(aux, D);
            if (C->topo != -1)
                aux = desempilha_com_retorno(C);
            else
                break;
            x = 1;
        }

        if (x)
        {
            empilha(valor, C);
            while (D->topo > -1)
            {
                empilha(desempilha_com_retorno(D), C);
            }
        }
        else
        {
            empilha(aux, C);
            empilha(valor, C);

            return;
        }
    }
    return;
}

main()
{

    int x;

    cout << "Digite a qtd de valores que seram inseridos em A: ";
    cin >> x;
    cout << "tamanho : " << x << endl;
    Pilha *A = pilha(x);
    Pilha *B = pilha(x);

    while (x != 0)
    {
        int z;
        cout << "Digite um valor a seguir\n=> ";
        cin >> z;
        organizar_pilha(z, A, B);
        cout << "tam: " << A->tamanho << endl;
        x--;
    }

    imprimir_com_quebra_de_linha(A);
}
