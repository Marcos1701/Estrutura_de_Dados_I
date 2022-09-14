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

void empilhar(char *valor, Pilha *p)
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

void desempilha_sem_retorno(Pilha *p)
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

char desempilha_com_retorno(Pilha *p, int solicita_msg = 0)
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
        if (solicita_msg == 0)
        {
            printf("\nO valor: %s foi desempilhado\n", valor);
        }
        return *valor;
        free(n);
        // printf("Tamanho atual da pilha: %d\n\n", p->tamanho);
    }

    // return valor[50];
}

void desempilha_e_imprime_sem_quebra_de_linha(Pilha *p)
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
        printf("%s\n", valor);
        free(n);
        // printf("Tamanho atual da pilha: %d\n\n", p->tamanho);
    }
}

void imprimir_sem_quebra_de_linha(No *no)
{
    No *n = no;

    if (no->valor != NULL)
    {
        printf("%s", n->valor[0]);
        imprimir_sem_quebra_de_linha(n->prox);
    }
    free(n);
}

void imprimir_com_quebra_de_linha(No *no)
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

int vaziap(Pilha *p)
{
    if (p->topo == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
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
