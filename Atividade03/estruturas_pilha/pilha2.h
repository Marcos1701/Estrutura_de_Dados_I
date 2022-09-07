#include <stdio.h>
#include <stdlib.h>


typedef struct pilha{
	char item;
	struct pilha *prox;	
}Pilha;

Pilha *topo = NULL;

Pilha* No(char valor){
	Pilha *n = (Pilha*)malloc(sizeof(Pilha));
	n->item=valor;
	n->prox=NULL;
	return n;	
}

void push(char n){

   Pilha *novo = No(n);
	if(topo == NULL){
		topo = novo;
	}else{
		novo->prox = topo;
		topo = novo;
	}
}
		
char pop(){
	
}

int pilhaVazia(){
		
		}
		
char getTopo(){
	return topo->item;
}
		

		



