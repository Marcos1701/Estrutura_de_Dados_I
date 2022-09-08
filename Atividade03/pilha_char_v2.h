#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No
{
    char valor[50];
    struct No *prox;
} No;

typedef struct pilha
{
    int tamanho;
    No *topo;
} Pilha;

Pilha *pilha()
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->topo = NULL;
    p->tamanho = 0;
    return p;
}

void empilha(char *valor, Pilha *p)
{

    No *no = (No *)malloc(sizeof(No));
    strcpy(no->valor, valor);

    if (p->topo == NULL)
    {
        p->topo = no;
        p->tamanho++;
    }
    else
    {
        no->prox = p->topo;
        p->topo = no;
        p->tamanho++;
    }

    printf("\nO valor: %s foi empilhado\n\n", valor);
}

void desempilha(Pilha *p)
{
    No *n = p->topo;

    char valor[50];
    strcpy(valor, n->valor);

    if (p->topo == NULL)
    {
        printf("\nA pilha esta vazia\n\n");
    }
    else
    {
        p->topo = n->prox;
        p->tamanho--;
        free(n);
        printf("\nO valor: %s foi desempilhado\n", valor);
        printf("Tamanho atual da pilha: %d\n\n", p->tamanho);
    }
}

void imprimir(No *no)
{
    No *n = no;

    if (no->valor != NULL)
    {
        while (n->valor != NULL)
        {
            printf("=> %s\n", n->valor);
            n = n->prox;
        }
    }
    else
    {
        printf("\nA pilha esta vazia\n\n");
    }
}

void destroi(Pilha *p)
{
    // free((p)->topo);
    free(p);
    p = NULL;

    if (p == NULL)
    {
        printf("\nA pilha foi destruida com sucesso..\n\n");
    }
    else
    {
        printf("\nErro, pilha nao foi destruida!!\n\n");
    }
}
