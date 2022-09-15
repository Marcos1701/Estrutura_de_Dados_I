#include <iostream>
#include "pilha_int_vetor.h"
#include <stdbool.h>
using namespace std;

void organizar_pilha(Pilha *C, Pilha *D)
{
    // bool valor_cont;
    int k = C->topo, aux;
    cout << "k: " << k << endl;

    for (int i = k; i > 0; i--)
    {
        // aux = C->item[i];
        // cout << "aux: " << aux << endl;
        for (int j = i - 1; j >= 0; j--)
        {
            aux = desempilha_com_retorno(C);
            if (aux < C->item[C->topo])
            {
                empilha(aux, D);
                empilha(desempilha_com_retorno(C), D);
                empilha(desempilha_com_retorno(D), C);
                empilha(desempilha_com_retorno(D), C);
            }
            else
            {
                empilha(desempilha_com_retorno(C), D);
            }
            // aux = C->item[j];
        }
    }
    // {
    //     // valor_cont = false;

    //     for (int j = i + 1; j <= k; j++)
    //     {

    //         if (C->item[i] < C->item[j])
    //         {
    //             // aux = A->item[i];
    //             empilha(desempilha_com_retorno(C), D);
    //             empilha(desempilha_com_retorno(C), D);
    //             // empilha(C->item[j], D);
    //             empilha(desempilha_com_retorno(D), C);
    //             empilha(desempilha_com_retorno(D), C);
    //             // aux = desempilha_com_retorno(C);
    //             // C->item[i - 1] = C->item[i];
    //             // C->item[i] = desempilha_com_retorno(D);
    //             cout << "conferindo: " << C->item[j] << endl;
    //             cout << "conferindo: " << C->item[i] << endl;
    //             // valor_cont = true;
    //         }
    //     }

    // if (!valor_cont)
    //{
    //     break;
    // }
    // k--;
    //}

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
