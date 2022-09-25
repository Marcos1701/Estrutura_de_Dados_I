#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class No
{
public:
    char nome;
    No *prox;
    No(char n)
    {
        nome = n;
        prox = NULL;
    }
};

class Fila
{
public:
    No *inicio;
    No *fim;

    Fila()
    {
        inicio = NULL;
        fim = NULL;
    }

    void push(char n) // Insere elementos no fim da fila
    {
        No *no = new No(n);

        if (inicio == NULL)
        {
            inicio = no;
            fim = inicio;
        }
        else
        {
            fim->prox = no;
            fim = no;
        }
        cout << "\nO caractere: " << n << " foi empilhado" << endl
             << endl;
        return;
    }

    char pop()
    // Confere se a fila está vazia, caso não esteja, retira o primeiro elemento...
    {
        char aux;
        No *aux_2 = NULL;
        if (inicio == NULL)
        {
            cout << "Fila vazia!!!" << endl
                 << endl;
            aux = '\0';
        }
        else
        {
            aux_2 = inicio;
            aux = inicio->nome;
            inicio = inicio->prox;
        }
        free(aux_2);
        return aux;
    }

    int isEmpty() // confere se a pilha está vazia
    {
        return inicio == NULL;
    }
};

int msg() // exibe o menu e recebe a opção desejada...
{
    cout << "1 - empilha" << endl
         << "2 - desempilha" << endl
         << "0 - sair" << endl
         << "=> ";
    int x;
    cin >> x;
    return x;
}

int main()
{

    cout << "Teste fila class..." << endl;

    Fila *p = new Fila();
    int op = msg();
    char aux;

    while (op != 0)
    // menu de teste
    {
        if (op == 1)
        {
            cout << endl
                 << "emp => ";
            cin >> aux;
            p->push(aux);
        }
        else if (op == 2)
        {
            aux = p->pop();
            if (aux)
                cout << "char desempilhado: " << aux << endl
                     << endl;
        }
        else
        {
            cout << "Opção inválida!!!" << endl;
        }
        op = msg();
    }
    cout << "Bay Bay..." << endl;
}