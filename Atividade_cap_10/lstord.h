#include <stdio.h>
#include <stdlib.h>
class No
{
public:
    int item;
    No *prox;
    No(int m)
    {
        item = m;
        prox = NULL;
    }
};

class Lista
{
public:
    No *inicio;
    No *fim;

    Lista()
    {
        inicio = NULL;
        fim = NULL;
    }

    int lst_vazia()
    {
        return (inicio == NULL);
    }

    void addToFinal(int m)
    {
        No *novo = new No(m);
        if (fim == NULL)
        {
            inicio = novo;
            fim = novo;
        }
        else
        {
            fim->prox = novo;
            fim = novo;
        }
    }

    void ins(int e)
    {

        No *novo = new No(e);
        No *atual = inicio, *aux;

        if (lst_vazia())
        {
            inicio = novo;
            return;
        }
        else if (novo->item < atual->item)
        {
            novo->prox = inicio;
            inicio = novo;
            return;
        }

        while (atual->prox && e > atual->prox->item)
            atual = atual->prox;
        novo->prox = atual->prox;
        atual->prox = novo;

        if(atual == fim) fim = novo;
        // 2, 5, 1, 4, 3
    }

    void addToInicio(int m)
    {

        No *novo = new No(m);
        if (inicio == NULL)
        {
            inicio = novo;
            fim = inicio;
        }
        else
        {
            novo->prox = inicio;
            inicio = novo;
        }
        return;
    }

    void mostra()
    {
        if (lst_vazia())
        {
            printf("\nLista vazia!!!");
        }
        else
        {
            No *aux = inicio;
            for (int i = 0; aux != NULL; aux = aux->prox)
            {
                printf("\nValor: %d\n", aux->item);
                i++;
            }
            printf("\n");
        }
    }

    int remove(int item)
    {

        No *aux = busca(item);

        if (aux == NULL)
        {
            return 0;
        }

        if (aux->item == inicio->item)
        {
            inicio = inicio->prox;
            free(aux);
            return 1;
        }
        No *aux2 = inicio;
        while (aux2->prox->item != aux->item)
        {
            aux2 = aux2->prox;
        }
        aux2->prox = aux->prox;
        free(aux);
        return 1;
    }

    No *busca(int item)
    {
        if (lst_vazia())
        {
            return NULL;
        }
        else
        {
            No *aux = inicio;

            do
            {
                if (aux->item == item)
                {
                    break;
                }
                aux = aux->prox;
            } while (aux != NULL);

            return aux;
        }
    }
};



typedef struct poli{

    float coef;
    int expo;
    struct poli *prox;
} *Poli;

Poli termo(float c, int e,  Poli p){
    Poli n = (Poli)malloc(sizeof(struct Poli));
    n->coef = c;
    n->expo = e;
    n->prox = p;
    return n;
}

void exibeop(Poli P){
    if(P == NULL) return;
    printf("%+.lf", P->coef);
    if(P->expo != 0) printf("x^%d", P->expo);
    exibeop(P->prox);
}
