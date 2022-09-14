#include <iostream>
#include "pilha_int_com_no.h"
using namespace std;

void organizar_pilha(Pilha *A, Pilha *B)
{
    int x = A->tamanho;
    No *aux = A->topo;
    int valor;

    while (x != 0)
    {
        if (aux->valor < aux->prox->valor)
        {
            valor = aux->prox->valor;
            empilha(valor, B);
            valor = aux->valor;
            desempilha(A);
            desempilha(A);
            empilha(valor, A);
            empilha(B->topo->valor, A);
           //desempilha(B);
           //desempilha(B);
        }
        aux = aux->prox;
        x--;
    }

    imprimir_com_quebra_de_linha(A);
}

main()
{
    Pilha *A = pilha();
    Pilha *B = pilha();

    int x;

    cout << "Digite a qtd de valores que seram inseridos em A: ";
    cin >> x;

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
