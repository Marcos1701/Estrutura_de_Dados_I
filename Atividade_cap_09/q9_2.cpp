#include "./lista.h"
#include <iostream>

using namespace std;



// (9.2) Crie a função iterativa ocorrencias (x, L), que informa quantas vezes o item X 
// ocorre na lista L. Por exemplo, para L apontando a lista [1,2,1,4,1], a chamada ocorrencias 
// (1,L) deve devolver 3 como resposta.

int iterativa(int x, Lista *l){
    No *aux = l->inicio;  
    int repete = 0;

    while(aux != NULL){
        if(aux->item == x) repete++;
        
        aux = aux->prox;
    }
    return repete;
}

Lista *l = new Lista();
