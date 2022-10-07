#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct aluno
{
    int mat;
    string nome;
} Aluno;

Aluno lista[30];

void incluirDesordenado(Aluno *e)
{
    int index = -1;

    for (int i = 0; lista[i].mat > 0; i++)
    {
        index++;
    }

    if (index < 29)
    {
        lista[index + 1] = *e;
    }
    else
    {
        cout << "Erro, A lista esta cheia!!" << endl;
    }
}

// retorna a posicao do elemento procurado
int procura(int mat)
{
    int aux = -1;
    int tam = (sizeof(lista) / sizeof(Aluno));
    for (int i = 0; i < tam; i++)
    {

        if (lista[i].mat == mat)
        {
            aux = i;
        }
    }

    if (aux == -1)
    {
        cout << "Matricula nao encontrada!!" << endl;
    }
    return aux;
}

// recebe a posicao e imprime o elemento na tela
void mostrar(int pos)
{

    int tam = (sizeof(lista) / sizeof(Aluno));

    if (pos < tam && pos > -1)
    {
        Aluno aux = lista[pos];
        cout << "\nMatricula do aluno: " << aux.mat << endl;
        cout << "Nome do aluno: " << aux.nome << endl
             << endl;
    }
}

// procura o elemento e depois mostra o elemento encontrado (se nao for encontrado informa q ele nao existe)
void consultar(int mat)
{
    Aluno *aux = new Aluno();
    int tam = (sizeof(lista) / sizeof(Aluno));
    int x = 0;

    for (int i = 0; i < tam; i++)
    {
        if (lista[i].mat == mat)
        {
            *aux = lista[i];
            x = 1;
            break;
        }
    }

    if (x)
    {
        cout << "\nMatricula do aluno: " << aux->mat << endl;
        cout << "Nome do aluno: " << aux->nome << endl
             << endl;
    }
    else
    {
        cout << "\nNao existe nenhum aluno cadastrado com essa matricula!!!!" << endl;
    }
}

// estrat�gia 1: colocar o ultimo elemento da lista na posi��o do elemento removido
void remover00()
{
    int cont;
    do
    {
        int mat, pos;
        cout << "\n--- Remover  Aluno ----" << endl;
        cout << "Digite a Matricula do aluno: ";
        cin >> mat;
        pos = procura(mat);

        if (pos != -1)
        {
            int index_ultimo = 0;

            for (int i = 0; lista[i].mat; i++)
                index_ultimo++;

            if (index_ultimo != pos)
            {
                lista[pos] = lista[index_ultimo];
            }
            else
            {
                lista[pos] = lista[pos + 1];
            }
            cout << "Aluno removido com sucesso!!" << endl;
        }
        else
        {
            cout << "Matricula invalida!!\n"
                 << endl;
        }
        cout << "Deseja remover algum aluno? (1-sim/2-nao): ";
        cin >> cont;
    } while (cont == 1);
}
// void remover00(int pos){
//	int index_ultimo = 0;
//
//	for(int i = 0;lista[i].mat; i++) index_ultimo++;
//
//     if(index_ultimo!= pos){
//     lista[pos] = lista[index_ultimo];
//	}else{
//		lista[pos] = lista[pos+1];
//	}
//	return;
// }

// estrat�gia 2: mover TODOS os elementos que est�o AP�S  o elemento que deve ser removido UMA POSI��O A FRENTE.

void remover01()
{

    int cont;
    do
    {
        cout << "\n--- Remover  Aluno ----" << endl;
        int mat, pos;
        cout << "Digite a Matricula do aluno: ";
        cin >> mat;
        pos = procura(mat);

        if (pos != -1)
        {

            for (int i = 0; lista[i].mat; i++)
            {
                lista[i] = lista[i + 1];
            }
            cout << "\nAluno removido com sucesso!!\n"
                 << endl;
        }
        else
        {
            cout << "Matricula invalida!!\n"
                 << endl;
        }
        cout << "Deseja remover algum aluno? (1-sim/2-nao): ";
        cin >> cont;
    } while (cont == 1);
}

// void remover01(int pos){

//   int aux;
//	for(int i = pos;lista[i].mat;i++){
//		lista[i] = lista[i+1];
//		aux = i;
//	}
//  return;
//}

main()
{
    Aluno *a = new Aluno(), *b = new Aluno(), *c = new Aluno(), *d = new Aluno();
    a->mat = 0;
    a->nome = "José";

    b->mat = 1;
    b->nome = "Carlos";

    c->mat = 2;
    c->nome = "Andre";

    d->mat = 3;
    d->nome = "Marcos";

    incluirDesordenado(a);
    incluirDesordenado(b);
    incluirDesordenado(c);
    incluirDesordenado(d);

    mostrar(2);

    consultar(4);
    consultar(3);

    remover00();
    // remover01();
}
