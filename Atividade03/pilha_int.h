#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int valor;
    struct No *prox;
} No;

typedef struct pilha
{
    int tamanho = 0;
    No *topo;
} Pilha;

Pilha *pilha()
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->topo = NULL;
    return p;
}

void empilha(int valor, Pilha *p)
{

    No *no = (No *)malloc(sizeof(No));
    no->valor = valor;

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

    printf("\nO valor: %d foi empilhado\n\n", valor);
}

void desempilha(Pilha *p)
{
    No *n = p->topo;
    int valor = n->valor;

    if (p->topo == NULL)
    {
        printf("\nA pilha esta vazia\n\n");
    }
    else
    {
        p->topo = n->prox;
        p->tamanho--;
        free(n);
        printf("\nO valor: %d foi desempilhado\n", valor);
        printf("Tamanho atual da pilha: %d\n\n", p->tamanho);
    }
}

void imprimir_com_quebra_de_linha(Pilha *p)
{
    No *n = p->topo;

    if (p->topo->valor != NULL)
    {
        while (n->valor != NULL)
        {
            printf("=> %d\n", n->valor);
            n = n->prox;
        }
    }
}

void imprimir_sem_quebra_de_linha(No *no)
{
    No *n = no;

    if (no->valor != NULL)
    {
        printf("=> ");
        while (n->valor != NULL)
        {
            printf("%d", n->valor);
            n = n->prox;
        }
    }
}

void destroi(Pilha *p)
{
    free((p)->topo);
    free(p);
    p = NULL;
}
