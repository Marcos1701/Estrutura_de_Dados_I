#include <stdio.h>
#include <stdlib.h>

#define MAX 50
typedef struct pilha
{
    char *item[MAX];
    int max = MAX;
    int topo;
} Pilha;

Pilha *pilha()
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->topo = -1;
    return p;
}

void empilha(char *item, Pilha *p)
{

    if (p->topo == p->max - 1)
    {
        printf("\nA pilha esta cheia\n\n");
    }
    else
    {
        p->topo++;
        p->item[p->topo] = (char *)malloc(20);
        p->item[p->topo][0] = *item;
        printf("\nO valor: %s foi empilhado\n\n", item);
    }
}

void desempilha(Pilha *p)
{

    if (p->topo == -1)
    {
        printf("\nA pilha esta vazia\n\n");
    }
    else
    {
        printf("\nO item: %s foi desempilhado\n\n", *p->item[p->topo]);
        p->item[p->topo][0] = NULL;
        p->topo--;
    }
}

void imprimir(Pilha *p)
{
    int i = p->topo;
    if (p->topo != -1)
    {
        while (p->topo > -1)
        {
            printf("=> %s\n", *p->item[i]);
            i--;
        }
    }
    else
    {
        printf("Pilha vazia..\n\n");
    }
}

// void destroi(Pilha *p)
// {
//     free((p)->item);
//     free(p);
//     p = NULL;
// }