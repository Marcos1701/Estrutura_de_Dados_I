#include <stdio.h>
#include "./lstord.h"

void listainvertida(Lista *L)
{
    No *atual = L->inicio, *anterior = atual->prox, *proximo = NULL;
    atual->prox = NULL;
    L->fim = atual;

    while (anterior != NULL)
    {
        proximo = anterior->prox;
        anterior->prox = atual;
        atual = anterior;
        anterior = proximo;
    }
    L->inicio = atual;

    return;
}

int main(void)
{

    Lista *L = new Lista();
    L->ins(2);
    L->ins(5);
    L->ins(1);
    L->ins(4);
    L->ins(3);

    printf("Sequencia em ordem crescente: ");
    L->mostra();
    puts("");

    printf("Sequencia em ordem decrescente: ");
    listainvertida(L);
    L->mostra();
    puts("");
    return 0;
}