#include <stdio.h>
#include <stdlib.h>

struct No{
    int item;
    No *prox = NULL;
};

struct Lista{
    No *inicio = NULL;
    No *fim = NULL;
};


void addTofinal(int x, Lista *l){
    No *aux;
    aux->item = x;
    if(l->fim == NULL){
       l->inicio = aux;
       l->fim = l->inicio;
    }else{
        l->fim->prox = aux;
    }
    return;
}

void addToinicio(int x, Lista *l){
    No *aux;
    aux->item = x;

    if(l->inicio == NULL){
        l->inicio = aux;
        l->fim = l->inicio;
    }else{
        aux->prox = l->inicio;
        l->inicio = aux;
    }
    return;
}


void exibe(Lista *l){
    No *aux = l->inicio;

    while(aux != NULL){
        printf("=> %d\n", aux->item);
        aux = aux->prox;
    }
    return;    
}

void anexa(Lista *l, Lista *x){

   if(x == NULL) return;
   l->fim->prox = x->inicio;
   l->fim = x->fim;
   return;
}

void destroi(Lista *l){
    No *aux = l->inicio, *aux2;
    
    while(aux != NULL){
        aux2 = aux;
        aux = aux->prox;
        free(aux2);
    }
    free(l);
    l = NULL;
    return;
}

int tamanho(Lista *l){
    int x = 0;
    No *aux = l->inicio;

    while(aux != NULL){
        aux = aux->prox;
        x++;
    }    
   return x;
}

int pertence(int x, Lista *l){
    No *aux = l->inicio;

    while(aux != NULL){
        if(aux->item == x){break; return 0;}
        aux = aux->prox;
    }
    return 1;
}