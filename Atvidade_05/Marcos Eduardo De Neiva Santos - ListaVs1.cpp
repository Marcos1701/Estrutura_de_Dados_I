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
    cout << "--------- Consultar ---------" << endl;
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
        cout << "Deseja remover outro aluno? (1-sim/2-nao): ";
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
        cout << "Deseja remover outro aluno? (1-sim/2-nao): ";
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

void menu()
{
    cout << "----------- Menu ----------" << endl
         << "\n1 - Inserir Aluno" << endl
         << "2 - Remover Aluno (remover 00)" << endl
         << "3 - Remover Aluno (remover 01)" << endl
         << "4 - Consultar Matricula Aluno" << endl
         << "\n0 - Sair\n"
         << endl
         << "=> ";

    return;
}

Aluno *solicitar_dados_Aluno()
{

    cout << "--------- Inserir Novo Aluno ---------" << endl;
    Aluno *aux = new Aluno();
    int mat;
    string nome;
    cout << "Insira a Matricula do Aluno: ";
    cin >> mat;

    while (procura(mat) != -1)
    {
        cout << "Matricula invalida!!" << endl;
        cout << "Insira a Matricula do Aluno: ";
        cin >> mat;
    }

    aux->mat = mat;

    cout << "Insira o nome do Aluno: ";
    cin >> nome;

    aux->nome = nome;
    return aux;
}

main()
{
    int op;
    do
    {
        menu();
        cin >> op;

        if (op == 1)
        {
            Aluno *e = solicitar_dados_Aluno();
            incluirDesordenado(e);
        }
        else if (op == 2)
        {
            remover00();
        }
        else if (op == 3)
        {
            remover01();
        }
        else if (op == 4)
        {
            int mat;
            cout << "Insira a Matricula do Aluno: ";
            cin >> mat;
            consultar(mat);
        }
        else if (op != 0)
        {
            cout << "Opcao invalida!!!" << endl;
        }
    } while (op != 0);

    cout << "Programa encerrado, Bay Bay" << endl;
}
