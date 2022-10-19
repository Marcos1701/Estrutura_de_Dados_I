#include "./lista.h"
#include <stdio.h>
#include <iostream>

using namespace std;

// (9.5) Crie a função recursiva soma (L), que devolve a soma dos itens da lista L.
//  Por exemplo, para L, apontando a lista [3,1,5,4], a função deve devolver 13.

int soma_valores_lista(Lista *l)
{
    if (l->inicio == NULL)
        return 0;
    Lista *aux = new Lista();
    aux->inicio = l->inicio->prox;
    return l->inicio->item + soma_valores_lista(aux);
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

    printf("\nSoma: %d", soma_valores_lista(lista));
}
