#include "./lista.h"
#include <stdio.h>
#include <iostream>

using namespace std;

// (9.2) Crie a função iterativa ocorrencias (x, L), que informa quantas vezes o item X
// ocorre na lista L. Por exemplo, para L apontando a lista [1,2,1,4,1], a chamada ocorrencias
// (1,L) deve devolver 3 como resposta.

int iterativa(int x, Lista *l)
{
    No *aux = l->inicio;
    int repete = 0;

    while (aux != NULL)
    {
        if (aux->item == x)
        {
            repete++;
        }

        aux = aux->prox;
    }
    return repete;
}

int main()
{
    Lista *l = new Lista();
    int op = 1;

    while (op != 0)
    {
        int valor;
        printf("Digite um numero para inserir no fim da Lista: ");
        scanf("%d", &valor);
        l->addToFinal(valor);

        printf("Deseja inserir mais um? (1-sim, 0-nao): ");
        scanf("%d", &op);
    }

    printf("Lista inserida: \n");
    l->mostra();

    printf("Certo..., Agora digite um valor para saber quantas vezes ele se repete\n=> ");
    scanf("%d", &op);
    printf("\nO numero: %d, repete %d vezes na lista\n", op, iterativa(op, l));
}
