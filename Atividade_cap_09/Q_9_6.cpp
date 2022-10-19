#include "./lista.h"
#include <stdio.h>
#include <iostream>

using namespace std;

// (9.6) Crie a função recursiva substitui (x, y, L), que substitui toda ocorrência do item x pelo item y na lista L. Por exemplo, se L
// aponta a lista [b,o,b, o], após a chamada substitui ('o', 'a', L),L deverá apontar a lista [b, a,b,a].

void substitui(int x, int y, No *inicio)
{
    if (inicio != NULL)
    {
        if (inicio->item == x)
            inicio->item = y;
        substitui(x, y, inicio->prox);
    }
    return;
}

// outra forma
//  void substitui(int x, int y, Lista *l)
//  {
//      No *aux = l->inicio;
//      if (aux != NULL)
//      {
//          if (aux->item == x)
//              aux->item = y;

//         Lista *aux2 = new Lista();
//         aux2->inicio = aux->prox;
//         substitui(x, y, aux2);
//     }
//     return;
// }

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

    int x, y;
    printf("Digite o valor a ser substituido: \n=> ");
    scanf("%d", &x);

    printf("Digite o valor que ira substitui-lo: \n=>");
    scanf("%d", &y);

    // substitui(x, y, lista);
    substitui(x, y, lista->inicio);

    printf("Lista resultante: \n");
    lista->mostra();
}