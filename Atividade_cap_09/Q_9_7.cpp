#include "./lista.h"
#include <stdio.h>
#include <iostream>

using namespace std;

// (9.7) Crie a função recursiva igual(A,B), que verifica se a lista A é
// igual à lista B. Por exemplo, se I aponta [1,2,3], J aponta [1,2,3] e K aponta [1,3,2],
//  as chamadas igual(I,J) e igual (I,K) devem devolver 1 e 0, respectivamente.

int igual(No *A, No *B)
{
    if (A == NULL && B == NULL)
    {
        return 1;
    }
    if (A->item == B->item)
    {
        return igual(A->prox, B->prox);
    }
    return 0;
}

// Outra maneira:
// int igual(Lista *A, Lista *B)
// {
//     No *aux = A->inicio, *aux2 = B->inicio;

//     if (aux == NULL && aux2 == NULL)
//     {
//         return 1;
//     }
//     if (aux->item == aux2->item)
//     {
//         Lista *a = new Lista();
//         Lista *b = new Lista();
//         a->inicio = aux->prox;
//         b->inicio = aux2->prox;
//         return igual(a, b);
//     }
//     return 0;
// }

void inserirElementosLista(Lista *l)
{

    int op = 1;
    while (op == 1)
    {
        int valor;

        printf("Digite um numero para inserir no fim da Lista: ");
        scanf("%d", &valor);
        l->addToFinal(valor);

        printf("Deseja inserir mais um? (1-sim, 0-nao): ");
        scanf("%d", &op);
    }
    return;
}

int main()
{
    Lista *A = new Lista();
    Lista *B = new Lista();
    printf("----- Lista A -----\n");
    inserirElementosLista(A);
    printf("----- Lista B -----\n");
    inserirElementosLista(B);

    printf("Lista A: \n");
    A->mostra();

    printf("Lista B: \n");
    B->mostra();

    if (igual(A->inicio, B->inicio))
    {
        printf("A e B sao iguais\n");
    }
    else
    {
        printf("A e B sao diferentes\n");
    }
}