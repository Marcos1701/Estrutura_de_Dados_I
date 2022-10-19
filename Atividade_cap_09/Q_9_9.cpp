#include "./lista.h"
#include <stdio.h>
#include <iostream>

using namespace std;

// (9.9) Na implementação dinâmica encadeada de pilha, os itens são mantidos numa lista (com um ponteiro P para seu início)
//  e as inserções e remoções são feitas no início dessa lista.Crie as funções empilha (x,&P) e desempilha (&P),
//  para pilhas dinâmicas encadea das, e faça um programa para testá-las.

void empilha(int item, Lista *l)
{
    No *aux = new No(item);

    if (l->inicio == NULL)
    {
        l->inicio = aux;
        l->fim = l->inicio;
    }
    else
    {
        aux->prox = l->inicio;
        l->inicio = aux;
    }
    return;
}

int desempilha(Lista *l)
{
    No *aux = l->inicio;
    int item = aux->item;

    if (aux = NULL)
    {
        printf("\nPilha Vazia!!");
        return '\0';
    }
    else
    {
        l->inicio = l->inicio->prox;
    }
    return item;
}

int main()
{
    Lista *pilha = new Lista();

    int op = 1;

    while (op == 1)
    {
        int valor;

        printf("Digite um numero para inserir na pilha: ");
        scanf("%d", &valor);
        empilha(valor, pilha);

        printf("\nDeseja inserir mais um? (1-sim, 0-nao): ");
        scanf("%d", &op);
    }

    printf("Pilha resultante: \n");
    pilha->mostra();

    printf("--- Desempilhando elementos ---\n");

    while (pilha->inicio != NULL)
    {
        int item = desempilha(pilha);
        if (item != '\0')
            printf("=> %d\n", item);
    }
}