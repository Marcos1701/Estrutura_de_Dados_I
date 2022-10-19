#include "./lista.h"
#include <stdio.h>
#include <iostream>

using namespace std;

// (9.4) Crie a função iterativa inversa (I), que devolve a lista inversa de L. Por exemplo,
// para F apontando a lista [7,9,2], a função deve devolver [2,9,7].

Lista *inverteLista(Lista *l)
{
    Lista *listaInvertida = new Lista();
    No *aux = l->inicio;

    while (aux != NULL)
    {
        listaInvertida->addToInicio(aux->item);
        aux = aux->prox;
    }

    return listaInvertida;
}

int main()
{
    Lista *lista = new Lista();

    int op = 1;

    while (op == 1)
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

    Lista *listaInvertida = inverteLista(lista);
    printf("\nLista Invertida: \n");
    listaInvertida->mostra();
}