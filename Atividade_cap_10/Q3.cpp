#include <stdio.h>
#include "./lstord.h"
#include <iostream>
using namespace std;


void insSR(int x,Lista *L){

    int achou = 0;
    No *aux = L->inicio;
    while(aux != NULL && achou == 0){
        if(aux->item == x){
            achou = 1;
        }
        aux = aux->prox;
    }

    if(!achou){
        L->ins(x);
    }else{
        cout << "O valor: " << x << " já foi inserido anteriormente na lista" << endl;
    }
    
}


int main(void)
{

    Lista *L = new Lista();
    insSR(2,L);
    insSR(5,L);
    insSR(1,L);
    insSR(4,L);
    insSR(3,L);
    insSR(3,L);
    puts("");


    printf("Sequencia em ordem crescente: \n");
    L->mostra();
    puts("");
    return 0;
}