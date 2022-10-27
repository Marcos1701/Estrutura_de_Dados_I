#include <stdio.h>
#include "./lstord.h"
#include <iostream>
using namespace std;


void adt(float c, int e, Poli *P){

 if( *P == NULL || (*P)->expo < e){
        *P = termo(c, e, *P);
    }else if((*P)->expo == e){
        (*P)->coef += c;
        if((*P)->coef == 0){
            Poli aux = *P;
            *P = aux->prox;
            free(aux);
        }
    }else adt(c, e, &(*P)->prox);
}

int main(){
   
   Poli p = NULL;
   adt(+1, 0, &p);
   adt(-6, 2, &p);
   adt(+3, 5, &p);
   exibeop(p);
   
}