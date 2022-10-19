#include "./lista.h"
#include <stdio.h>
#include <iostream>

using namespace std;

// (9.3) Crie a função iterativa ultimo (L), que devolve o último item da lista
//  L. Por exemplo, para L, apontando a lista [a,b, c],a função deve devolver o item C.

int ultimo_valor(Lista *l)
{
    // return l->fim->item ou

    No *aux = l->inicio;

    while (aux->prox != NULL)
        aux = aux->prox;

    return aux->item;
}

int main()
{
    Lista *lista = new Lista();

    int op = 1;

    while (op != 0)
    {
        int valor;

        printf("Digite um numero para inserir no fim da Lista: ");
        scanf("%d", &valor);
        lista->addToFinal(valor);

        printf("Deseja inserir mais um? (1-sim, 0-nao): ");
        scanf("%d", &op);
    }

    printf("Lista inserida: \n");
    lista->mostra();

    printf("\nO ultimo elemento da lista e %d", ultimo_valor(lista));
}