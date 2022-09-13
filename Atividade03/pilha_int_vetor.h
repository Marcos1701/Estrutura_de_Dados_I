#include <stdio.h>
#include <stdlib.h>

typedef struct pilha
{
    int topo, max, tamanho = 0;
    int *item;
} Pilha;

Pilha *pilha(int tam)
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->topo = -1;
    p->item = (int *)malloc((tam) * sizeof(int));
    p->max = tam;
    return p;
}

void empilha(int valor, Pilha *p)
{

    if (p->topo == -1)
    {
        p->topo++;
        p->tamanho++;
        p->item[p->topo] = valor;
    }
    else if (p->topo == p->max)
    {
        printf("Pilha cheia");
    }
    else
    {
        p->topo++;
        p->tamanho++;
        p->item[p->topo] = valor;
    }

    printf("\nO valor: %d foi empilhado\n\n", valor);
}

void desempilha(Pilha *p)
{
    int valor = p->item[p->topo];

    if (p->topo == -1)
    {
        printf("\nA pilha esta vazia\n\n");
    }
    else
    {
        p->item[p->topo] = 0;
        p->topo--;
        p->tamanho--;
        printf("\nO valor: %d foi desempilhado\n", valor);
        printf("Tamanho atual da pilha: %d\n\n", p->tamanho);
    }
}

void imprimir_com_quebra_de_linha(Pilha *p)
{

    int x = p->topo;
    if (p->topo != -1)
    {
        while (x >= 0)
        {
            printf("=> %d \n", p->item[x]);
            x--;
        }
    }
    else
    {
        printf("A pilha esta vazia\n");
    }
}

void imprimir_sem_quebra_de_linha(Pilha *p)
{
    int x = 0;
    if (p->topo != -1)
    {
        while (x <= p->tamanho)
        {
            printf("%d", p->item[x]);
            x++;
        }
    }
    else
    {
        printf("A pilha esta vazia\n");
    }
}

void destroi(Pilha *p)
{
    free(p);
    p = NULL;
    if (p == NULL)
    {
        printf("Pilha destruida");
    }
}