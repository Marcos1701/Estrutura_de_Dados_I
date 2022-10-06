#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct aluno{
	int mat;
	string nome;	
}Aluno; 

Aluno lista[30];


void incluirDesordenado(Aluno e){
	int index = 0;
	for(int i = 0; lista[i].mat; i++){index++;}

	if(index < 30){
       lista[index] = e;
	}else{
		cout << "Erro, A lista está cheia!!" << endl;
	}
	return;
}

//retorna a posicao do elemento procurado
int procura(int mat){	
	int aux;
	for(int i = 0;lista[i].mat;i++){

		if(lista[i].mat == mat){
			aux = i;
		}
	}

	if(aux){
		cout << "Matricula não encontrada!!" << endl;
	}
	return aux;
}

//recebe a posicao e imprime o elemento na tela
void mostrar(int pos){

	Aluno aux = lista[pos];

	if(aux.mat){
		cout << "Matricula do aluno: " << aux.nome << endl;
        cout << "Nome do aluno: " << aux.nome << endl;
	}
	return;
}

//procura o elemento e depois mostra o elemento encontrado (se nao for encontrado informa q ele nao existe)
void consultar(int mat){
	Aluno aux;
	for(int i = 0; lista[i].mat; i++){
		if(lista[i].mat == mat){
			aux = lista[i];
		}
	}

	if(aux.mat){
	   cout << "Matricula do aluno: " << aux.nome << endl;
       cout << "Nome do aluno: " << aux.nome << endl;
	}else{
		cout << "não existe nenhum aluno cadastrado com essa matricula!!!!" << endl;
	}	
	return;
}

//estrat�gia 1: colocar o ultimo elemento da lista na posi��o do elemento removido
void remover00(){
	    int cont;
    do{
		int mat, pos;
	    cout << endl << "--- Remover  Aluno ----" << endl;
        cin >> cont;
		cout << "Digite a Matricula do aluno: ";
		cin >> mat;
        pos = procura(mat);

		if(pos){
			int index_ultimo = 0;

        	for(int i = 0;lista[i].mat; i++) index_ultimo++;

            if(index_ultimo!= pos){
              lista[pos] = lista[index_ultimo];
	        }else{
		      lista[pos] = lista[pos+1];
	        }
		}else{
			cout << "Matricula inválida!!" << endl;
		}
	    cout << "Deseja remover algum aluno? (1-sim/2-nao): " << endl;
        cin >> cont;
		return;
	}while(cont == 1);
}
//void remover00(int pos){
//	int index_ultimo = 0;
//
//	for(int i = 0;lista[i].mat; i++) index_ultimo++;
//
//    if(index_ultimo!= pos){
//    lista[pos] = lista[index_ultimo];
//	}else{
//		lista[pos] = lista[pos+1];
//	}
//	return;
//}


//estrat�gia 2: mover TODOS os elementos que est�o AP�S  o elemento que deve ser removido UMA POSI��O A FRENTE.

void remover01(){

   int cont;
    do{
	    cout << "/n--- Remover  Aluno ----\n" << endl;
        cin >> cont;
		int mat, pos;
		cout << "Digite a Matricula do aluno: ";
		cin >> mat;
        pos = procura(mat);

		if(pos){

        	for(int i = 0;lista[i].mat; i++){
				lista[i] = lista[i + 1];
			}
		}else{
			cout << "Matricula inválida!!" << endl;
		}
	    cout << "Deseja remover algum aluno? (1-sim/2-nao): " << endl;
        cin >> cont;
	}while(cont == 1);
	return;
}

//void remover01(int pos){

//   int aux;
//	for(int i = pos;lista[i].mat;i++){
//		lista[i] = lista[i+1];
//		aux = i;
//	}
  //  return;
//}

main(){
	Aluno a, b, c, d;
	a.mat = 0;
	a.nome = "José";
	b.mat = 1;
	b.nome = "Carlos";
	c.mat = 2;
	c.nome = "Andre";
	d.mat = 3;
	d.nome = "Marcos";

	incluirDesordenado(a);
	incluirDesordenado(b);
	incluirDesordenado(c);
	incluirDesordenado(d);
	
	mostrar(2);
	consultar(4);
	consultar(3);

    remover00();
    remover01();
}
